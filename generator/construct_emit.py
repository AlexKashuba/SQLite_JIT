from __future__ import print_function
import argparse
import logging
import sys
from vdbe_opcode import get_opcode
from pycparser import c_parser, parse_file, c_generator
from pycparser.c_ast import NodeVisitor, ArrayRef, Assignment, ID as cID, \
Return, Goto, FuncCall, ExprList, Break, Case
from pathlib import Path
from gen_util import OpcodeFinder, CodeFinder
from template_gen import OpcodeTemplateGenerator
import re
from copy import deepcopy

parent_dir = str(Path(__file__).resolve().parent) 

# This is not required if you've installed pycparser into
# your site-packages/ with setup.py
sys.path.extend(['.', '..'])

class EmitterGenerator(c_generator.CGenerator):
    
    def __init__(self):
        super().__init__()
        self.emitter_ast = parse_file(parent_dir+'/cfiles/emitTemplate_prep.c', use_cpp=False)
        finder = CodeFinder()
        self.emitFunc = finder.find_func('emitTxt', self.emitter_ast)
        self.switch = finder.get_switches(self.emitFunc.body)[0]
        self.emit_funcs = []
        self.func_defs = finder.get_funcs(self.emitter_ast)

    def __get_call(self, name):
        return FuncCall(cID(name), ExprList([cID(s) for s in 'p,cOp,&tmp,i'.split(',')]))

    def __get_case(self, op_gen):
        func_call = self.__get_call('emit{}'.format(op_gen.name))
        return Case(cID(op_gen.opcode_name), [func_call, Break()])

    def add_impl(self, op_gen):
        EMIT_FUNC_TEMPL = ''' 
static void emit{}(Vdbe *p, Op *pOp, TxtBuf **buf, int pos) {{
    writeToBuf(buf, "{}; \\n", {});
}} '''
        func_str = EMIT_FUNC_TEMPL.format(op_gen.name, op_gen.get_format_str(), ', '.join(op_gen.params))
        self.switch.block_items.insert(0, self.__get_case(op_gen))
        self.emit_funcs.append(func_str)

    def get_code(self):
        include_str = '#include "emit.h"\n'
        code = include_str + '\n'.join(self.emit_funcs + [self.visit(f) for f in self.func_defs])
        return code

def generate_code(filename):
    ast = parse_file(filename, use_cpp=False)
    opcodes_to_implement = ["OP_Multiply", "OP_Subtract", "OP_Divide", "OP_Integer", "OP_Add" , "OP_ResultRow", "OP_Column", "OP_Le", "OP_Lt", "OP_Ge", "OP_Gt", "OP_Copy", "OP_AggStep", "OP_Eq", "OP_Ne"] 
    opcode_finder = OpcodeFinder(ast)
    code = []
    emitGen = EmitterGenerator()
    for opcode_name in opcodes_to_implement:
        opcode_impl = opcode_finder.find_opcode_impl(opcode_name)
        if opcode_impl is None:
            logger = logging.getLogger("constructor")
            logger.warning("{} not found".format(opcode_name))
        else:
            op_gen = OpcodeTemplateGenerator(opcode_name, debug_mode)
            op_templ = op_gen.visit_Opcode(deepcopy(opcode_impl))
            emitGen.add_impl(op_gen)
            code.append(op_templ)
    
    return ("\n \n".join(code), emitGen.get_code())

debug_mode = False

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("-i", help="preprocessed vdbe file", action="store", default=parent_dir+"/cfiles/vdbe_prep.c")
    parser.add_argument("-o", help="output directory", action="store", default=parent_dir+'/out/')
    parser.add_argument("-d", help="set to debug mode", action="store_const", const=True, default=False)
    args = parser.parse_args()
    templates, emitter = generate_code(args.i)

    debug_mode = args.d
    out_dir = args.o
    try:
        templ_f = out_dir+'/opcodeTemplates.h'
        emit_f = out_dir+'/emit.c'

        with open(templ_f, "w") as f:
            f.write(templates)

        with open(emit_f, 'w') as f:
            f.write(emitter)
    except Exception as e:
        print(e)
        parser.print_help()

from vdbe_opcode import get_opcode
from pycparser import c_parser, parse_file, c_generator
from pycparser.c_ast import NodeVisitor, ArrayRef, Assignment, ID, Return, Goto
import re
import logging

class OpcodeTemplateGenerator(c_generator.CGenerator):
    def __init__(self, opcode_name, debug_mode):
        super().__init__()
        self.debug_mode = debug_mode
        self.opcode_name = opcode_name
        self.opcode = get_opcode(opcode_name)
        self.name = re.match(r"OP_(\w*)", opcode_name).group(1).upper()
        self.param_names = ['pos', 'next']
        self.params = ['pos', 'pos+1']
        self.formats = ['%d', '%d']
        self.breakable = 0
        self.goto_error_re = re.compile(r"(\w*error\w*|no_mem|too_big)")
        self.goto_dict = {}

    def get_name(self):
        return "{}_TEMPL".format(self.name)

    def get_format_str(self):
        return "{}({})".format(self.get_name(), ",".join(self.formats))

    def get_macro(self):
        return "{}({})".format(self.get_name(), ",".join(self.param_names))

    def get_header(self):
        HEADER = "#define {} \\\nL##pos: \\\n"
        return HEADER.format(self.get_macro())

    def visit_Opcode(self, node):
        pOp_assignment = Assignment('=', ID("pOp"), ArrayRef(ID("&aOp"), ID("pos")))
        try:
            node.stmts[0].block_items = [pOp_assignment] + node.stmts[0].block_items
        except Exception as e:
            logger = logging.getLogger("OpGen")
            logger.error("Opcode implementation not enclosed in a block!") 
   
        code = self.visit(node)
        if self.debug_mode:
            code = ["__NL__"+line+"\\" for line in code.split("\n") if line.strip() != ";"]
        else:
            code = [line+"\\" for line in code.split("\n") if line.strip() != ";"]
        code_str = "\n".join(code[1:])[:-1]

        return self.get_header() + code_str+'; \n'

    def visit_Switch(self, node):
        return self.visit_Breakable(node) 

    def visit_For(self, node):
        return self.visit_Breakable(node)

    def visit_While(self, node):
        return self.visit_Breakable(node)

    def visit_Breakable(self, node):
        self.breakable += 1
        method = 'visit_' + node.__class__.__name__
        string = getattr(super(), method, self.generic_visit)(node)
        self.breakable -= 1
        return string

    def visit_Break(self, node):
        if self.breakable == 0:
            return 'goto L##next;'
        else:
            return super().visit_Break(node)

    def visit_StructRef(self, node):
        string = super().visit_StructRef(node)
        try:
            if (node.name.name == "pOp" and
                re.match("p[1,2,3]", node.field.name) is not None):
                self.__add_param(string, 'j'+node.field.name, '%d')
                return 'j'+node.field.name
            
            if node.name.name == "pOp" and node.field.name == "opcode":
                return str(self.opcode)

        except Exception as e:
            logger = logging.getLogger("OpGen")
            logger.warning(e) 

        return string

    def visit_FuncCall(self, node):
        if node.name.name == "assert":
            return ""
        return super().visit_FuncCall(node)
    
    def __add_param(self, param, param_name, format_str):
        if not param_name in self.param_names:
            self.param_names.append(param_name)
            self.params.append(param)
            self.formats.append(format_str)

    def visit_Label(self, node):
        return super().visit_Label(node).replace(':', '##pos:')

    def visit_Goto(self, node):
        if self.goto_error_re.match(node.name) is not None:
            return 'return ERROR;'

        elif node.name == "vdbe_return":
            rc = "ROW" if self.name.find("ROW") != -1 else "OK"
            return 'return {};'.format(rc)

        elif node.name == "jump_to_p2":
            if not "p2" in self.param_names:
                self.__add_param('pOp->p2', 'jp2', '%d')

            return 'goto L##jp2;'

        else:
            return super().visit_Goto(node).replace(';', '##pos;')


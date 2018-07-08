from vdbe_opcode import get_opcode
from pycparser import c_parser, parse_file, c_generator
from pycparser.c_ast import NodeVisitor, ArrayRef, Assignment, ID, Return, Goto
import re

class CodeFinder(NodeVisitor):
    def __init__(self):
        self.funcs_dict = {}
        self.funcs = []
        self.switches = []
        self.cases = []

    def visit_FuncDef(self, node):
        self.funcs_dict[node.decl.name] = node

    def visit_Switch(self, node):
        self.switches.append(node.stmt)
   
    def visit_Case(self, node):
        self.cases.append(node)

    def get_switches(self, node):
        self.visit(node)
        switches = self.switches
        self.switches = []
        return switches

    def get_cases(self, node):
        self.visit(node)
        cases = self.cases
        self.cases = []
        return cases

    def get_funcs(self, node):
        self.visit(node)
        funcs = self.funcs_dict.values()
        self.funcs_dict = {}
        return funcs
   
    def find_func(self, name, node):
        self.visit(node)
        func = self.funcs_dict.get(name, None)
        self.funcs_dict = {}
        return func 

class OpcodeFinder(NodeVisitor):
    def __init__(self, node):
        self.node = node
        VDBE_EXEC = "sqlite3VdbeExec"
        finder = CodeFinder()
        vdbe_exec_f = finder.find_func(VDBE_EXEC, node)
        self.cases = finder.get_cases(finder.get_switches(vdbe_exec_f.body)[0])

    def find_opcode_impl(self, opcode_name):
        opcode = get_opcode(opcode_name)
        i = 0
        length = len(self.cases)
        #TODO: look for breaks instead
        while i < length and int(self.cases[i].expr.value) != opcode:
            i+=1

        while i < length:
            if len(self.cases[i].stmts) > 0:
                return self.cases[i]
            i+=1

        return None


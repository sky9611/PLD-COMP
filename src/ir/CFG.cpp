//
// Created by hvogel on 30/03/18.
//

#include "CFG.h"
#include "../structure/Function.h"

CFG::CFG(Function *ast) {

}

void CFG::add_bb(BasicBlock *bb) {

}

void CFG::gen_asm(ostream &o) {

}

string CFG::IR_reg_to_asm(string reg) {

}

void CFG::gen_asm_prologue(ostream &o) {

}

void CFG::gen_asm_epilogue(ostream &o) {

}

void CFG::add_to_symbol_table(string name, Type t) {
    SymbolType[name] = t;
}

string CFG::create_new_tempvar(Type t) {
    string name = string("tmp_")+to_string(SymbolType.size());
    SymbolType[name] = t;
    return name;
}

int CFG::get_var_index(string name) {
    return SymbolIndex[name];
}

Type CFG::get_var_type(string name) {
    return SymbolType[name];
}

string CFG::new_BB_name() {

}

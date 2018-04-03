//
// Created by hvogel on 30/03/18.
//

#include <iomanip>
#include "CFG.h"
#include "../structure/Function.h"

CFG::CFG(Function *ast):ast(ast) {
    current_bb = new BasicBlock(this, "STARTED_BLOCK");
    bbs.push_back(current_bb);
}

void CFG::add_bb(BasicBlock *bb) {
    bbs.push_back(bb);
}

void CFG::gen_asm(ostream &o) {
    gen_asm_prologue(o);
    for(BasicBlock* bb : bbs){
        bb->gen_asm(o);
    }
    gen_asm_epilogue(o);
}

string CFG::IR_reg_to_asm(string reg) {
    stringstream stream;
    int index = get_var_index(reg);
    if( index < 0){
        stream << '-';
        index = -index;
    }
    stream << "0x" << hex << index;
    stream << "(%rbp)";

    string result( stream.str() );

    return result;
}

void CFG::gen_asm_prologue(ostream &o) {
    o <<    " \t.globl	_" <<  ast->getName() << endl;
    o <<    "\t.type	_" <<  ast->getName() << ", @function" << endl;
    o << "" << ast->getName() << ":"<< endl;
    o <<    "\tpush\t%rbp" << endl;
    o <<    "\tmov\t%rsp,%rbp" << endl;
    o <<    "\tsub\t$0x"<< hex << -nextFreeSymbolIndex;
                      o <<",%rsp" << endl << endl;
}

void CFG::gen_asm_epilogue(ostream &o) {
    o << endl;
    o <<    ".BLOCK_END:" << endl;
    o <<    "\tleaveq" << endl;
    o <<    "\tret" << endl;
    o <<    "\t.size\t" << ast->getName() << ", .-" << ast->getName() << endl << endl<< endl;
}

void CFG::add_to_symbol_table(string name, Type t) {
    SymbolType[name] = t;
    SymbolIndex[name] = nextFreeSymbolIndex -= type::getSize(t)/8;


}

string CFG::create_new_tempvar(Type t) {
    nextFreeSymbolIndex -= type::getSize(t)/8;
    string name = string("tmp_")+to_string(-nextFreeSymbolIndex);
    SymbolType[name] = t;
    SymbolIndex[name] = nextFreeSymbolIndex;
    return name;
}

int CFG::get_var_index(string name) {
    return SymbolIndex[name];
}

int CFG::get_var_size(string name) {
    return type::getSize(get_var_type(name));
}

Type CFG::get_var_type(string name) {
    return SymbolType[name];
}

string CFG::new_BB_name(string basicString) {
    return string("B") + to_string(nextBBnumber++) + string("_") + basicString;
}

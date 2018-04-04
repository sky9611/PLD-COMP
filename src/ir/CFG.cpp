//
// Created by hvogel on 30/03/18.
//

#include <iomanip>
#include "CFG.h"
#include "../structure/Function.h"
#include "ir.h"

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
    o <<    " \t.globl	" <<  ast->getName() << endl;
    o <<    "\t.type	" <<  ast->getName() << ", @function" << endl;
    o << "" << ast->getName() << ":"<< endl;
    o <<    ".START_" << ast->getName() << ": " << endl;
    o <<    "\tpush\t%rbp" << endl;
    o <<    "\tmov\t%rsp,%rbp" << endl;
    o <<    "\tsub\t$0x"<< hex << -nextFreeSymbolIndex;
                      o <<",%rsp" << endl << endl;
    auto params = ast->getParams();

    int nbParmsToSave = params.size() > 6 ? 6 : params.size();

    switch (nbParmsToSave){
        case 6:
            o << "    movl    %r9, %rax" << endl;
            ir::move(o,1,string("var_") + params[5]->getName(), this);
        case 5:
            o << "    movl    %r8, %rax" << endl;
            ir::move(o,1,string("var_") + params[4]->getName(), this);
        case 4:
            o << "    movl    %rcx, %rax" << endl;
            ir::move(o,1,string("var_") + params[3]->getName(), this);
        case 3:
            o << "    movl    %rdx, %rax" << endl;
            ir::move(o,1,string("var_") + params[2]->getName(), this);
        case 2:
            o << "    movl    %rsi, %rax" << endl;
            ir::move(o,1,string("var_") + params[1]->getName(), this);
        case 1:
            o << "    movl    %rdi, %rax" << endl;
            ir::move(o,1,string("var_") + params[0]->getName(), this);

    }

}

void CFG::gen_asm_epilogue(ostream &o) {
    o << endl;
    o <<    ".END_" << ast->getName() << ": " << endl;
    o <<    "\tleaveq" << endl;
    o <<    "\tret" << endl;
    o <<    "\t.size\t" << ast->getName() << ", .-" << ast->getName() << endl << endl<< endl;
}

void CFG::add_to_symbol_table(string name, Type t) {
    SymbolType[name] = t;
    SymbolIndex[name] = nextFreeSymbolIndex -= type::getSize(t)/8;


}
void CFG::add_to_symbol_table_params(string name, Type t) {
    SymbolType[name] = t;
    SymbolIndex[name] = nextFreeSymbolParamsIndex;
    nextFreeSymbolParamsIndex += 8;
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
    return string("B") + to_string(getNextBBnumber()) + string("_") + basicString;
}

int CFG::getNextBBnumber(){
    static int nb = 0;
    return ++nb;
}


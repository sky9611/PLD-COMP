//
// Created by hvogel on 02/04/18.
//

#include "IRInstrCall.h"
#include "../BasicBlock.h"
#include <iomanip>
#include "../ir.h"

IRInstrCall::IRInstrCall(BasicBlock* bb, Type t, string dest, string fctName, vector<string> vars)
        : IRInstr(bb,t),dest(dest), fctName(fctName), vars(vars){}

void IRInstrCall::gen_asm(ostream &o){
    int nbInStack = vars.size() > 6 ?  vars.size()-6 : 0;

    for (int i = vars.size() - 1; i >= 6; i--) {
        ir::move(o, vars[i], 1, bb->cfg);
        o << "    pushl    %rax" << endl;
    }
    switch (vars.size()-nbInStack){
        case 6:
            ir::move(o, vars[5], 1, bb->cfg);
            o << "    mov    %rax, %r9" << endl;
        case 5:
            ir::move(o, vars[4], 1, bb->cfg);
            o << "    mov    %rax, %r8" << endl;
        case 4:
            ir::move(o, vars[3], 1, bb->cfg);
            o << "    mov    %rax, %rcx" << endl;
        case 3:
            ir::move(o, vars[2], 1, bb->cfg);
            o << "    mov    %rax, %rdx" << endl;
        case 2:
            ir::move(o, vars[1], 1, bb->cfg);
            o << "    mov    %rax, %rsi" << endl;
        case 1:
            ir::move(o, vars[0], 1, bb->cfg);
            o << "    mov    %rax, %rdi" << endl;
    }

    o << "    call    " << fctName << endl;
    if(nbInStack > 0){
        o << "    add     $" << (nbInStack * 8) << ",%rsp" << endl;
    }
    if(t != VOID){
        ir::move(o,1,dest, bb->cfg);
    }
    string tmpVar = bb->cfg->create_new_tempvar(t);

}
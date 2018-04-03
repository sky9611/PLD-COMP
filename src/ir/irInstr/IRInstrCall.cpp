//
// Created by hvogel on 02/04/18.
//

#include "IRInstrCall.h"
#include "../BasicBlock.h"
#include <iomanip>

IRInstrCall::IRInstrCall(BasicBlock* bb, Type t, string dest, string fctName, vector<string> vars)
        : IRInstr(bb,t),dest(dest), fctName(fctName), vars(vars){}

void IRInstrCall::gen_asm(ostream &o){
    for(int i = vars.size()-1 ; i>=0 ; i--){
        move(o, vars[i],1);
        o << "    push    %rax" << endl;
    }
    o << "    sub     $0x8,%rsp"; // add space for return addr


    o << "    call    " << fctName << endl;
    o << "    add     $0x"  << hex << vars.size()*8+8; // +8 for return space
        o << ",%rsp" << endl;
    string tmpVar = bb->cfg->create_new_tempvar(t);
    o << "    mov     " << bb->cfg->getReturnReg() << ", %rax";


}
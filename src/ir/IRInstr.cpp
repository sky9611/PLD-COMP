//
// Created by hvogel on 30/03/18.
//

#include "IRInstr.h"
#include "BasicBlock.h"

IRInstr::IRInstr(BasicBlock *bb_, Type t):bb(bb),t(t) {

}

string IRInstr::getAsmReg(int regNumber, Type t){
    string regName;

}
string IRInstr::getAsmReg(int regNumber, int size){

    string regName;
    switch (regNumber){
        case 0: regName = "a";
        case 1: regName = "d";
        case 2: regName = "c";
        case 3: regName = "b";

    }
    switch (size){
        case 8: // 8 bits
            return regName + string("l");
        case 16: // 16 bits
            return regName + string("x");
        case 32: // 32 bits
            return string("e") +regName + string("x");
        case 64: // 64 bits
            return string("r") +regName + string("x");
    }
}
void IRInstr::move(ostream &o, int regNumber, string var){
    int sizeVar = bb->cfg->get_var_size(var);
    string asmVar = bb->cfg->IR_reg_to_asm(var);
    switch (sizeVar){
        case 8: // move 8 bits to reg 32 byte (movzbl)
            o << "    movzbl  " << asmVar << ", " << getAsmReg(regNumber,32) << endl;
        case 16: // move 16 bit to reg 32 byte (movswl)
            o << "    movswl  " << asmVar << ", " << getAsmReg(regNumber,32) << endl;
        case 32: // move 32 bit to reg 32 byte (mov)
            o << "    mov  " << asmVar << ", " << getAsmReg(regNumber,32) << endl;
        case 64: // move 64 bit to reg 64 byte (mov)
            o << "    mov  " << asmVar << ", " << getAsmReg(regNumber,32) << endl;
    }
}
void IRInstr::move(ostream &o, string var, int regNumber){
    int sizeVar = bb->cfg->get_var_size(var);
    string asmVar = bb->cfg->IR_reg_to_asm(var);
    o << getAsmReg(regNumber,sizeVar) << "    mov  " << asmVar;
}
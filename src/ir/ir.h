//
// Created by hvogel on 03/04/18.
//

#ifndef PLD_COMP_IR_H
#define PLD_COMP_IR_H

#include "../structure/Program.h"
#include "../structure/Function.h"
#include "CFG.h"

namespace ir {
    static void gen_asm(ostream &o, string fileName, Program *p) {

        o << endl
          << endl
          << "\t.file\t\"" << fileName << "\"" << endl
          << "\t.text" << endl
          << endl;

        for (auto f : p->getFunctions()) {
            f->getCfg()->gen_asm(o);
        }
    }
    static string getAsmReg(int regNumber, int size){

        string regName;
        switch (regNumber){
            case 1: regName = "a";
                break;
            case 2: regName = "d";
                break;
            case 3: regName = "c";
                break;
            case 4: regName = "b";
                break;
            default:
                throw runtime_error("[IRInstr::getAsmReg] NOT IMPLEMENTED");

        }
        switch (size){
            case 8: // 8 bits
                return string("%") +regName + string("l");
            case 16: // 16 bits
                return string("%") +regName + string("x");
            case 32: // 32 bits
                return string("%e") +regName + string("x");
            case 64: // 64 bits
                return string("%r") +regName + string("x");
        }
    }
    static char getSufixAsmSize(int size){
        switch (size){
            case 8: return 'b';
            case 16: return 'w';
            case 32: return 'l';
            case 64: return 'q';
        }
    }

    static void move(ostream &o, string var, int regNumber, CFG* cfg){
        int sizeVar = cfg->get_var_size(var);
        string asmVar = cfg->IR_reg_to_asm(var);
        switch (sizeVar){
            case 8: // move 8 bits to reg 32 byte (movzbl)
                o << "    movzbl  " << asmVar << ", " << getAsmReg(regNumber,32) << endl;
                break;
            case 16: // move 16 bit to reg 32 byte (movswl)
                o << "    movswl  " << asmVar << ", " << getAsmReg(regNumber,32) << endl;
                break;
            case 32: // move 32 bit to reg 32 byte (mov)
                o << "    movl  " << asmVar << ", " << getAsmReg(regNumber,32) << endl;
                break;
            case 64: // move 64 bit to reg 64 byte (mov)
                o << "    movq  " << asmVar << ", " << getAsmReg(regNumber,64) << endl;
                break;
        }
    }
    static void move(ostream &o, int regNumber, string var, CFG* cfg){
        int sizeVar = cfg->get_var_size(var);
        string asmVar = cfg->IR_reg_to_asm(var);
        string reg = getAsmReg(regNumber, sizeVar);
        o << "    mov" << ir::getSufixAsmSize(sizeVar) << "  " << reg << ", " << asmVar  << endl;
    }
};


#endif //PLD_COMP_IR_H

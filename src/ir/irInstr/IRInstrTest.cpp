//
// Created by hvogel on 03/04/18.
//

#include "IRInstrTest.h"
#include "../BasicBlock.h"
#include "../ir.h"

IRInstrTest::IRInstrTest(BasicBlock* bb, Type t, string testVar)
        :IRInstr(bb, t), testVar(testVar){}

void IRInstrTest::gen_asm(ostream &o){
    o << "\tcmp" << ir::getSufixAsmSize(type::getSize(t)) << " $0, " << bb->cfg->IR_reg_to_asm(testVar);
}
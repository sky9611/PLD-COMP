//
// Created by hvogel on 02/04/18.
//

#include "IRInstrUnaryOperator.h"

IRInstrUnaryOperator::IRInstrUnaryOperator(BasicBlock* bb_, Type t, string dest, string var, BinaryOperator op)
        :IRInstrBasicOperator(bb,t,dest, var,IRInstrUnaryOperator::OperatorToAsmOperator(op)){}
IRInstrUnaryOperator::IRInstrUnaryOperator(BasicBlock* bb_, Type t, string dest, string var, string asmOp)
        :IRInstr(bb_, t), dest(dest), var(var), asmOp(asmOp){}



void IRInstrBasicOperator::gen_asm(ostream &o){
    string reg = getAsmReg(1, type::getSize(t) == 64 ? 63 : 32);

    move(var, 1);

    o << "    "<< asmOp << " " <<  reg1 << reg2 << endl; //reg1 = reg1 <OPERATOR> reg2

    move(1,dest);
}

string IRInstrBasicOperator::OperatorToAsmOperator(UnaryOperator op){
    switch (op){
        case NOT:
            return "not";
    }
}

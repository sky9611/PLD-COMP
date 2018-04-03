//
// Created by hvogel on 02/04/18.
//

#include "IRInstrUnaryOperator.h"

IRInstrUnaryOperator::IRInstrUnaryOperator(BasicBlock* bb_, Type t, string dest, string var, UnaryOperator _op)
        :IRInstr(bb_, t), dest(dest), var(var), op(_op){}


void IRInstrUnaryOperator::gen_asm(ostream &o){
    string reg = getAsmReg(1, type::getSize(t) == 64 ? 64 : 32);
    move(o, var, 1);

    o << "    "<< asmOp << " " <<  reg1 << reg2 << endl; //reg1 = reg1 <OPERATOR> reg2

    move(o, 1,dest);
}

string IRInstrUnaryOperator::OperatorToAsmOperator(UnaryOperator op){
    switch (op){
        case NOT:
            return "not";
    }
}

void IRInstrUnaryOperator::gen_asm_not(ostream &o)
{
    move(o, var, 1);

    int size = bb->cfg->get_var_size(var);

    string reg1 = getAsmReg(1,size);

    o << "    "<< OperatorToAsmOperator(op) << " " <<  reg1 << endl; //reg1 = reg1 <OPERATOR> reg2

    move(o, 1,dest);
}

void IRInstrUnaryOperator::gen_asm_minus(ostream &o)
{
    move(o, var, 1);

    int size = bb->cfg->get_var_size(var);

    string reg1 = getAsmReg(1,size);

    o << "    "<< OperatorToAsmOperator(op) << " " <<  reg1 << endl; //reg1 = reg1 <OPERATOR> reg2

    move(o, 1,dest);
}

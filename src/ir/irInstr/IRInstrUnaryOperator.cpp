//
// Created by hvogel on 02/04/18.
//

#include "IRInstrUnaryOperator.h"
#include "../BasicBlock.h"

IRInstrUnaryOperator::IRInstrUnaryOperator(BasicBlock* bb_, Type t, string dest, string var, UnaryOperator _op)
        :IRInstr(bb_, t), dest(dest), var(var), op(_op){}


void IRInstrUnaryOperator::gen_asm(ostream &o){
    string reg = getAsmReg(1, type::getSize(t) == 64 ? 64 : 32);
    if(op==NOT)
        gen_asm_not(o);
    else if (op == MINUS)
        gen_asm_minus(o);
}

string IRInstrUnaryOperator::OperatorToAsmOperator(UnaryOperator op){
    switch (op){
        case MINUS:
            return "neg";
    }
}

void IRInstrUnaryOperator::gen_asm_not(ostream &o)
{
    move(o, var, 1);

    int size = bb->cfg->get_var_size(var);

    string reg1 = getAsmReg(1,size);

    if(size == 32){
        o << "    "<< "cmpl" << " " << "$0x0," <<  reg1 << endl;

        o << "    "<< "sete %al" << endl;

        o << "    "<< "movzbl %al, %eax" << endl;

        move(o,1,dest);
    } else if (size == 64){
        o << "    "<< "cmpq" << " " << "$0x0," <<  reg1 << endl;

        o << "    "<< "sete %al" << endl;

        o << "    "<< "movzbl %al, %eax" << endl;

        move(o,1,dest);
    }



    o << "    "<< OperatorToAsmOperator(op) << " " <<  reg1 << endl; //reg1 = reg1 <OPERATOR> reg2

    move(o, 1,dest);
}

void IRInstrUnaryOperator::gen_asm_minus(ostream &o)
{
    move(o, var, 1);

    int size = bb->cfg->get_var_size(var);

    string reg1 = getAsmReg(1,size);

    o << "    "<< "neg" << " " <<  reg1 << endl; //reg1 = reg1 <OPERATOR> reg2

    move(o, 1,dest);
}

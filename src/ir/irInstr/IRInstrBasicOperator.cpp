//
// Created by hvogel on 31/03/18.
//

#include "IRInstrBasicOperator.h"
#include "../BasicBlock.h"

IRInstrBasicOperator::IRInstrBasicOperator(BasicBlock* bb, Type t, string dest, string v1, string v2, BinaryOperator op)
        :IRInstrBasicOperator(bb,t,dest, v1, v2,IRInstrBasicOperator::OperatorToAsmOperator(op)){}
IRInstrBasicOperator::IRInstrBasicOperator(BasicBlock* bb, Type t, string dest, string v1, string v2, string asmOp)
        :IRInstr(bb, t), dest(dest), v1(v1), v2(v2), asmOp(asmOp){}

void IRInstrBasicOperator::gen_asm(ostream &o){

    string reg1;
    string reg2;

    if(type::getSize(t) == 64) { //utilisation des registre en 64 byte


        int sizeV1 = bb->cfg->get_var_size(v1);
        int sizeV2 = bb->cfg->get_var_size(v2);

        reg1 = getAsmReg(1, 64);
        reg2 = getAsmReg(2, 64);

        if(sizeV1 == 64 || sizeV2 == 64) { // passage de 32 a 64 obligatoir

            // on charge les var non 64 bit dans des reg 32 bite
            if (sizeV1 != 64) move(o, v1, 1);
            if (sizeV2 != 64) move(o, v2, 2);

            // passage des reg 32 en 64
            o << "    cltq" << endl;

            // on charge les var 64 bit
            if (sizeV1 == 64) move(o, v1, 1);
            if (sizeV2 == 64) move(o, v2, 2);
        }else{
            move(o,v1,1); // var1 => reg1
            move(o,v2,2); // var2 => reg2
        }

    }else{
        reg1 = getAsmReg(1,32);
        reg2 = getAsmReg(2,32);

        move(o,v1,1); // var1 => reg1
        move(o,v2,2); // var2 => reg2
    }

    o << "    "<< asmOp << " " <<  reg1 << reg2 << endl; //reg1 = reg1 <OPERATOR> reg2

    move(o,1,dest);
}

string IRInstrBasicOperator::OperatorToAsmOperator(BinaryOperator op){
    switch (op){
        case Star: return "imul" ;
//        case Div: return IRInstr::Operation::div ;
            //case Mod: return IRInstr::Operation:: ;
        case Plus: return "add" ;
        case Minus: return "sub" ;
            //case LeftShift: return IRInstr::Operation:: ;
            //case RightShift: return IRInstr::Operation:: ;
  //      case Less: return IRInstr::Operation::cmp_le ;
            //case LessEqual: return "" ;
        case Greater: return "" ;
            //case GreaterEqual: return "" ;
        case Equal: return "" ;
            //case NotEqual: return "" ;
        case And: return "and";
            //case Caret: return "" ;
        case Or: return "or" ;
            //case AndAnd: return "" ;
            //case OrOr: return "" ;
    }
}

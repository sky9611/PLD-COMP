//
// Created by hvogel on 31/03/18.
//

#include "IRInstrBasicOperator.h"
#include "../BasicBlock.h"

IRInstrBasicOperator::IRInstrBasicOperator(BasicBlock* bb, Type t, string dest, string v1, string v2, BinaryOperator op)
        :IRInstr(bb, t), dest(dest), v1(v1), v2(v2), op(op){}

void IRInstrBasicOperator::gen_asm(ostream &o){

    auto asmOpInfo = OperatorToAsmOperator(op);

    int sizeV1 = bb->cfg->get_var_size(v1);
    int sizeV2 = bb->cfg->get_var_size(v2);
    int sizeRes = type::getSize(t);

    string reg1;
    string reg2;

    //ETAP 1 CHARGER VAR dans des reg 32 ou 64 byte

    if(type::getSize(t) == 64) { //utilisation des registre en 64 byte


        reg1 = getAsmReg(1, 64);
        reg2 = getAsmReg(2, 64);

        if(sizeV1 == 64 || sizeV2 == 64) { // passage de 32 a 64 obligatoir

            // on charge les var non 64 bit dans des reg 32 bite
            if (sizeV1 != 64) move(o, v1, 1);
            if (sizeV2 != 64) move(o, v2, 2);

            // passage des reg 32 en 64
            o << "\tcltq" << endl;

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

    //ETAP 2 Appliquer l'operateur et metre le resultat dans le 1er registre (reg a)

    switch (asmOpInfo.type){
        case EQUATION:
            o << "\t"<< asmOpInfo.asmOp << " " <<  reg2 << ", " << reg1 << endl; //reg1 = reg1 <OPERATOR> reg2
            break;
        case COMPARATOR : ;
            o << "\tcmp" << getSufixAsmSize(sizeRes) << " " <<  reg2 << ", " << reg1 << endl;
            o << "\t" << asmOpInfo.asmOp << " %al" << endl;
        default:
            o << "UNKNOWOP" << endl;
    }

    //ETAP 3 enregister le resutlat

    move(o,1,dest);
}

IRInstrBasicOperator::OperatorInfo IRInstrBasicOperator::OperatorToAsmOperator(BinaryOperator op){
    switch (op){
        case BinaryOperator::Star: return {EQUATION ,"mul"};
        case BinaryOperator::Plus: return {EQUATION ,"add"};
        case BinaryOperator::Minus: return {EQUATION ,"sub"};
        case BinaryOperator::And: return {EQUATION ,"and"};
        case BinaryOperator::Less : return {COMPARATOR ,"setl"} ;
        case BinaryOperator::LessEqual : return {COMPARATOR ,"setle"};
        case BinaryOperator::Greater : return {COMPARATOR ,"setg"} ;
        case BinaryOperator::GreaterEqual : return {COMPARATOR ,"setge"};
        case BinaryOperator::Equal : return {COMPARATOR ,"sete"} ;
        default: return {UNKNOWN ,"UNKNOWN"};
    }
}

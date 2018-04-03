//
// Created by hvogel on 02/04/18.
//

#ifndef PLD_COMP_IRINSTRUNARYOPERATOR_H
#define PLD_COMP_IRINSTRUNARYOPERATOR_H

#include "../../structure/Operator.h"

class IRInstrUnaryOperator {
protected:
    string asmOp;
    string dest, var;
public:
    IRInstrUnaryOperator(BasicBlock* bb_, Type t, string dest, string v1, string v2, string asmOp);
    IRInstrUnaryOperator(BasicBlock* bb_, Type t, string dest, string v1, string v2, UnaryOperator op);

    virtual void gen_asm(ostream &o);

    static string OperatorToAsmOperator(BinaryOperator op);
};


#endif //PLD_COMP_IRINSTRUNARYOPERATOR_H

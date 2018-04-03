//
// Created by hvogel on 31/03/18.
//

#ifndef PLD_COMP_IRBASICOPERATOR_H
#define PLD_COMP_IRBASICOPERATOR_H

#include "../IRInstr.h"
#include "../../structure/Operator.h"

class IRInstrBasicOperator : public IRInstr{
protected:
    BinaryOperator op;
    string dest, v1, v2;
public:
    IRInstrBasicOperator(BasicBlock* bb_, Type t, string dest, string v1, string v2, BinaryOperator op);

    virtual void gen_asm(ostream &o);

    static string IROperatorToAsmOperator(IRInstr::Operation op);
    static string OperatorToAsmOperator(BinaryOperator op);

};


#endif //PLD_COMP_IRBASICOPERATOR_H

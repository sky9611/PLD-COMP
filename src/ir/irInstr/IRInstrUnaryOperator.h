//
// Created by hvogel on 02/04/18.
//

#ifndef PLD_COMP_IRINSTRUNARYOPERATOR_H
#define PLD_COMP_IRINSTRUNARYOPERATOR_H

#include "../../structure/Operator.h"
#include "../IRInstr.h"

class IRInstrUnaryOperator : public IRInstr{
protected:
    UnaryOperator op;
    string dest, var;
public:
    IRInstrUnaryOperator(BasicBlock* bb_, Type t, string dest, string var, UnaryOperator op);

    virtual void gen_asm(ostream &o);

    void gen_asm_not(ostream &o);

    void gen_asm_minus(ostream &o);

    static string OperatorToAsmOperator(UnaryOperator op);
};


#endif //PLD_COMP_IRINSTRUNARYOPERATOR_H

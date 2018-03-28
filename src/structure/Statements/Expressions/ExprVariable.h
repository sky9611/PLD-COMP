//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRVARIABLE_H
#define PLD_COMP_EXPRVARIABLE_H

class ExprVariable;

#include "Expression.h"

class ExprVariable : public Expression
{
private:
    cmmVar *var;
public:

    ExprVariable(cmmScope *scope, cmmVar *var);
    virtual ~ExprVariable() override;

    virtual Type getType();
};


#endif //PLD_COMP_EXPRVARIABLE_H

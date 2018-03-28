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
    ~ExprVariable() override;

public:
    ExprVariable(cmmScope *scope, Type type, cmmVar *var);
};


#endif //PLD_COMP_EXPRVARIABLE_H

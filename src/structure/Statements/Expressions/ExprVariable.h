//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRVARIABLE_H
#define PLD_COMP_EXPRVARIABLE_H

class ExprVariable;

#include "Expression.h"

class ExprVariable : public Expression
{
protected:
    cmmVar *var;
public:

    ExprVariable(cmmScope *scope, cmmVar *var);
    virtual ~ExprVariable();

    virtual Type getType()const;
};


#endif //PLD_COMP_EXPRVARIABLE_H

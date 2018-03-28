//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRVALUE_H
#define PLD_COMP_EXPRVALUE_H

class ExprValue;

#include "Expression.h"

class ExprValue : public Expression{
public:
    ~ExprValue() override;

    ExprValue(cmmScope *scope, Type type);
};


#endif //PLD_COMP_EXPRVALUE_H

//
// Created by hvogel on 28/03/18.
//

#ifndef PLD_COMP_EXPRARRAY_H
#define PLD_COMP_EXPRARRAY_H

class ExprArray;

#include "ExprVariable.h"
#include "Expression.h"
#include "../../cmmArray.h"
#include "../../cmmScope.h"
#include "../../Type.h"

class ExprArray :public ExprVariable{
protected:
    Expression* expression;

public:

    ExprArray(cmmScope *scope, cmmArray *array, Expression* expression );
    virtual ~ExprArray();

    Expression* getExpression() const;

    virtual Type getType();

};


#endif //PLD_COMP_EXPRARRAY_H

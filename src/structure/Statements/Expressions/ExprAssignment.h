//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRASSIGNMENT_H
#define PLD_COMP_EXPRASSIGNMENT_H

class ExprAssignment;

#include "Expression.h"
#include "../../Operator.h"

class ExprAssignment : public Expression
{
private:
    cmmVar *var;
    Expression *expr;

    bool postReturn;

public:
    ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr);
    ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr, bool postReturn);
    virtual ~ExprAssignment();

    cmmVar *getVar() const;

    Expression *getExpr() const;

    virtual Type getType()const;


};


#endif //PLD_COMP_EXPRASSIGNMENT_H

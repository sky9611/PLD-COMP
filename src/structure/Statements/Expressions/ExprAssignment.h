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

public:
    ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr);
    virtual ~ExprAssignment();

    cmmVar *getVar() const{return var;}

    Expression *getExpr() const{return expr;}

    virtual Type getType(){return var->getType();}


};


#endif //PLD_COMP_EXPRASSIGNMENT_H

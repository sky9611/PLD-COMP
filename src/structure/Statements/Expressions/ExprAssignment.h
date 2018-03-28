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
    Expression *expr1;
    Expression *expr2;
    AssignmentOperator op;

public:
    ~ExprAssignment() override;

    cmmVar *getVar() const;

    void setVar(cmmVar *var);

    Expression *getExpr1() const;

    void setExpr1(Expression *expr1);

    Expression *getExpr2() const;

    void setExpr2(Expression *expr2);

    AssignmentOperator getOp() const;

    void setOp(AssignmentOperator op);

    ExprAssignment(cmmScope *scope, Type type, cmmVar *var, Expression *expr1, Expression *expr2,
                   AssignmentOperator op);
};


#endif //PLD_COMP_EXPRASSIGNMENT_H

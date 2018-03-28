//
// Created by zuodu on 25/03/2018.
//

#include "ExprAssignment.h"

ExprAssignment::ExprAssignment(cmmScope *scope, Type type, cmmVar *var, Expression *expr1, Expression *expr2,
                               AssignmentOperator op) : Expression(scope, type), var(var), expr1(expr1), expr2(expr2),
                                                        op(op)
{}

ExprAssignment::~ExprAssignment()
= default;

cmmVar *ExprAssignment::getVar() const
{
    return var;
}

void ExprAssignment::setVar(cmmVar *var)
{
    ExprAssignment::var = var;
}

Expression *ExprAssignment::getExpr1() const
{
    return expr1;
}

void ExprAssignment::setExpr1(Expression *expr1)
{
    ExprAssignment::expr1 = expr1;
}

Expression *ExprAssignment::getExpr2() const
{
    return expr2;
}

void ExprAssignment::setExpr2(Expression *expr2)
{
    ExprAssignment::expr2 = expr2;
}

AssignmentOperator ExprAssignment::getOp() const
{
    return op;
}

void ExprAssignment::setOp(AssignmentOperator op)
{
    ExprAssignment::op = op;
}

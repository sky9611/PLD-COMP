//
// Created by zuodu on 25/03/2018.
//

#include "ExprBinary.h"

ExprBinary::ExprBinary(cmmScope *scope, Type type, Expression *expr1, Expression *expr2, BinaryOperator op)
        : Expression(scope, type), expr1(expr1), expr2(expr2), op(op)
{}

ExprBinary::~ExprBinary()
= default;

Expression *ExprBinary::getExpr1() const
{
    return expr1;
}

void ExprBinary::setExpr1(Expression *expr1)
{
    ExprBinary::expr1 = expr1;
}

Expression *ExprBinary::getExpr2() const
{
    return expr2;
}

void ExprBinary::setExpr2(Expression *expr2)
{
    ExprBinary::expr2 = expr2;
}

BinaryOperator ExprBinary::getOp() const
{
    return op;
}

void ExprBinary::setOp(BinaryOperator op)
{
    ExprBinary::op = op;
}

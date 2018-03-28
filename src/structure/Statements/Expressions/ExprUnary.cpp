//
// Created by zuodu on 25/03/2018.
//

#include "ExprUnary.h"

ExprUnary::ExprUnary(cmmScope *scope, Expression *expr, UnaryOperator op) : Expression(scope),
                                                                                       expr(expr), op(op)
{}

ExprUnary::~ExprUnary()
{
    delete expr;
}

Expression *ExprUnary::getExpr() const
{
    return expr;
}

void ExprUnary::setExpr(Expression *expr)
{
    ExprUnary::expr = expr;
}

UnaryOperator ExprUnary::getOp() const
{
    return op;
}

void ExprUnary::setOp(UnaryOperator op)
{
    ExprUnary::op = op;
}

Type ExprUnary::getType(){
    return expr->getType();
}
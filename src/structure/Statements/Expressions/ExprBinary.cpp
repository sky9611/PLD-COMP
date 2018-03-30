//
// Created by zuodu on 25/03/2018.
//

#include "ExprBinary.h"

ExprBinary::ExprBinary(cmmScope *scope, Expression *expr1, Expression *expr2, BinaryOperator op)
        : Expression(scope), expr1(expr1), expr2(expr2), op(op)
{}

ExprBinary::~ExprBinary(){
    delete expr1;
    delete expr2;
}

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

Type ExprBinary::getType()const{
    return  expr1->getType(); // TODO Verifier les 2 expr pour conaitre le vrais type
}

string ExprBinary::buildIR(CFG* cfg)const{

}

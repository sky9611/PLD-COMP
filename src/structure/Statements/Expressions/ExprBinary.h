//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRBINAIRE_H
#define PLD_COMP_EXPRBINAIRE_H

class ExprBinary;

#include "Expression.h"
#include "../../Operator.h"

class ExprBinary : public Expression
{
private:
    Expression *expr1, * expr2;
    BinaryOperator op;

public:
    ExprBinary(cmmScope *scope, Expression *expr1, Expression *expr2, BinaryOperator op);

    virtual ~ExprBinary();

    Expression *getExpr1() const;

    void setExpr1(Expression *expr1);

    Expression *getExpr2() const;

    void setExpr2(Expression *expr2);

    BinaryOperator getOp() const;

    void setOp(BinaryOperator op);

    virtual Type getType()const;

};


#endif //PLD_COMP_EXPRBINAIRE_H

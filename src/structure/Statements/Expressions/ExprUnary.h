//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRUNAIRE_H
#define PLD_COMP_EXPRUNAIRE_H

class ExprUnary;

#include "Expression.h"
#include "../../Operator.h"

class ExprUnary : public Expression
{
private:
    Expression *expr;
    UnaryOperator op;
public:
    ~ExprUnary() override;

    Expression *getExpr() const;

    void setExpr(Expression *expr);

    UnaryOperator getOp() const;

    void setOp(UnaryOperator op);

    ExprUnary(cmmScope *scope, Type type, Expression *expr, UnaryOperator op);
};


#endif //PLD_COMP_EXPRUNAIRE_H

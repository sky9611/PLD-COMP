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
    ExprUnary(cmmScope *scope, Expression *expr, UnaryOperator op);
    virtual ~ExprUnary();

    Expression *getExpr() const;

    void setExpr(Expression *expr);

    UnaryOperator getOp() const;

    void setOp(UnaryOperator op);

    virtual Type getType()const override;

    virtual string buildIR(CFG* cfg)const override;

    IRInstr::Operation getIRInstOperation()const;

    vector<cmmVar *> CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) override;

    void CheckVariablesDeclares(map<cmmVar*,bool> &varDeclares) override;

};


#endif //PLD_COMP_EXPRUNAIRE_H

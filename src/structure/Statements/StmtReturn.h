//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_RETURNSTATEMENT_H
#define PLD_COMP_RETURNSTATEMENT_H


#include "Statement.h"
#include "Expressions/Expression.h"

class StmtReturn : public Statement
{
private:
    Expression *expr = nullptr;

public:
    StmtReturn(cmmScope *_scope) : Statement(_scope){}

    StmtReturn(cmmScope *_scope, Expression *_expr) : Statement(_scope), expr(_expr) {}

    ~StmtReturn() override;

    Expression *getExpr() const;

    virtual string buildIR(CFG* cfg)const override;

    vector<cmmVar *> CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) override;

    void CheckVariablesDeclares(map<cmmVar*,bool> &varDeclares) override {};
};


#endif //PLD_COMP_RETURNSTATEMENT_H

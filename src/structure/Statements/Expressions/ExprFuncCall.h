//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRFUNCCALL_H
#define PLD_COMP_EXPRFUNCCALL_H

class ExprFuncCall;

#include "Expression.h"
#include "../../Function.h"

class ExprFuncCall: public Expression
{
private:
    Function * function;
    vector<Expression*> params;
public:
    ExprFuncCall(cmmScope* scope, Function *function, const vector<Expression*> &params );
    virtual ~ExprFuncCall();

    Function *getFunction() const;

    vector<Expression*> getParams()const;

    virtual Type getType()const override;

    virtual string buildIR(CFG* cfg)const override;

    vector<cmmVar *> CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) override;

    void CheckVariablesDeclares(map<cmmVar*,bool> &varDeclares) override;

};


#endif //PLD_COMP_EXPRFUNCCALL_H

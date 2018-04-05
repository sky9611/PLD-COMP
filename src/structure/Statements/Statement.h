//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_STATEMENT_H
#define PLD_COMP_STATEMENT_H

class Statement;

#include "../cmmScope.h"
#include "../../ir/CFG.h"

class Statement
{
protected:
    cmmScope * scope;

public:
    Statement(cmmScope * scope);

    virtual ~Statement() = 0;

    void setParent(cmmScope * _scope){scope = _scope;};

    cmmScope * getParent(cmmScope *){return scope;}

    virtual string buildIR(CFG* cfg)const =  0;

    virtual vector<cmmVar*> CheckVariablesAffectes(vector<cmmVar*> varAffectPrec) = 0;

    virtual bool hasStmtReturn() = 0;


};


#endif //PLD_COMP_STATEMENT_H

//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_BLOCK_H
#define PLD_COMP_BLOCK_H

class StmtBlock;

#include "Statement.h"
#include "../cmmScope.h"

class StmtBlock : public Statement, public cmmBasicScope{
public:
    StmtBlock(cmmScope * scope): Statement(scope),cmmBasicScope("StmtBlock", scope){}
    virtual void addStatement(Statement* statement) override {statements.push_back(statement);}

    ~StmtBlock() override;

    void setStatements(const vector<Statement *> &statements);

    const vector<Statement *> &getStatements() const;

    virtual string buildIR(CFG* cfg)const override;

    vector<cmmVar *> CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) override;

    virtual bool hasStmtReturn();

private:
    vector<Statement *> statements;
};


#endif //PLD_COMP_BLOCK_H

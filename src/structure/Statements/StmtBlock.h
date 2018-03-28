//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_BLOCK_H
#define PLD_COMP_BLOCK_H


#include "Statement.h"
#include "../cmmScope.h"

class StmtBlock : public Statement, public cmmBasicScope{
public:
    explicit StmtBlock(cmmScope * _scope): Statement(_scope),cmmBasicScope("StmtBlock"){}
    virtual void addStatement(Statement* statement){statements.push_back(statement);}

    ~StmtBlock() override;

    void setStatements(const vector<Statement *> &statements);

    const vector<Statement *> &getStatements() const;

private:
    vector<Statement *> statements;
};


#endif //PLD_COMP_BLOCK_H

//
// Created by zuodu on 25/03/2018.
//

#include "StmtBlock.h"

StmtBlock::~StmtBlock()
{
    for(auto statement : statements)delete statement;
}

const vector<Statement *> &StmtBlock::getStatements() const
{
    return statements;
}

void StmtBlock::setStatements(const vector<Statement *> &statements)
{
    StmtBlock::statements = statements;
}

string StmtBlock::buildIR(CFG* cfg)const{
    for(Statement* stmt: statements){
        stmt->buildIR(cfg);
    }
}

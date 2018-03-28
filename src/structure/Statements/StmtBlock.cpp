//
// Created by zuodu on 25/03/2018.
//

#include "StmtBlock.h"

StmtBlock::~StmtBlock()
{
    delete statements;
}

const vector<Statement *> &StmtBlock::getStatements() const
{
    return statements;
}

void StmtBlock::setStatements(const vector<Statement *> &statements)
{
    StmtBlock::statements = statements;
}

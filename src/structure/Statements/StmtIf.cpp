//
// Created by zuodu on 25/03/2018.
//

#include "StmtIf.h"

StmtIf::~StmtIf()
{
    delete test;
    delete block;
    delete elseBlock;
}

Expression *StmtIf::getTest() const
{
    return test;
}

StmtBlock *StmtIf::getBlock() const
{
    return block;
}

StmtBlock *StmtIf::getElseBlock() const
{
    return elseBlock;
}

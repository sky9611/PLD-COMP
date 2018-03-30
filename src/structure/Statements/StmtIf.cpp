//
// Created by zuodu on 25/03/2018.
//

#include "StmtIf.h"

StmtIf::~StmtIf()
{
    delete test;
    delete block;
    if(elseBlock == nullptr) delete elseBlock;
}

Expression *StmtIf::getTest() const
{
    return test;
}

Statement *StmtIf::getBlock() const
{
    return block;
}

Statement *StmtIf::getElseBlock() const
{
    return elseBlock;
}

string StmtIf::buildIR(CFG* cfg)const{

}

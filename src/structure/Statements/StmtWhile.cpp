//
// Created by zuodu on 25/03/2018.
//

#include "StmtWhile.h"

WhileStatement::~WhileStatement()
{
    delete test;
    delete block;
}

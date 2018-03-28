//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_LOOP_H
#define PLD_COMP_LOOP_H


#include "Statement.h"
#include "Expressions/Expression.h"
#include "StmtBlock.h"

class WhileStatement : public Statement
{
private:
    Expression * test;
    StmtBlock * block;

public:
    WhileStatement(cmmScope * _scope, Expression *_test, StmtBlock *_block):Statement(_scope),test(_test), block(_block){}

    ~WhileStatement() override;
};


#endif //PLD_COMP_LOOP_H

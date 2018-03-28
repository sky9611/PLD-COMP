//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_IFSTATEMENT_H
#define PLD_COMP_IFSTATEMENT_H


#include "Statement.h"
#include "Expressions/Expression.h"
#include "StmtBlock.h"

class StmtIf : public Statement
{
private:
    Expression * test;
    StmtBlock * block;
    StmtBlock * elseBlock = nullptr;

public:
    StmtIf(cmmScope * _scope, Expression * _test, StmtBlock * _block):Statement(_scope),test(_test), block(_block){}

    StmtIf(cmmScope * _scope, Expression * _test, StmtBlock * _block, StmtBlock * _elseBlock):StmtIf(_scope, _test, _block),elseBlock(_elseBlock){}

    ~StmtIf() override;

    StmtBlock *getBlock() const;

    StmtBlock *getElseBlock() const;

    Expression *getTest() const;
/*
    void setStatement(Statement * _block){block = _block;}

    void setElseStatement(Statement * _elseStmt){elseStmt = _elseStmt;}*/
};


#endif //PLD_COMP_IFSTATEMENT_H

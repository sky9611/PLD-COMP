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
    Statement* block;
    Statement * elseBlock;

public:
    StmtIf(cmmScope * scope, Expression * test, Statement * block): StmtIf(scope,test,block,nullptr){}

    StmtIf(cmmScope * scope, Expression * test, Statement * block, Statement * elseBlock): Statement(scope),test(test),block(block),elseBlock(elseBlock){}

    ~StmtIf() override;

    Statement *getBlock() const;

    Statement *getElseBlock() const;

    Expression *getTest() const;
/*
    void setStatement(Statement * _block){block = _block;}

    void setElseStatement(Statement * _elseStmt){elseStmt = _elseStmt;}*/

    virtual string buildIR(CFG* cfg)const override;
};


#endif //PLD_COMP_IFSTATEMENT_H

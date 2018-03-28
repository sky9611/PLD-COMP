//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_IFSTATEMENT_H
#define PLD_COMP_IFSTATEMENT_H


#include "Statement.h"
#include "Expressions/Expression.h"

class StmtIf : public Statement
{
private:
    Expression * test;
    Statement * stmt;
    Statement * elseStmt;

public:
    StmtIf(cmmScope * _scope, Expression * _test, Statement * _stmt, Statement * _elseStmt):Statement(_scope),test(_test),stmt(_stmt),elseStmt(_elseStmt){}
};


#endif //PLD_COMP_IFSTATEMENT_H

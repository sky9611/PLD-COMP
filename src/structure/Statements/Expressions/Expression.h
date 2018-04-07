//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRESSION_H
#define PLD_COMP_EXPRESSION_H


#include "../Statement.h"

class Expression : public Statement {
public:
    virtual ~Expression();

    virtual Type getType() const =0;

    virtual bool hasStmtReturn();

public:
    Expression( cmmScope *scope );

};


#endif //PLD_COMP_EXPRESSION_H

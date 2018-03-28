//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRESSION_H
#define PLD_COMP_EXPRESSION_H


#include "../Statement.h"

class Expression : public Statement
{
private:
    Type type;
public:
    ~Expression() override;

    Type getType() const;

    void setType(Type type);

public:
    Expression(cmmScope *scope, Type type);
};


#endif //PLD_COMP_EXPRESSION_H

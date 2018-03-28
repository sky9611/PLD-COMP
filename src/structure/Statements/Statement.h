//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_STATEMENT_H
#define PLD_COMP_STATEMENT_H

#include "../cmmScope.h"

class Statement
{
public:
    Statement();

    virtual ~Statement() = 0;

    void setParent(cmmScope *);
};


#endif //PLD_COMP_STATEMENT_H

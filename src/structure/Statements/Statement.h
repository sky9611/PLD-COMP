//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_STATEMENT_H
#define PLD_COMP_STATEMENT_H

#include "../cmmScope.h"

class Statement
{
protected:
    cmmScope * scope;

public:
    Statement(cmmScope * scope);

    virtual ~Statement() = 0;

    void setParent(cmmScope * _scope){scope = _scope;};

    cmmScope * getParent(cmmScope *){return scope;}

};


#endif //PLD_COMP_STATEMENT_H

//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRFUNCCALL_H
#define PLD_COMP_EXPRFUNCCALL_H

class ExprFuncCall;

#include "Expression.h"

class ExprFuncCall: public Expression
{
private:
    Function * function;
public:
    ~ExprFuncCall() override;

    ExprFuncCall(cmmScope *scope, Type type, Function *function);

    Function *getFunction() const;

    void setFunction(Function *function);
};

Function *ExprFuncCall::getFunction() const
{
    return function;
}

void ExprFuncCall::setFunction(Function *function)
{
    ExprFuncCall::function = function;
}


#endif //PLD_COMP_EXPRFUNCCALL_H

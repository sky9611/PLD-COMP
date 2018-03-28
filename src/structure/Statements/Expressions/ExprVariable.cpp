//
// Created by zuodu on 25/03/2018.
//

#include "ExprVariable.h"

ExprVariable::ExprVariable(cmmScope *scope, cmmVar *var) : Expression(scope), var(var)
{}

ExprVariable::~ExprVariable()
= default;

Type ExprVariable::getType() const{
    return var->getType();
}
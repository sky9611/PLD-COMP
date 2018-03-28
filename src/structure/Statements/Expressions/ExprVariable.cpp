//
// Created by zuodu on 25/03/2018.
//

#include "ExprVariable.h"

ExprVariable::ExprVariable(cmmScope *scope, Type type, cmmVar *var) : Expression(scope, type), var(var)
{}

ExprVariable::~ExprVariable()
= default;

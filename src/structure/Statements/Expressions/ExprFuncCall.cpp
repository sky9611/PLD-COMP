//
// Created by zuodu on 25/03/2018.
//

#include "ExprFuncCall.h"

ExprFuncCall::ExprFuncCall(cmmScope *scope, Type type, Function *function) : Expression(scope, type), function(function)
{}

ExprFuncCall::~ExprFuncCall()
= default;

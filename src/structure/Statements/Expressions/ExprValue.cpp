//
// Created by zuodu on 25/03/2018.
//

#include "ExprValue.h"

ExprValue::~ExprValue() = default;

ExprValue::ExprValue(cmmScope *scope, Type type) : Expression(scope, type)
{}

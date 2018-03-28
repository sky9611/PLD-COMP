//
// Created by zuodu on 25/03/2018.
//

#include "Expression.h"

Expression::Expression(cmmScope *scope, Type type) : Statement(scope), type(type)
{}

Expression::~Expression()
= default;

Type Expression::getType() const
{
    return type;
}

void Expression::setType(Type type)
{
    Expression::type = type;
}

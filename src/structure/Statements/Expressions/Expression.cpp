//
// Created by zuodu on 25/03/2018.
//

#include "Expression.h"

Expression::Expression( cmmScope *scope ) : Statement( scope ) {}

bool Expression::hasStmtReturn() {
    return false;
}

Expression::~Expression()
= default;



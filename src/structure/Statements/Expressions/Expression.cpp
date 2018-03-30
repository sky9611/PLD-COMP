//
// Created by zuodu on 25/03/2018.
//

#include "Expression.h"

Expression::Expression(cmmScope *scope) : Statement(scope)
{}

Expression::~Expression()
= default;

string Expression::buildIR(CFG* cfg)const{

}


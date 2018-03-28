//
// Created by zuodu on 25/03/2018.
//

#include "Program.h"
#include "Function.h"

Program::Program(): cmmBasicScope("Program"){}

Program::~Program()
{
    for(auto defPair : globalContext) delete defPair.second;
    for(auto statment: initStatments) delete statment;
}

void Program::addVar(cmmVar *var)
{
    globalContext[var->getName()] = var;
}

void Program::addFunction(Function *function)
{
    globalContext[function->getName()] = function;
}

Program *Program::getProgramScope() {
    return this;
}

cmmDef *Program::getDefLocal(string name) {
    return globalContext[name];
}

void Program::addStatement(Statement *statment) {
    this->initStatments.push_back(statment);
}

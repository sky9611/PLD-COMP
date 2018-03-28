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
    if(globalContext.find(var->getName()) != globalContext.end()){
        throw cmmRuntimeException(string("[Program::addVar] varName alredy use : ") + var->getName() );
    }
    globalContext[var->getName()] = var;
}

void Program::addFunction(Function *function)
{
    if(globalContext.find(function->getName()) != globalContext.end()){
        throw cmmRuntimeException(string("[Program::addFunction] functionName alredy use : ") + function->getName() );
    }
    globalContext[function->getName()] = function;
}

Program *Program::getProgramScope() {
    return this;
}

cmmDef *Program::getDef(string name) {
    return globalContext[name];
}

void Program::addStatement(Statement *statment) {
    this->initStatments.push_back(statment);
}

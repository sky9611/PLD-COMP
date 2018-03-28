//
// Created by wth on 2018/3/24.
//

#include "Function.h"


Function::Function(Program* program, Type type, const string &name,const vector<cmmVar*> &params, cmmParser::FctDefinitionContext *ctx):cmmScope("Function"), cmmDef(type,name), program(program), params(params)
{
    content = new StmtBlock();
    hasReturnValue = false;

    for(auto param : params) {
        if (localContext.find(param->getName()) != localContext.end()) { // varName alredy use
            throw cmmRuntimeException(string("[Function:Function()] Multiple definition du paramétre ") + param->getName() +
                                              string(" pour la fonction ") + name);
        }
        localContext[param->getName()] = param;
    }
}
Function::~Function(){}

bool Function::getHasReturnValue()
{
    return this->hasReturnValue;
}

void Function::setHasReturnValue(bool hasReturnValue)
{
    this->hasReturnValue = hasReturnValue;
}


std::string Function::toString()
{
    return "Function[ name=" + this->getName() + "]";
}

Function *Function::getFunctionScope() {
    return this;
}

Program *Function::getParent() {
    return program;
}

const cmmContext &Function::getLocalContext() const {
    return localContext;
}

void Function::addVar(cmmVar *var) {
    if(localContext.find(var->getName()) != localContext.end()){
        throw cmmRuntimeException(string("[Function::addVar] varName alredy use : ") + var->getName() );
    }
    localContext[var->getName()] = var;
}

void Function::addStatement(Statement *statment) {

}

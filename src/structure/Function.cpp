//
// Created by wth on 2018/3/24.
//

#include "Function.h"


Function::Function(Program* program, Type type, const string &name,const vector<cmmVar*> &params, cmmParser::FctDefinitionContext *ctx):cmmScope("Function"), cmmDef(type,name), program(program), params(params)
{
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

antlrcpp::Any Function::getReturnValue()
{
    return this->returnValue;
}



void Function::setReturnValue(antlrcpp::Any returnValue)
{
    if (this->type != cmmOperator::getType(returnValue)) {
        throw cmmRuntimeException("Invalid value conversion for '" + this->name + "'.");
    }

    if (this->type == INT32_T) {
        this->returnValue = returnValue.as<int>();
    }
    if (this->type == INT64_T) {
        this->returnValue = returnValue.as<long>();
    }
    if (this->type == CHAR) {
        this->returnValue = returnValue.as<char>();
    }

    this->setHasReturnValue(true);
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

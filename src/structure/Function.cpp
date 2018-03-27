//
// Created by wth on 2018/3/24.
//

#include "Function.h"


Function::Function(Program* program, Type type, string name, cmmParser::FctDefinitionContext *ctx, cmmContext& globalContext):cmmScope("Function"), cmmDef(type,name), program(program)
{
    params = new ParamsDefinition(ctx->fctBrace(), globalContext, localContext);
    hasReturnValue = false;

}
Function::~Function(){
    delete params;
}

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

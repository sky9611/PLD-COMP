//
// Created by wth on 2018/3/24.
//

#include "Function.h"

Function::Function(string name, const std::string &type,
                   cmmParser::FctDefinitionContext *ctx)
{

    this->name = std::move(name);

    if (type == "int32_t ") {
        this->type = INT32_T;
    } else if (type == "int64_t ") {
        this->type = INT64_T;
    } else if (type == "char ") {
        this->type = CHAR;
    } else if (type == "void ") {
        this->type = VOID;
    }

    this->context = ctx;
    this->hasReturnValue = false;

}

Function::Function(std::string name, Type type, cmmParser::FctDefinitionContext *ctx)
{

    this->name = name;

    this->type = type;

    this->context = ctx;

    this->hasReturnValue = false;

}

bool Function::getHasReturnValue()
{
    return this->hasReturnValue;
}

void Function::setHasReturnValue(bool hasReturnValue)
{
    this->hasReturnValue = hasReturnValue;
}


void Function::setContext(cmmParser::FctDefinitionContext *ctx)
{
    this->context = context;
}


Type Function::getType()
{
    return this->type;
}

antlrcpp::Any Function::getReturnValue()
{
    return this->returnValue;
}

std::string Function::getName()
{
    return this->name;
}

std::vector<antlrcpp::Any> Function::getParamValues()
{
    return this->paramValues;
}

void Function::addParamValue(antlrcpp::Any v)
{
    this->paramValues.push_back(v);
}

void Function::addParamID(std::string s)
{
    this->paramIDs.push_back(s);
}

std::vector<std::string> Function::getParamIDs()
{
    return this->paramIDs;
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


cmmParser::FctDefinitionContext *Function::getContext()
{
    return this->context;
}


std::string Function::toString()
{
    return "Function[ name=" + this->getName() + "]";
}

Function *Function::clone()
{
    return new Function(this->name, this->type, this->context);
}

Function::~Function()
{

}

void Function::addVariable(cmmVar *var)
{
    this->varReferences.insert(pair<string, cmmVar *>(var->getName(), var));
}

bool Function::isVarDeclared(string ref)
{
    return !(varReferences.find(ref) == varReferences.end());
}

map<string, cmmVar*> Function::getVarReferenceTable()
{
    return varReferences;
}

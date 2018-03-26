//
// Created by zuodu on 25/03/2018.
//

#include "Program.h"

Program::Program()
= default;

Program::~Program()
{
    auto it = funcReferences.begin();

    while (it != funcReferences.end()) {
        delete (it->second);
        it++;
    }

    funcReferences.clear();

    auto iter = globalVarReferences.begin();

    while (iter != globalVarReferences.end()) {
        delete (iter->second);
        iter++;
    }

    globalVarReferences.clear();

    if (!mainFunction)
        return;

    delete mainFunction;
}

void Program::addGlobalVariable(cmmVar *var)
{
    this->globalVarReferences.insert(pair<string, cmmVar *>(var->getName(), var));
}

void Program::addFunction(Function *function)
{
    this->funcReferences.insert(pair<string, Function *>(function->getName(), function));
}

void Program::setMainFunction(Function *mainF)
{
    this->mainFunction = mainF;
}

Function *Program::getMainFunction()
{
    return this->mainFunction;
}

bool Program::isVarDeclared(string ref)
{
    return !(globalVarReferences.find(ref) == globalVarReferences.end());
}

map<string, Function *> Program::getFuncReferenceTable()
{
    return this->funcReferences;
}

map<string, cmmVar *> Program::getGlobalVarReferenceTable()
{
    return this->globalVarReferences;
}

bool Program::isFuncDeclared(string ref)
{
    return !(funcReferences.find(ref) == funcReferences.end());
}

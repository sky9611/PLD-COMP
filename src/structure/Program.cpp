//
// Created by zuodu on 25/03/2018.
//

#include "Program.h"

Program::Program()
= default;

Program::~Program()
{
    auto it = defsReferences.begin();

    while (it != defsReferences.end()) {
        delete (it->second);
        it++;
    }

    defsReferences.clear();

    if (!mainFunction)
        return;

    delete mainFunction;
}

void Program::addGlobalVariable(cmmVar *var)
{
    this->defsReferences.insert(pair<string, cmmVar *>(var->getName(), var));
}

map<string, cmmDef *> Program::getReferenceTable()
{
    return this->defsReferences;
}

void Program::addFunction(Function *function)
{
    this->defsReferences.insert(pair<string, Function *>(function->getName(), function));
}

void Program::setMainFunction(Function *mainF)
{
    this->mainFunction = mainF;
}

Function *Program::getMainFunction()
{
    return this->mainFunction;
}

bool Program::isVarOrFuncDeclared(string ref)
{
    return !(defsReferences.find(ref) == defsReferences.end());
}
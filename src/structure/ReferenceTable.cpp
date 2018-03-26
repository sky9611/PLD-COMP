//
// Created by wth on 2018/3/24.
//

#include "ReferenceTable.h"

ReferenceTable::ReferenceTable()
{
    cycle = false;
}

bool ReferenceTable::isCycle()
{
    return cycle;
}

void ReferenceTable::setCycle(bool isCycle)
{
    this->cycle = isCycle;
}

bool ReferenceTable::isVarDeclared(string blkRef, string ref)
{
    if (cmmVarReferences.at(blkRef).find(ref) == cmmVarReferences.at(blkRef).end()) {
        return false;
    }
    return true;
}

bool ReferenceTable::isFunctionDeclared(string ref)
{
    if (functionReferences.find(ref) == functionReferences.end()) {
        return false;
    }
    return true;
}

cmmVar *ReferenceTable::getVar(string blkRef, string ref)
{
    return cmmVarReferences.at(blkRef).at(ref);
}

Function *ReferenceTable::getFunction(string ref)
{
    return functionReferences.at(ref);
}

void ReferenceTable::addcmmVar(string blkRef, string ref, cmmVar *var)
{
    cmmVarReferences.at(blkRef).insert(pair<string, cmmVar *>(ref, var));
}

void ReferenceTable::addFunction(string ref, Function *func)
{
    functionReferences.insert(pair<string, Function *>(ref, func));
}

map<string, map<string, cmmVar *>> ReferenceTable::getVarReferences()
{
    return this->cmmVarReferences;
}

map<string, Function *> ReferenceTable::getFunctionReferences()
{
    return this->functionReferences;
}

void ReferenceTable::deleteBlock(string ref)
{
    cmmVarReferences.erase(ref);
}

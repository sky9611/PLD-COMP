//
// Created by wth on 2018/3/24.
//

#ifndef CMM_REFERENCETABLE_H
#define CMM_REFERENCETABLE_H

#include "Function.h"
#include "cmmVar.h"
#include <map>

using namespace std;

class ReferenceTable
{

private:
    map<string, map<string, cmmVar *>> cmmVarReferences;
    map<string, Function *> functionReferences;
    bool cycle;

public:
    ReferenceTable();

    bool isCycle();

    void setCycle(bool isCycle);

    bool isVarDeclared(string blkRef, string ref);

    bool isFunctionDeclared(string ref);

    cmmVar *getVar(string blkRef, string ref);

    Function *getFunction(string ref);

    void addcmmVar(string blkRef, string ref, cmmVar *cmmVar);

    void addFunction(string ref, Function *func);

    void deleteBlock(string ref);

    map<string, map<string,cmmVar*>> getVarReferences();

    map<string, Function*> getFunctionReferences();

};

#endif //CMM_REFERENCETABLE_H

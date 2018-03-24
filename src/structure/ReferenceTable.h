//
// Created by wth on 2018/3/24.
//

#ifndef CMM_REFERENCETABLE_H
#define CMM_REFERENCETABLE_H

#include "Function.h"
#include "cmmVar.h"
#include <map>

class ReferenceTable{

private:
    std::map<std::string, cmmVar*> cmmVarReferences;
    std::map<std::string, Function*> functionReferences;
    bool cycle;

public:
    ReferenceTable();

    bool isCycle();

    void setCycle ( bool isCycle );

    bool isVarDeclared ( std::string ref );

    bool isFunctionDeclared ( std::string ref );

    cmmVar* getVar ( std::string ref );

    Function* getFunction ( std::string ref );

    void addcmmVar ( std::string ref, cmmVar* cmmVar );

    void addFunction ( std::string ref, Function* func );

    std::map<std::string, cmmVar*> getVarReferences();

    std::map<std::string, Function*> getFunctionReferences();

};

#endif //CMM_REFERENCETABLE_H

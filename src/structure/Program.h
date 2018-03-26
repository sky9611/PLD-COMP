//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_PROGRAM_H
#define PLD_COMP_PROGRAM_H

#include "Function.h"

class Program
{
public:
    Program();

    virtual ~Program();

    void setMainFunction(Function *mainF);

    Function* getMainFunction();

    void addGlobalVariable(cmmVar *var);

    map<string, cmmVar *> getGlobalVarReferenceTable();

    bool isVarDeclared(string ref);

    void addFunction(Function *function);

    map<string, Function *> getFuncReferenceTable();

    bool isFuncDeclared(string ref);

protected:
    map<string, cmmVar *> globalVarReferences;
    map<string, Function *> funcReferences;
    Function * mainFunction;

};


#endif //PLD_COMP_PROGRAM_H

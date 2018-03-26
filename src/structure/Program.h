//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_PROGRAM_H
#define PLD_COMP_PROGRAM_H

#include "cmmVar.h"
#include "Function.h"

class Program
{
public:
    Program();

    virtual ~Program();

    void setMainFunction(Function *mainF);

    Function* getMainFunction();

    void addGlobalVariable(cmmVar *var);

    map<string, cmmDef *> getReferenceTable();

    void addFunction(Function *function);

    bool isVarOrFuncDeclared(string ref);

protected:
    map<string, cmmDef *> defsReferences;
    Function * mainFunction;
};


#endif //PLD_COMP_PROGRAM_H

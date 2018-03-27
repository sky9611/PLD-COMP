//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_PROGRAM_H
#define PLD_COMP_PROGRAM_H
class Program;

class Function; //#include "Function.h"
#include "cmmVar.h"
#include "cmmScope.h"

class Program: public cmmBasicScope
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

    virtual Program* getProgramScope();
    virtual Function* getFunctionScope();

protected:
    map<string, cmmVar *> globalVarReferences;
    map<string, Function *> funcReferences;
    Function * mainFunction;

    cmmContext globalContext;
public:
    const cmmContext &getGlobalContext() const;

};


#endif //PLD_COMP_PROGRAM_H

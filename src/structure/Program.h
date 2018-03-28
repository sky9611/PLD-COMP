//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_PROGRAM_H
#define PLD_COMP_PROGRAM_H

class Program;
class Function; //#include "Function.h"

#include "cmmVar.h"
#include "cmmScope.h"
#include "Statements/Statement.h"

class Program: public cmmBasicScope
{
public:
    Program();

    virtual ~Program();

    virtual void addVar(cmmVar *var);

    virtual void addFunction(Function *function);

    virtual cmmDef* getDef(string name);

    virtual Program* getProgramScope();

    virtual void addStatement(Statement* statment);

protected:

    cmmContext globalContext;

    vector<Statement*> initStatments;

};


#endif //PLD_COMP_PROGRAM_H

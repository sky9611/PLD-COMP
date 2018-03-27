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

    virtual void addVar(cmmVar *var);

    virtual void addFunction(Function *function);

    virtual cmmDef* getDef(string name);

    virtual Program* getProgramScope();

protected:

    cmmContext globalContext;


};


#endif //PLD_COMP_PROGRAM_H

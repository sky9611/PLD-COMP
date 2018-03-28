//
// Created by hvogel on 27/03/18.
//

#ifndef PLD_COMP_CMMSCOPE_H
#define PLD_COMP_CMMSCOPE_H

class cmmScope;
class cmmBasicScop;

class Function;
class Program;

#include <string>
#include "cmmVar.h"
#include "Statements/Statement.h"

using namespace std;

class cmmScope {
protected:
    string scopeName;

public:
    cmmScope(string scopeName):scopeName(scopeName){}
    virtual ~cmmScope(){}

    virtual string getScopeName(){return scopeName;};
    virtual cmmScope* getParent() = 0;
    virtual Function* getFunctionScope(){ return  getParent()->getFunctionScope(); }
    virtual Program* getProgramScope(){ return  getParent()->getProgramScope(); };

    virtual void addVar(cmmVar *pVar){throw cmmRuntimeException("[cmmScope::addVar] This scope don't accept var");} // Overwite this methode if you want to do that
    virtual cmmDef* getDefLocal(string varName){return nullptr;}
    virtual cmmDef* getDef(string varName);
    virtual void addStatement(Statement* statment) = 0;
};

class cmmBasicScope : public cmmScope{
protected:
    cmmScope* parent;
public:
    cmmBasicScope(string scopeName):cmmBasicScope(scopeName, nullptr){}
    cmmBasicScope(string scopeName, cmmScope* parent):cmmScope(scopeName), parent(parent){}
    virtual ~cmmBasicScope(){}

    virtual cmmScope* getParent(){return parent;}
};


#endif //PLD_COMP_CMMSCOPE_H

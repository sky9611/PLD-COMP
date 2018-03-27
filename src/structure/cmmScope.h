//
// Created by hvogel on 27/03/18.
//

#ifndef PLD_COMP_CMMSCOPE_H
#define PLD_COMP_CMMSCOPE_H

#include <string>

using namespace std;

class cmmScope;
class cmmBasicScop;

class Function;
class Program;

class cmmScope {
private:
    string scopeName;

public:
    cmmScope(string scopeName):scopeName(scopeName){}
    virtual ~cmmScope(){}

    virtual string getScopeName(){return scopeName;};
    virtual cmmScope* getParent() = 0;
    virtual Function* getFunctionScope(){ return  getParent()->getFunctionScope(); }
    virtual Program* getProgramScope(){ return  getParent()->getProgramScope(); };
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

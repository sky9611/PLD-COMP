//
// Created by zuodu on 25/03/2018.
//

#include "Program.h"
#include "Function.h"
#include <set>



Program::Program(): cmmBasicScope("Program"){
    putchar = new Function(this, Type::VOID , "putchar",vector<cmmVar*>({new cmmVar(Type::CHAR,"param1")}));
    getchar = new Function(this, Type::CHAR , "getchar",vector<cmmVar*>({}));
}

Program::~Program()
{
    for(auto defPair : globalContext) delete defPair.second;
    for(auto statment: initStatments) delete statment;
    delete putchar;
    delete getchar;
}

void Program::addVar(cmmVar *var)
{
    globalContext[var->getName()] = var;
    vars.push_back(var);
}

void Program::addFunction(Function *function)
{
    globalContext[function->getName()] = function;
    functions.push_back(function);
}

Program *Program::getProgramScope() {
    return this;
}

cmmDef *Program::getDefLocal(string name) {

    if(name == "putchar") return putchar;
    if(name == "getchar") return getchar;

    return globalContext[name];
}

void Program::addStatement(Statement *statment) {
    this->initStatments.push_back(statment);
}

void Program::builIR(){
    for(Function* f : getFunctions()){
        f->builIR();
    }
}

cmmContext Program::getContext(){
    return globalContext;
}

const vector<Function *> &Program::getFunctions() const {
    return functions;
}

const vector<cmmVar *> &Program::getVars() const {
    return vars;
}

void Program::performMisuseAnalysis() {
    vector<cmmVar*> initVars;
    for(Statement* s : initStatments){
        initVars = s->CheckVariablesAffectes(initVars);
    }
    vector<cmmVar*> globalVars = initVars;
    for(Function* f : functions){
        f->performMisuseAnalysis(globalVars);
    }
}

void Program::performUnuseAnalysis() {
    map<cmmVar*,bool> listVar;
    for(Statement* s : initStatments){
        s->CheckVariablesDeclares(listVar);
    }
    for(Function* f : functions){
        f->performUnuseAnalysis(listVar);
    }
    //parcours et warning
    map<cmmVar*,bool>::iterator it;
    for(it = listVar.begin();it != listVar.end();++it){
        if(it->second == false){
            cerr<<"Warning : Variable "<<it->first->toString()<<" is never used. Consider removing it."<<endl;
        }
    }
}

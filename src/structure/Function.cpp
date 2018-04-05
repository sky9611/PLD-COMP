//
// Created by wth on 2018/3/24.
//

#include "Function.h"
#include "Statements/StmtBlock.h"

Function::Function(Program* program, Type type, const string &name,const vector<cmmVar*> &params):cmmScope("Function"), cmmDef(type,name), program(program), params(params)
{
    content = new StmtBlock(this);
    hasReturnValue = false;

    cfg = new CFG(this);

    int i =0;

    for(auto param : params) {
        if (localContext.find(param->getName()) != localContext.end()) { // varName alredy use
            throw cmmRuntimeException(string("[Function:Function()] Multiple definition du paramétre ") + param->getName() +
                                              string(" pour la fonction ") + name);
        }
        localContext[param->getName()] = param;
        if(i<6) {
            cfg->add_to_symbol_table(string("var_") + param->getName(), param->getType());
        }else {
            cfg->add_to_symbol_table_params(string("var_") + param->getName(), param->getType());
        }

        i++;
    }
}
Function::~Function(){
    delete cfg;
    delete content;
    for(auto a : localContext)delete a.second;
}

bool Function::getHasReturnValue()
{
    return this->hasReturnValue;
}

void Function::setHasReturnValue(bool hasReturnValue)
{
    this->hasReturnValue = hasReturnValue;
}


std::string Function::toString()
{
    return "Function[ name=" + this->getName() + "]";
}

Function *Function::getFunctionScope() {
    return this;
}

Program *Function::getParent() {
    return program;
}

const cmmContext &Function::getLocalContext() const {
    return localContext;
}

void Function::addVar(cmmVar *var) {
    localContext[var->getName()] = var;

    cfg->add_to_symbol_table(string("var_") + var->getName(), var->getType());
}

void Function::addStatement(Statement *statment) {
    content->addStatement(statment);

}

StmtBlock *Function::getContent() {
    return this->content;
}

cmmDef *Function::getDefLocal(string varName) {
    return localContext[varName];
}

vector<cmmVar *> Function::getParams() {
    return params;
}

CFG *Function::getCfg() const {
    return cfg;
}

void Function::builIR() {
    content->buildIR(cfg);
}

void Function::performMisuseAnalysis(vector<cmmVar *> vars) {
    vars.insert(vars.end(),params.begin(),params.end());
        vars = content->CheckVariablesAffectes(vars);
}

void Function::performUnuseAnalysis(map<cmmVar*,bool> &vars) {
    for(pair<string,cmmDef*> x : localContext ){
        cout<<x.first<<endl;
        if(!vars[(cmmVar*) x.second])
        vars[(cmmVar*) x.second] = false;
    }
}


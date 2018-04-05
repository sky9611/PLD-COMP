//
// Created by zuodu on 25/03/2018.
//

#include "ExprVariable.h"

ExprVariable::ExprVariable(cmmScope *scope, cmmVar *var) : Expression(scope), var(var)
{}

ExprVariable::~ExprVariable()
= default;

Type ExprVariable::getType() const{
    return var->getType();
}

cmmVar *ExprVariable::getVar() const
{
    return var;
}

void ExprVariable::setVar(cmmVar *var)
{
    ExprVariable::var = var;
}

string ExprVariable::buildIR(CFG* cfg)const{
    return string("var_") + var->getName();
}

vector<cmmVar *> ExprVariable::CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) {
    if(find(varAffectPrec.begin(),varAffectPrec.end(),var) != varAffectPrec.end()) return varAffectPrec;
    else throw cmmRuntimeException("Error : variable " + var->getName() + " has no given value.");
}

void ExprVariable::CheckVariablesDeclares(map<cmmVar*,bool> &varDeclares) {
    varDeclares[var] = true;
}

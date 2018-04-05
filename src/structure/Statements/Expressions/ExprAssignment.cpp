//
// Created by zuodu on 25/03/2018.
//

#include "ExprAssignment.h"
#include "../../../ir/irInstr/IRInstrAssignment.h"

ExprAssignment::ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr):
        ExprAssignment(scope, var, expr, true) {

}

ExprAssignment::ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr, bool postReturn):
        Expression(scope), var(var), expr(expr), postReturn(postReturn) {

}

ExprAssignment::~ExprAssignment(){
    delete expr;
}

cmmVar *ExprAssignment::getVar() const{
    return var;
}

Expression *ExprAssignment::getExpr() const{
    return expr;
}

Type ExprAssignment::getType()const{
    return var->getType();
}

string ExprAssignment::buildIR(CFG* cfg)const{

    string tmpVarExpr = expr->buildIR(cfg);
    IRInstr* instr;
    if(arrayIndex == nullptr)
        instr = new IRInstrAssignment(cfg->current_bb,getType(), string("var_")+ var->getName(), tmpVarExpr);
    else{
        string arrayAccessValue = arrayIndex->buildIR(cfg);
        instr = new IRInstrAssignment(cfg->current_bb,getType(), string("var_")+ var->getName(), arrayAccessValue, tmpVarExpr);
    }
    cfg->current_bb->add_IRInstr(instr);

    return tmpVarExpr;


}

vector<cmmVar *> ExprAssignment::CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) {
    vector<cmmVar*> newVariablesAffectes = varAffectPrec;
    vector<cmmVar*> exprVariablesAffectes = expr->CheckVariablesAffectes(varAffectPrec);
    newVariablesAffectes.push_back(var);
    return newVariablesAffectes;
}

ExprAssignment::ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr, Expression *arrayIndex) : Expression(
        scope), var(var), expr(expr), arrayIndex(arrayIndex)
{}


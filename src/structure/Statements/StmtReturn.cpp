//
// Created by zuodu on 25/03/2018.
//

#include "StmtReturn.h"
#include "../../ir/irInstr/IRInstrAssignment.h"
#include "../Function.h"

StmtReturn::~StmtReturn()
{
    delete expr;
}

Expression *StmtReturn::getExpr() const
{
    return expr;
}

string StmtReturn::buildIR(CFG* cfg)const{
    string res = expr->buildIR(cfg);

    IRInstrAssignment* inst = new IRInstrAssignment(cfg->current_bb , scope->getFunctionScope()->getType(),"",res); // "" -> move dans le registre ax
    cfg->current_bb->add_IRInstr(inst);

    cfg->current_bb->exit_true = nullptr;// PAS DE SUIS APRES LE BLOCK
    cfg->current_bb->exit_false = nullptr;

    cfg->current_bb = nullptr;

    return string();
}

vector<cmmVar *> StmtReturn::CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) {
    return varAffectPrec;
}

bool StmtReturn::hasStmtReturn()
{
    return true;
}

//
// Created by zuodu on 25/03/2018.
//

#include "StmtReturn.h"

StmtReturn::~StmtReturn()
{
    delete expr;
}

Expression *StmtReturn::getExpr() const
{
    return expr;
}

string StmtReturn::buildIR(CFG* cfg)const{
    expr->buildIR(cfg);
    cfg->current_bb->exit_true = nullptr;// PAS DE SUIS APRES LE BLOCK
    cfg->current_bb->exit_false = nullptr;

    cfg->current_bb = nullptr;

    return string();
}

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

}

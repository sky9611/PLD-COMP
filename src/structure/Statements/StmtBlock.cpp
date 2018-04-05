//
// Created by zuodu on 25/03/2018.
//

#include "StmtBlock.h"

StmtBlock::~StmtBlock()
{
    for(auto statement : statements)delete statement;
}

const vector<Statement *> &StmtBlock::getStatements() const
{
    return statements;
}

void StmtBlock::setStatements(const vector<Statement *> &statements)
{
    StmtBlock::statements = statements;
}

string StmtBlock::buildIR(CFG* cfg)const{
    for(Statement* stmt: statements){
        if(cfg->current_bb != nullptr){// Si il y a un return current_bb et null il n'y a donc pas a ajouter d'element a la suite
            stmt->buildIR(cfg);
        } else {
            cout << "INSTRUCTION AFTER RETURN!" << endl;
        }
    }
    return "";
}

vector<cmmVar *> StmtBlock::CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) {
    for(Statement* s : statements){
        varAffectPrec = s->CheckVariablesAffectes(varAffectPrec);
    }
    return varAffectPrec;
}

void StmtBlock::CheckVariablesDeclares(map<cmmVar*,bool> &varDeclares) {
    for(Statement* s : statements){
        s->CheckVariablesDeclares(varDeclares);
    }
}

//
// Created by zuodu on 25/03/2018.
//

#include "StmtWhile.h"

#include "../../ir/irInstr/IRInstrTest.h"

StmtWhile::~StmtWhile()
{
    delete test;
    delete block;
}

string StmtWhile::buildIR(CFG* cfg)const{
    BasicBlock* testBlock = new BasicBlock(cfg, "WhileTest");
    BasicBlock* whileBlock = new BasicBlock(cfg, "WhileContent");
    BasicBlock* outBlock = new BasicBlock(cfg, "WhileOut");

    cfg->add_bb(testBlock);
    cfg->add_bb(whileBlock);
    cfg->add_bb(outBlock);

    outBlock->exit_true = cfg->current_bb->exit_true;
    outBlock->exit_false = cfg->current_bb->exit_false;

    cfg->current_bb->exit_true = cfg->current_bb->exit_false = testBlock;

    testBlock->exit_true = whileBlock;
    testBlock->exit_false = outBlock;

    whileBlock->exit_true = whileBlock->exit_false = testBlock;

    cfg->current_bb = testBlock;
    string varTest = this->test->buildIR(cfg);
    IRInstrTest* testIR = new IRInstrTest(cfg->current_bb, test->getType(), varTest);
    cfg->current_bb->add_IRInstr(testIR);

    cfg->current_bb = whileBlock;
    this->block->buildIR(cfg);

    cfg->current_bb = outBlock;

    return string();
}

vector<cmmVar *> StmtWhile::CheckVariablesAffectes(vector<cmmVar *> varAffectPrec) {
    varAffectPrec = test->CheckVariablesAffectes(varAffectPrec);
    block->CheckVariablesAffectes(varAffectPrec);
    return varAffectPrec;
}


//
// Created by zuodu on 25/03/2018.
//

#include "StmtWhile.h"

StmtWhile::~StmtWhile()
{
    delete test;
    delete block;
}

string StmtWhile::buildIR(CFG* cfg)const{
    BasicBlock* testBlock = new BasicBlock(cfg, "WhileTest");
    BasicBlock* whileBlock = new BasicBlock(cfg, "WhileContent");
    BasicBlock* outBlock = new BasicBlock(cfg, "WhileOut");

    outBlock->exit_true = cfg->current_bb->exit_true;
    outBlock->exit_false = cfg->current_bb->exit_false;

    cfg->current_bb->exit_true = cfg->current_bb->exit_false = testBlock;

    testBlock->exit_true = whileBlock;
    testBlock->exit_false = outBlock;

    whileBlock->exit_true = whileBlock->exit_false = testBlock;

    cfg->current_bb = testBlock;
    this->test->buildIR(cfg);

    cfg->current_bb = whileBlock;
    this->block->buildIR(cfg);

    cfg->current_bb = outBlock;

}


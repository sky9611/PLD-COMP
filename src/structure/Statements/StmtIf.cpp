//
// Created by zuodu on 25/03/2018.
//

#include "StmtIf.h"

StmtIf::~StmtIf()
{
    delete test;
    delete block;
    if(elseBlock == nullptr) delete elseBlock;
}

Expression *StmtIf::getTest() const
{
    return test;
}

Statement *StmtIf::getBlock() const
{
    return block;
}

Statement *StmtIf::getElseBlock() const
{
    return elseBlock;
}

string StmtIf::buildIR(CFG* cfg)const{

    //Ajout au block precedant(le if) l'instruction de test (blockInit)
    this->test->buildIR(cfg);

    BasicBlock* blockInit = cfg->current_bb;
    BasicBlock* blockThen = new BasicBlock(cfg, "blockThen");
    BasicBlock* blockOut = new BasicBlock(cfg, "blockEndIf");

    //Copy les sorti du blockInit dans le nouveau block de de sortie blockOut
    blockInit->exit_true = blockInit->exit_true;
    blockOut->exit_false = blockInit->exit_false;

    //Modifi le parcour pour le cas ou le test est vrais
    blockInit->exit_true = blockThen; // si le test et vrais alors le block suivant initBlock et le block thenBlock
    blockThen->exit_true = blockOut; // les sortie du block init block sont forcement le blockOut
    blockThen->exit_false = blockOut;

    //Parcour le code du then
    cfg->current_bb = blockThen;
    this->block->buildIR(cfg);


    if(elseBlock == nullptr){ //si pas de block else
        //si pas de block else alor le block suivant le block init correspond au blockOut si le test return false
        blockInit->exit_false = blockOut;
    }else{


        BasicBlock * blockElse = new BasicBlock(cfg,"blockElse");
        blockInit->exit_false = blockElse;

        //Parcour le code du else
        cfg->current_bb = blockThen;
        this->elseBlock->buildIR(cfg);

        blockElse->exit_true = blockOut;
        blockElse->exit_false = blockOut;

    }

    cfg->current_bb = blockOut; //La suit du code est a ajouter aux plock blockOut

}

//
// Created by zuodu on 25/03/2018.
//

#include "StmtIf.h"
#include "../../ir/irInstr/IRInstrTest.h"

StmtIf::~StmtIf() {
    delete test;
    delete block;
    if ( elseBlock == nullptr ) { delete elseBlock; }
}

Expression *StmtIf::getTest() const {
    return test;
}

Statement *StmtIf::getBlock() const {
    return block;
}

Statement *StmtIf::getElseBlock() const {
    return elseBlock;
}

string StmtIf::buildIR( CFG *cfg ) const {

    //Ajout au block precedant(le if) l'instruction de test (blockInit)
    string varTest = this->test->buildIR( cfg );
    IRInstrTest *testIR = new IRInstrTest( cfg->current_bb, test->getType( ), varTest );
    cfg->current_bb->add_IRInstr( testIR );

    BasicBlock *blockInit = cfg->current_bb;
    BasicBlock *blockThen = new BasicBlock( cfg, "blockThen" );
    BasicBlock *blockOut = new BasicBlock( cfg, "blockEndIf" );

    cfg->add_bb( blockThen );


    //Copy les sorti du blockInit dans le nouveau block de de sortie blockOut
    blockInit->exit_true = blockInit->exit_true;
    blockOut->exit_false = blockInit->exit_false;

    //Modifi le parcour pour le cas ou le test est vrais
    blockInit->exit_true = blockThen; // si le test et vrais alors le block suivant initBlock et le block thenBlock
    blockThen->exit_true = blockOut; // les sortie du block init block sont forcement le blockOut
    blockThen->exit_false = blockOut;

    //Parcour le code du then
    cfg->current_bb = blockThen;
    this->block->buildIR( cfg );


    if ( elseBlock == nullptr ) { //si pas de block else
        //si pas de block else alor le block suivant le block init correspond au blockOut si le test return false
        blockInit->exit_false = blockOut;
    }
    else {


        BasicBlock *blockElse = new BasicBlock( cfg, "blockElse" );
        cfg->add_bb( blockElse );
        blockInit->exit_false = blockElse;

        //Parcour le code du else
        cfg->current_bb = blockElse;
        this->elseBlock->buildIR( cfg );

        blockElse->exit_true = blockOut;
        blockElse->exit_false = blockOut;

    }

    cfg->current_bb = blockOut; //La suit du code est a ajouter aux plock blockOut
    cfg->add_bb( blockOut );

    return string( );
}

vector<cmmVar *> StmtIf::CheckVariablesAffectes( vector<cmmVar *> varAffectPrec ) {
    varAffectPrec = test->CheckVariablesAffectes( varAffectPrec );
    if ( elseBlock ) {
        vector<cmmVar *> varAffectation1 = block->CheckVariablesAffectes( varAffectPrec );
        vector<cmmVar *> varAffectation2 = elseBlock->CheckVariablesAffectes( varAffectPrec );
        //calcul de l'intersection
        sort( varAffectation1.begin( ), varAffectation1.end( ));
        sort( varAffectation2.begin( ), varAffectation2.end( ));
        vector<cmmVar *> intersection;
        set_intersection( varAffectation1.begin( ), varAffectation1.end( ), varAffectation2.begin( ),
                          varAffectation2.end( ), back_inserter( intersection ));
        return intersection;
    }
    else {
        block->CheckVariablesAffectes( varAffectPrec );
        return varAffectPrec;
    }
}

bool StmtIf::hasStmtReturn() {
    return elseBlock != nullptr && elseBlock->hasStmtReturn( ) && block->hasStmtReturn( );
}

void StmtIf::CheckVariablesDeclares( map<cmmVar *, bool> &varDeclares ) {
    block->CheckVariablesDeclares( varDeclares );
    if ( elseBlock ) { elseBlock->CheckVariablesDeclares( varDeclares ); }

}

//
// Created by zuodu on 25/03/2018.
//

#include "ExprBinary.h"
#include "../../../ir/irInstr/IRInstrBasicOperator.h"
#include "../../../ir/irInstr/IRInstrAssignment.h"
#include "../../../ir/irInstr/IRInstrValue.h"
#include "../../../ir/irInstr/IRInstrTest.h"

ExprBinary::ExprBinary( cmmScope *scope, Expression *expr1, Expression *expr2, BinaryOperator op )
        : Expression( scope ), expr1( expr1 ), expr2( expr2 ), op( op ) {}

ExprBinary::~ExprBinary() {
    delete expr1;
    delete expr2;
}

Expression *ExprBinary::getExpr1() const {
    return expr1;
}

void ExprBinary::setExpr1( Expression *expr1 ) {
    ExprBinary::expr1 = expr1;
}

Expression *ExprBinary::getExpr2() const {
    return expr2;
}

void ExprBinary::setExpr2( Expression *expr2 ) {
    ExprBinary::expr2 = expr2;
}

BinaryOperator ExprBinary::getOp() const {
    return op;
}

void ExprBinary::setOp( BinaryOperator op ) {
    ExprBinary::op = op;
}

Type ExprBinary::getType() const {
    Type t1 = expr1->getType( );
    Type t2 = expr2->getType( );
    return type::getSize(t2) > type::getSize(t1) ? t2 : t1 ; // TODO Verifier les 2 expr pour conaitre le vrais type
}


string ExprBinary::buildIR( CFG *cfg ) const {
    switch ( op ) {
        case OrOr:
            return buildIROrOr( cfg );
        case AndAnd:
            return buildIRAndAnd( cfg );
        default:
            return buildIRDefault( cfg );
    }


}

string ExprBinary::buildIRDefault( CFG *cfg ) const {
    string tmpVar1 = expr1->buildIR( cfg );
    string tmpVar2 = expr2->buildIR( cfg );
    string tmpVarRES = cfg->create_new_tempvar( getType( ));

    IRInstrBasicOperator *instruction = new IRInstrBasicOperator( cfg->current_bb, getType( ), tmpVarRES, tmpVar1,
                                                                  tmpVar2, op );

    cfg->current_bb->add_IRInstr( instruction );

    return tmpVarRES;


}

string ExprBinary::buildIRAndAnd( CFG *cfg ) const {

    // RES = C&&B => {TMP1 = eval(C); (TMP1 ? {TMP2 = eval(B); RES = TMP2} : {RES = 0})}

    string tmpVarRES = cfg->create_new_tempvar( getType( ));

    string tmpVar1 = expr1->buildIR( cfg );
    IRInstrTest *testIR = new IRInstrTest( cfg->current_bb, expr1->getType( ), tmpVar1 );
    cfg->current_bb->add_IRInstr( testIR );

    BasicBlock *blockInit = cfg->current_bb;
    BasicBlock *blockExp1OK = new BasicBlock( cfg, "blockExp1OK" );
    BasicBlock *blockExp1KO = new BasicBlock( cfg, "blockExp1KO" );
    BasicBlock *blockOut = new BasicBlock( cfg, "blockEndAndAnd" );

    blockOut->exit_true = blockInit->exit_true;
    blockOut->exit_false = blockInit->exit_false;

    blockInit->exit_true = blockExp1OK;
    blockInit->exit_false = blockExp1KO;

    blockExp1OK->exit_true = blockExp1OK->exit_false = blockOut;
    blockExp1KO->exit_true = blockExp1KO->exit_false = blockOut;

    cfg->add_bb( blockExp1OK );
    cfg->add_bb( blockExp1KO );
    cfg->add_bb( blockOut );

    cfg->current_bb = blockExp1OK;
    string tmpVar2 = expr2->buildIR( cfg );
    IRInstrAssignment *asigne = new IRInstrAssignment( cfg->current_bb, getType( ), tmpVarRES, tmpVar2 );
    blockExp1OK->add_IRInstr( asigne );

    cfg->current_bb = blockExp1KO;
    IRInstrValue *loadFalse = new IRInstrValue( cfg->current_bb, getType( ), tmpVarRES, 0 );
    blockExp1KO->add_IRInstr( loadFalse );


    cfg->current_bb = blockOut;

    return tmpVarRES;


}

string ExprBinary::buildIROrOr( CFG *cfg ) const {

    // RES = C||B => {TMP1 = eval(C); (TMP1 ? {RES = TMP1} : {TMP2 = eval(B); RES = TMP2})}

    string tmpVarRES = cfg->create_new_tempvar( getType( ));

    //TMP1 = eval(C);
    string tmpVar1 = expr1->buildIR( cfg );

    IRInstrTest *testIR = new IRInstrTest( cfg->current_bb, expr1->getType( ), tmpVar1 );
    cfg->current_bb->add_IRInstr( testIR );

    BasicBlock *blockInit = cfg->current_bb;
    BasicBlock *blockExp1OK = new BasicBlock( cfg, "blockExp1OK" );
    BasicBlock *blockExp1KO = new BasicBlock( cfg, "blockExp1KO" );
    BasicBlock *blockOut = new BasicBlock( cfg, "blockEndAndAnd" );

    blockOut->exit_true = blockInit->exit_true;
    blockOut->exit_false = blockInit->exit_false;

    blockInit->exit_true = blockExp1OK;
    blockInit->exit_false = blockExp1KO;

    blockExp1OK->exit_true = blockExp1OK->exit_false = blockOut;
    blockExp1KO->exit_true = blockExp1KO->exit_false = blockOut;

    cfg->add_bb( blockExp1OK );
    cfg->add_bb( blockExp1KO );
    cfg->add_bb( blockOut );

    cfg->current_bb = blockExp1OK;
    IRInstrAssignment *asigne = new IRInstrAssignment( cfg->current_bb, getType( ), tmpVarRES, tmpVar1 );
    blockExp1OK->add_IRInstr( asigne );

    cfg->current_bb = blockExp1KO;
    string tmpVar2 = expr2->buildIR( cfg );
    IRInstrAssignment *asigne2 = new IRInstrAssignment( cfg->current_bb, getType( ), tmpVarRES, tmpVar2 );
    blockExp1KO->add_IRInstr( asigne2 );


    cfg->current_bb = blockOut;

    return tmpVarRES;


}

vector<cmmVar *> ExprBinary::CheckVariablesAffectes( vector<cmmVar *> varAffectPrec ) {
    varAffectPrec = expr1->CheckVariablesAffectes( varAffectPrec );
    varAffectPrec = expr2->CheckVariablesAffectes( varAffectPrec );
    return varAffectPrec;
}

void ExprBinary::CheckVariablesDeclares( map<cmmVar *, bool> &varDeclares ) {
    expr1->CheckVariablesDeclares( varDeclares );
    expr2->CheckVariablesDeclares( varDeclares );
}

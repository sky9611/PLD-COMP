//
// Created by Zifan YAO on 26/03/2018.
//

#ifndef PLD_COMP_CMMINTERPRETER2_H
#define PLD_COMP_CMMINTERPRETER2_H


#include "cmmBaseVisitor.h"
#include "../structure/Function.h"
#include "../structure/Program.h"

class cmmInterpreter : public cmmBaseVisitor{
protected:
    cmmScope* currentScope;

    Program* program;
    Function* currentFct;
public:

    void setScope(cmmScope* scope);
    void unScope();

    string getScopeList();

public:

    antlrcpp::Any visitFile(cmmParser::FileContext *ctx) override;

    antlrcpp::Any visitProgramme(cmmParser::ProgrammeContext *ctx) override;

    antlrcpp::Any visitVarDeclarationList(cmmParser::VarDeclarationListContext *ctx) override;

    antlrcpp::Any visitDecVarSimple(cmmParser::DecVarSimpleContext *ctx) override;

    antlrcpp::Any visitDecArray(cmmParser::DecArrayContext *ctx) override;

    antlrcpp::Any visitDefinitionParameter(cmmParser::DefinitionParameterContext *ctx) override;

    antlrcpp::Any visitArrayDef(cmmParser::ArrayDefContext *ctx) override;

    antlrcpp::Any visitArrayDecl(cmmParser::ArrayDeclContext *ctx) override;

    antlrcpp::Any visitBlock(cmmParser::BlockContext *ctx) override;

    antlrcpp::Any visitBrace(cmmParser::BraceContext *ctx) override;

    antlrcpp::Any visitFctBlock(cmmParser::FctBlockContext *ctx) override;

    antlrcpp::Any visitFctBrace(cmmParser::FctBraceContext *ctx) override;

    antlrcpp::Any visitFctDefinition(cmmParser::FctDefinitionContext *ctx) override;

    antlrcpp::Any visitStatementBlock(cmmParser::StatementBlockContext *ctx) override;

    antlrcpp::Any visitStatementIf(cmmParser::StatementIfContext *ctx) override;

    antlrcpp::Any visitStatementWhile(cmmParser::StatementWhileContext *ctx) override;

    antlrcpp::Any visitStatementReturn(cmmParser::StatementReturnContext *ctx) override;

    antlrcpp::Any visitStatementExpr(cmmParser::StatementExprContext *ctx) override;

    antlrcpp::Any visitExprParen(cmmParser::ExprParenContext *ctx) override;

    antlrcpp::Any visitExprValue(cmmParser::ExprValueContext *ctx) override;

    antlrcpp::Any visitExprNot(cmmParser::ExprNotContext *ctx) override;

    antlrcpp::Any visitExprVariable(cmmParser::ExprVariableContext *ctx) override;

    antlrcpp::Any visitExprAppelFonc(cmmParser::ExprAppelFoncContext *ctx) override;

    antlrcpp::Any visitExprMinus(cmmParser::ExprMinusContext *ctx) override;

    antlrcpp::Any visitExprIncPost(cmmParser::ExprIncPostContext *ctx) override;

    antlrcpp::Any visitExprChar(cmmParser::ExprCharContext *ctx) override;

    antlrcpp::Any visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) override;

    antlrcpp::Any visitExprIncPre(cmmParser::ExprIncPreContext *ctx) override;

    antlrcpp::Any visitExprBinaire(cmmParser::ExprBinaireContext *ctx) override;

    antlrcpp::Any visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx) override;

    antlrcpp::Any visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx) override;

    antlrcpp::Any visitExprShift(cmmParser::ExprShiftContext *ctx) override;

    antlrcpp::Any visitExprComparative(cmmParser::ExprComparativeContext *ctx) override;

    antlrcpp::Any visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx) override;

    antlrcpp::Any visitExprAnd(cmmParser::ExprAndContext *ctx) override;

    antlrcpp::Any visitExprCaret(cmmParser::ExprCaretContext *ctx) override;

    antlrcpp::Any visitExprOr(cmmParser::ExprOrContext *ctx) override;

    antlrcpp::Any visitExprAndAnd(cmmParser::ExprAndAndContext *ctx) override;

    antlrcpp::Any visitExprOrOr(cmmParser::ExprOrOrContext *ctx) override;

    antlrcpp::Any visitExprList(cmmParser::ExprListContext *ctx) override;

    antlrcpp::Any visitType(cmmParser::TypeContext *ctx) override;
};


#endif //PLD_COMP_CMMINTERPRETER2_H

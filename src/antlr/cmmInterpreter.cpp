//
// Created by Zifan YAO on 26/03/2018.
//

#include "cmmInterpreter.h"

antlrcpp::Any cmmInterpreter::visitFile(cmmParser::FileContext *ctx) {
    return visit(ctx->programme());
}

antlrcpp::Any cmmInterpreter::visitFunctionDefinition(cmmParser::FunctionDefinitionContext *ctx) {
    visit(ctx->fctDefinition());
    return visit(ctx->programme());
}

antlrcpp::Any cmmInterpreter::visitVarDeclaration(cmmParser::VarDeclarationContext *ctx) {
    return cmmBaseVisitor::visitVarDeclaration(ctx);
}

antlrcpp::Any cmmInterpreter::visitEof(cmmParser::EofContext *ctx) {
    return cmmBaseVisitor::visitEof(ctx);
}

antlrcpp::Any cmmInterpreter::visitVarDeclarationList(cmmParser::VarDeclarationListContext *ctx) {
    return cmmBaseVisitor::visitVarDeclarationList(ctx);
}

antlrcpp::Any cmmInterpreter::visitDecVarSimple(cmmParser::DecVarSimpleContext *ctx) {
    return cmmBaseVisitor::visitDecVarSimple(ctx);
}

antlrcpp::Any cmmInterpreter::visitDecArray(cmmParser::DecArrayContext *ctx) {
    return cmmBaseVisitor::visitDecArray(ctx);
}

antlrcpp::Any cmmInterpreter::visitDefinitionAttributs(cmmParser::DefinitionAttributsContext *ctx) {
    return cmmBaseVisitor::visitDefinitionAttributs(ctx);
}

antlrcpp::Any cmmInterpreter::visitArrayDef(cmmParser::ArrayDefContext *ctx) {
    return cmmBaseVisitor::visitArrayDef(ctx);
}

antlrcpp::Any cmmInterpreter::visitArrayDecl(cmmParser::ArrayDeclContext *ctx) {
    return cmmBaseVisitor::visitArrayDecl(ctx);
}

antlrcpp::Any cmmInterpreter::visitBlock(cmmParser::BlockContext *ctx) {
    return cmmBaseVisitor::visitBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitBrace(cmmParser::BraceContext *ctx) {
    return cmmBaseVisitor::visitBrace(ctx);
}

antlrcpp::Any cmmInterpreter::visitFctBlock(cmmParser::FctBlockContext *ctx) {
    return cmmBaseVisitor::visitFctBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitFctBrace(cmmParser::FctBraceContext *ctx) {
    return cmmBaseVisitor::visitFctBrace(ctx);
}

antlrcpp::Any cmmInterpreter::visitFctDefinition(cmmParser::FctDefinitionContext *ctx) {
    return cmmBaseVisitor::visitFctDefinition(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementBlock(cmmParser::StatementBlockContext *ctx) {
    return cmmBaseVisitor::visitStatementBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementIf(cmmParser::StatementIfContext *ctx) {
    return cmmBaseVisitor::visitStatementIf(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementWhile(cmmParser::StatementWhileContext *ctx) {
    return cmmBaseVisitor::visitStatementWhile(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementReturn(cmmParser::StatementReturnContext *ctx) {
    return cmmBaseVisitor::visitStatementReturn(ctx);
}

antlrcpp::Any
cmmInterpreter::visitStatementAppelFoncSansAttribut(cmmParser::StatementAppelFoncSansAttributContext *ctx) {
    return cmmBaseVisitor::visitStatementAppelFoncSansAttribut(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprParen(cmmParser::ExprParenContext *ctx) {
    return cmmBaseVisitor::visitExprParen(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprValue(cmmParser::ExprValueContext *ctx) {
    return cmmBaseVisitor::visitExprValue(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprNot(cmmParser::ExprNotContext *ctx) {
    return cmmBaseVisitor::visitExprNot(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprVariable(cmmParser::ExprVariableContext *ctx) {
    return cmmBaseVisitor::visitExprVariable(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprAppelFonc(cmmParser::ExprAppelFoncContext *ctx) {
    return cmmBaseVisitor::visitExprAppelFonc(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprMinus(cmmParser::ExprMinusContext *ctx) {
    return cmmBaseVisitor::visitExprMinus(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprIncPost(cmmParser::ExprIncPostContext *ctx) {
    return cmmBaseVisitor::visitExprIncPost(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprChar(cmmParser::ExprCharContext *ctx) {
    return cmmBaseVisitor::visitExprChar(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) {
    return cmmBaseVisitor::visitStatementAssiggnment(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprIncPre(cmmParser::ExprIncPreContext *ctx) {
    return cmmBaseVisitor::visitExprIncPre(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprBinaire(cmmParser::ExprBinaireContext *ctx) {
    return cmmBaseVisitor::visitExprBinaire(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx) {
    return cmmBaseVisitor::visitExprMultiDivMod(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx) {
    return cmmBaseVisitor::visitExprPlusMinus(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprShift(cmmParser::ExprShiftContext *ctx) {
    return cmmBaseVisitor::visitExprShift(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprComparative(cmmParser::ExprComparativeContext *ctx) {
    return cmmBaseVisitor::visitExprComparative(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx) {
    return cmmBaseVisitor::visitExprEqualNotEqual(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprAnd(cmmParser::ExprAndContext *ctx) {
    return cmmBaseVisitor::visitExprAnd(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprCaret(cmmParser::ExprCaretContext *ctx) {
    return cmmBaseVisitor::visitExprCaret(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprOr(cmmParser::ExprOrContext *ctx) {
    return cmmBaseVisitor::visitExprOr(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprAndAnd(cmmParser::ExprAndAndContext *ctx) {
    return cmmBaseVisitor::visitExprAndAnd(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprOrOr(cmmParser::ExprOrOrContext *ctx) {
    return cmmBaseVisitor::visitExprOrOr(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprList(cmmParser::ExprListContext *ctx) {
    return cmmBaseVisitor::visitExprList(ctx);
}

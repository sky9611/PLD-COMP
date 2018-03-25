//
// Created by wth on 2018/3/24.
//

#include "cmmInterpreter.h"
#include "../structure/Program.h"
#include "../structure/Statements/Expressions/Expression.h"
#include "../structure/Statements/Expressions/ExprVariable.h"
#include "../structure/Statements/Expressions/ExprValue.h"
#include "../structure/DefVariable.h"


antlrcpp::Any cmmInterpreter::visitFile(cmmParser::FileContext *ctx) {
	return (Program*) visit(ctx->programme());
}


antlrcpp::Any cmmInterpreter::visitProgRule(cmmParser::ProgRuleContext *ctx) {
	if(!ctx->definition().empty()){

		}
	}
	if(!ctx->fctDeclaration().empty()){

	}
	if(!ctx->fctDefinition().empty()){

	}
}

antlrcpp::Any cmmInterpreter::visitDefRule(cmmParser::DefRuleContext *ctx) {
	return (DefVariable*) visit(ctx->)
}

antlrcpp::Any cmmInterpreter::visitDefAttributes(cmmParser::DefAttributesContext *ctx) {
	return cmmBaseVisitor::visitDefAttributes(ctx);
}

antlrcpp::Any cmmInterpreter::visitTypeRule(cmmParser::TypeRuleContext *ctx) {
	return cmmBaseVisitor::visitTypeRule(ctx);
}

antlrcpp::Any cmmInterpreter::visitArrayDefinition(cmmParser::ArrayDefinitionContext *ctx) {
	return cmmBaseVisitor::visitArrayDefinition(ctx);
}

antlrcpp::Any cmmInterpreter::visitArrayDeclaration(cmmParser::ArrayDeclarationContext *ctx) {
	return cmmBaseVisitor::visitArrayDeclaration(ctx);
}

antlrcpp::Any cmmInterpreter::visitBlockZone(cmmParser::BlockZoneContext *ctx) {
	return cmmBaseVisitor::visitBlockZone(ctx);
}

antlrcpp::Any cmmInterpreter::visitBraceZone(cmmParser::BraceZoneContext *ctx) {
	return cmmBaseVisitor::visitBraceZone(ctx);
}

antlrcpp::Any cmmInterpreter::visitFunctionBlock(cmmParser::FunctionBlockContext *ctx) {
	return cmmBaseVisitor::visitFunctionBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitFunctionBrace(cmmParser::FunctionBraceContext *ctx) {
	return cmmBaseVisitor::visitFunctionBrace(ctx);
}

antlrcpp::Any cmmInterpreter::visitFunctionDeclaration(cmmParser::FunctionDeclarationContext *ctx) {
	return cmmBaseVisitor::visitFunctionDeclaration(ctx);
}

antlrcpp::Any cmmInterpreter::visitFunctionDefinition(cmmParser::FunctionDefinitionContext *ctx) {
	return cmmBaseVisitor::visitFunctionDefinition(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementBlock(cmmParser::StatementBlockContext *ctx) {
	return cmmBaseVisitor::visitStatementBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) {
	return cmmBaseVisitor::visitStatementAssiggnment(ctx);
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
	return (Expression*) new ExprValue();
}

antlrcpp::Any cmmInterpreter::visitExprNot(cmmParser::ExprNotContext *ctx) {
	return cmmBaseVisitor::visitExprNot(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprVariable(cmmParser::ExprVariableContext *ctx) {
	return (Expression*) new ExprVariable(ctx->)
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

antlrcpp::Any cmmInterpreter::visitListOfExpressions(cmmParser::ListOfExpressionsContext *ctx) {
	return cmmBaseVisitor::visitListOfExpressions(ctx);
}





//
// Created by wth on 2018/3/24.
//

#ifndef CMM_CMMINTERPRETER_H
#define CMM_CMMINTERPRETER_H

#include <antlr4-runtime.h>
#include "cmmBaseVisitor.h"


class cmmInterpreter : public cmmBaseVisitor
{
public:
    cmmInterpreter();

    ~cmmInterpreter();

    antlrcpp::Any visitProgRule(cmmParser::ProgRuleContext *ctx);

    antlrcpp::Any visitDefRule(cmmParser::DefRuleContext *ctx);

    antlrcpp::Any visitDefAttributes(cmmParser::DefAttributesContext *ctx);

    antlrcpp::Any visitTypeRule(cmmParser::TypeRuleContext *ctx);

    antlrcpp::Any visitArrayDefinition(cmmParser::ArrayDefinitionContext *ctx);

    antlrcpp::Any visitArrayDeclaration(cmmParser::ArrayDeclarationContext *ctx);

    antlrcpp::Any visitBlockZone(cmmParser::BlockZoneContext *ctx);

    antlrcpp::Any visitBraceZone(cmmParser::BraceZoneContext *ctx);

    antlrcpp::Any visitFunctionBlock(cmmParser::FunctionBlockContext *ctx);

    antlrcpp::Any visitFunctionBrace(cmmParser::FunctionBraceContext *ctx);

    antlrcpp::Any visitFunctionDeclaration(cmmParser::FunctionDeclarationContext *ctx);

    antlrcpp::Any visitFunctionDefinition(cmmParser::FunctionDefinitionContext *ctx);

    antlrcpp::Any visitStatementBlock(cmmParser::StatementBlockContext *ctx);

    antlrcpp::Any visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx);

    antlrcpp::Any visitStatementIf(cmmParser::StatementIfContext *ctx);

    antlrcpp::Any visitStatementWhile(cmmParser::StatementWhileContext *ctx);

    antlrcpp::Any visitStatementReturn(cmmParser::StatementReturnContext *ctx);

    antlrcpp::Any visitStatementAppelFoncSansAttribut(cmmParser::StatementAppelFoncSansAttributContext *ctx);

    antlrcpp::Any visitExprParen(cmmParser::ExprParenContext *ctx);

    antlrcpp::Any visitExprValue(cmmParser::ExprValueContext *ctx);

    antlrcpp::Any visitExprNot(cmmParser::ExprNotContext *ctx);

    antlrcpp::Any visitExprVariable(cmmParser::ExprVariableContext *ctx);

    antlrcpp::Any visitExprAppelFonc(cmmParser::ExprAppelFoncContext *ctx);

    antlrcpp::Any visitExprMinus(cmmParser::ExprMinusContext *ctx);

    antlrcpp::Any visitExprIncPost(cmmParser::ExprIncPostContext *ctx);

    antlrcpp::Any visitExprChar(cmmParser::ExprCharContext *ctx);

    antlrcpp::Any visitExprIncPre(cmmParser::ExprIncPreContext *ctx);

    antlrcpp::Any visitExprBinaire(cmmParser::ExprBinaireContext *ctx);

    antlrcpp::Any visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx);

    antlrcpp::Any visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx);

    antlrcpp::Any visitExprShift(cmmParser::ExprShiftContext *ctx);

    antlrcpp::Any visitExprComparative(cmmParser::ExprComparativeContext *ctx);

    antlrcpp::Any visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx);

    antlrcpp::Any visitExprAnd(cmmParser::ExprAndContext *ctx);

    antlrcpp::Any visitExprCaret(cmmParser::ExprCaretContext *ctx);

    antlrcpp::Any visitExprOr(cmmParser::ExprOrContext *ctx);

    antlrcpp::Any visitExprAndAnd(cmmParser::ExprAndAndContext *ctx);

    antlrcpp::Any visitExprOrOr(cmmParser::ExprOrOrContext *ctx);

    antlrcpp::Any visitListOfExpressions(cmmParser::ListOfExpressionsContext *ctx);
};


#endif //CMM_CMMINTERPRETER_H

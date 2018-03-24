
// Generated from D:/documents/INSA/4IF/PLD AGILE/PLD-COMP/grammaire\cmm.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "cmmParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by cmmParser.
 */
class  cmmVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by cmmParser.
   */
    virtual antlrcpp::Any visitProgRule(cmmParser::ProgRuleContext *context) = 0;

    virtual antlrcpp::Any visitDefRule(cmmParser::DefRuleContext *context) = 0;

    virtual antlrcpp::Any visitDefAttributes(cmmParser::DefAttributesContext *context) = 0;

    virtual antlrcpp::Any visitTypeRule(cmmParser::TypeRuleContext *context) = 0;

    virtual antlrcpp::Any visitArrayDefinition(cmmParser::ArrayDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitArrayDeclaration(cmmParser::ArrayDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitBlockZone(cmmParser::BlockZoneContext *context) = 0;

    virtual antlrcpp::Any visitBraceZone(cmmParser::BraceZoneContext *context) = 0;

    virtual antlrcpp::Any visitFunctionBlock(cmmParser::FunctionBlockContext *context) = 0;

    virtual antlrcpp::Any visitFunctionBrace(cmmParser::FunctionBraceContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(cmmParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(cmmParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitStatementBlock(cmmParser::StatementBlockContext *context) = 0;

    virtual antlrcpp::Any visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *context) = 0;

    virtual antlrcpp::Any visitStatementIf(cmmParser::StatementIfContext *context) = 0;

    virtual antlrcpp::Any visitStatementWhile(cmmParser::StatementWhileContext *context) = 0;

    virtual antlrcpp::Any visitStatementReturn(cmmParser::StatementReturnContext *context) = 0;

    virtual antlrcpp::Any visitStatementAppelFoncSansAttribut(cmmParser::StatementAppelFoncSansAttributContext *context) = 0;

    virtual antlrcpp::Any visitStatementAppelFoncAvecAttribut(cmmParser::StatementAppelFoncAvecAttributContext *context) = 0;

    virtual antlrcpp::Any visitExprParen(cmmParser::ExprParenContext *context) = 0;

    virtual antlrcpp::Any visitExprValue(cmmParser::ExprValueContext *context) = 0;

    virtual antlrcpp::Any visitExprNot(cmmParser::ExprNotContext *context) = 0;

    virtual antlrcpp::Any visitExprVariable(cmmParser::ExprVariableContext *context) = 0;

    virtual antlrcpp::Any visitExprAppelFonc(cmmParser::ExprAppelFoncContext *context) = 0;

    virtual antlrcpp::Any visitExprMinus(cmmParser::ExprMinusContext *context) = 0;

    virtual antlrcpp::Any visitExprIncPost(cmmParser::ExprIncPostContext *context) = 0;

    virtual antlrcpp::Any visitExprChar(cmmParser::ExprCharContext *context) = 0;

    virtual antlrcpp::Any visitExprIncPre(cmmParser::ExprIncPreContext *context) = 0;

    virtual antlrcpp::Any visitExprBinaire(cmmParser::ExprBinaireContext *context) = 0;

    virtual antlrcpp::Any visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *context) = 0;

    virtual antlrcpp::Any visitExprPlusMinus(cmmParser::ExprPlusMinusContext *context) = 0;

    virtual antlrcpp::Any visitExprShift(cmmParser::ExprShiftContext *context) = 0;

    virtual antlrcpp::Any visitExprComparative(cmmParser::ExprComparativeContext *context) = 0;

    virtual antlrcpp::Any visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *context) = 0;

    virtual antlrcpp::Any visitExprAnd(cmmParser::ExprAndContext *context) = 0;

    virtual antlrcpp::Any visitExprCaret(cmmParser::ExprCaretContext *context) = 0;

    virtual antlrcpp::Any visitExprOr(cmmParser::ExprOrContext *context) = 0;

    virtual antlrcpp::Any visitExprAndAnd(cmmParser::ExprAndAndContext *context) = 0;

    virtual antlrcpp::Any visitExprOrOr(cmmParser::ExprOrOrContext *context) = 0;

    virtual antlrcpp::Any visitListOfExpressions(cmmParser::ListOfExpressionsContext *context) = 0;


};


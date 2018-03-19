
// Generated from cmm.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmVisitor.h"


/**
 * This class provides an empty implementation of cmmVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  cmmBaseVisitor : public cmmVisitor {
public:

  virtual antlrcpp::Any visitProgRule(cmmParser::ProgRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefRule(cmmParser::DefRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefAttributes(cmmParser::DefAttributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeRule(cmmParser::TypeRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDefinition(cmmParser::ArrayDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDeclaration(cmmParser::ArrayDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockZone(cmmParser::BlockZoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraceZone(cmmParser::BraceZoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionBlock(cmmParser::FunctionBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionBrace(cmmParser::FunctionBraceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(cmmParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(cmmParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementBlock(cmmParser::StatementBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementIf(cmmParser::StatementIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementWhile(cmmParser::StatementWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementReturn(cmmParser::StatementReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementAppelFoncSansAttribut(cmmParser::StatementAppelFoncSansAttributContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementAppelFoncAvecAttribut(cmmParser::StatementAppelFoncAvecAttributContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprParen(cmmParser::ExprParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprValue(cmmParser::ExprValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprNot(cmmParser::ExprNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprVariable(cmmParser::ExprVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAppelFonc(cmmParser::ExprAppelFoncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprMinus(cmmParser::ExprMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprIncPost(cmmParser::ExprIncPostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprChar(cmmParser::ExprCharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprIncPre(cmmParser::ExprIncPreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprBinaire(cmmParser::ExprBinaireContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprShift(cmmParser::ExprShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprComparative(cmmParser::ExprComparativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAnd(cmmParser::ExprAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprCaret(cmmParser::ExprCaretContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprOr(cmmParser::ExprOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAndAnd(cmmParser::ExprAndAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprOrOr(cmmParser::ExprOrOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListOfExpressions(cmmParser::ListOfExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }


};



// Generated from D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/grammaire\cmm.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "cmmVisitor.h"


/**
 * This class provides an empty implementation of cmmVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  cmmBaseVisitor : public cmmVisitor {
public:

  virtual antlrcpp::Any visitFile(cmmParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(cmmParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclaration(cmmParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEof(cmmParser::EofContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclarationList(cmmParser::VarDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecVarSimple(cmmParser::DecVarSimpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecArray(cmmParser::DecArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinitionAttributs(cmmParser::DefinitionAttributsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDef(cmmParser::ArrayDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDecl(cmmParser::ArrayDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(cmmParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBrace(cmmParser::BraceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFctBlock(cmmParser::FctBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFctBrace(cmmParser::FctBraceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFctDefinition(cmmParser::FctDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsDecVarList(cmmParser::InsDecVarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsStmt(cmmParser::InsStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementBlock(cmmParser::StatementBlockContext *ctx) override {
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

  virtual antlrcpp::Any visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) override {
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

  virtual antlrcpp::Any visitExprList(cmmParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }


};


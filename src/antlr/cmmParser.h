
// Generated from D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/grammaire\cmm.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  cmmParser : public antlr4::Parser {
public:
  enum {
    Type = 1, WS = 2, LINECOMMENT = 3, BLOCKCOMMENT = 4, PreProcess = 5, 
    Char = 6, Int32_t = 7, Int64_t = 8, Void = 9, While = 10, If = 11, Else = 12, 
    Return = 13, LeftParen = 14, RightParen = 15, LeftBracket = 16, RightBracket = 17, 
    LeftBrace = 18, RightBrace = 19, Less = 20, LessEqual = 21, Greater = 22, 
    GreaterEqual = 23, LeftShift = 24, RightShift = 25, Plus = 26, PlusPlus = 27, 
    Minus = 28, MinusMinus = 29, Star = 30, Div = 31, Mod = 32, And = 33, 
    Or = 34, AndAnd = 35, OrOr = 36, Caret = 37, Not = 38, Tilde = 39, Question = 40, 
    Quote = 41, Colon = 42, Semi = 43, Comma = 44, Assign = 45, StarAssign = 46, 
    DivAssign = 47, ModAssign = 48, PlusAssign = 49, MinusAssign = 50, LeftShiftAssign = 51, 
    RightShiftAssign = 52, AndAssign = 53, XorAssign = 54, OrAssign = 55, 
    Equal = 56, NotEqual = 57, Character = 58, VarName = 59, Value = 60
  };

  enum {
    RuleFile = 0, RuleProgramme = 1, RuleVarDeclarationList = 2, RuleDeclarationVar = 3, 
    RuleDefinitionAttributs = 4, RuleArrayDef = 5, RuleArrayDecl = 6, RuleBlock = 7, 
    RuleBrace = 8, RuleFctBlock = 9, RuleFctBrace = 10, RuleFctDefinition = 11, 
    RuleStatement = 12, RuleExpr = 13, RuleOperatorBinaire = 14, RuleExprList = 15
  };

  cmmParser(antlr4::TokenStream *input);
  ~cmmParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual const antlr4::dfa::Vocabulary & getVocabulary() const override;


  class FileContext;
  class ProgrammeContext;
  class VarDeclarationListContext;
  class DeclarationVarContext;
  class DefinitionAttributsContext;
  class ArrayDefContext;
  class ArrayDeclContext;
  class BlockContext;
  class BraceContext;
  class FctBlockContext;
  class FctBraceContext;
  class FctDefinitionContext;
  class StatementContext;
  class ExprContext;
  class OperatorBinaireContext;
  class ExprListContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgrammeContext *programme();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  ProgrammeContext : public antlr4::ParserRuleContext {
  public:
    ProgrammeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgrammeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ProgrammeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionDefinitionContext : public ProgrammeContext {
  public:
    FunctionDefinitionContext(ProgrammeContext *ctx);

    FctDefinitionContext *fctDefinition();
    ProgrammeContext *programme();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EofContext : public ProgrammeContext {
  public:
    EofContext(ProgrammeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclarationContext : public ProgrammeContext {
  public:
    VarDeclarationContext(ProgrammeContext *ctx);

    VarDeclarationListContext *varDeclarationList();
    ProgrammeContext *programme();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgrammeContext* programme();

  class  VarDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    std::vector<DeclarationVarContext *> declarationVar();
    DeclarationVarContext* declarationVar(size_t i);
    antlr4::tree::TerminalNode *Semi();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationListContext* varDeclarationList();

  class  DeclarationVarContext : public antlr4::ParserRuleContext {
  public:
    DeclarationVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationVarContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DeclarationVarContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DecArrayContext : public DeclarationVarContext {
  public:
    DecArrayContext(DeclarationVarContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    ArrayDefContext *arrayDef();
    ArrayDeclContext *arrayDecl();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecVarSimpleContext : public DeclarationVarContext {
  public:
    DecVarSimpleContext(DeclarationVarContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *Assign();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationVarContext* declarationVar();

  class  DefinitionAttributsContext : public antlr4::ParserRuleContext {
  public:
    DefinitionAttributsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Value();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionAttributsContext* definitionAttributs();

  class  ArrayDefContext : public antlr4::ParserRuleContext {
  public:
    ArrayDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    ExprListContext *exprList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDefContext* arrayDef();

  class  ArrayDeclContext : public antlr4::ParserRuleContext {
  public:
    ArrayDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *RightBracket();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDeclContext* arrayDecl();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  BraceContext : public antlr4::ParserRuleContext {
  public:
    BraceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceContext* brace();

  class  FctBlockContext : public antlr4::ParserRuleContext {
  public:
    FctBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<VarDeclarationListContext *> varDeclarationList();
    VarDeclarationListContext* varDeclarationList(size_t i);
    std::vector<ArrayDeclContext *> arrayDecl();
    ArrayDeclContext* arrayDecl(size_t i);
    std::vector<ArrayDefContext *> arrayDef();
    ArrayDefContext* arrayDef(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FctBlockContext* fctBlock();

  class  FctBraceContext : public antlr4::ParserRuleContext {
  public:
    FctBraceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<DefinitionAttributsContext *> definitionAttributs();
    DefinitionAttributsContext* definitionAttributs(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FctBraceContext* fctBrace();

  class  FctDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FctDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VarName();
    FctBraceContext *fctBrace();
    FctBlockContext *fctBlock();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FctDefinitionContext* fctDefinition();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatementAppelFoncSansAttributContext : public StatementContext {
  public:
    StatementAppelFoncSansAttributContext(StatementContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementReturnContext : public StatementContext {
  public:
    StatementReturnContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Semi();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementBlockContext : public StatementContext {
  public:
    StatementBlockContext(StatementContext *ctx);

    BlockContext *block();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementWhileContext : public StatementContext {
  public:
    StatementWhileContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *While();
    BraceContext *brace();
    StatementContext *statement();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementIfContext : public StatementContext {
  public:
    StatementIfContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *If();
    BraceContext *brace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprParenContext : public ExprContext {
  public:
    ExprParenContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprValueContext : public ExprContext {
  public:
    ExprValueContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Value();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNotContext : public ExprContext {
  public:
    ExprNotContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Not();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprVariableContext : public ExprContext {
  public:
    ExprVariableContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *LeftBracket();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightBracket();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAppelFoncContext : public ExprContext {
  public:
    ExprAppelFoncContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExprListContext *exprList();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMinusContext : public ExprContext {
  public:
    ExprMinusContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Minus();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprIncPostContext : public ExprContext {
  public:
    ExprIncPostContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *LeftBracket();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightBracket();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprCharContext : public ExprContext {
  public:
    ExprCharContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Character();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementAssiggnmentContext : public ExprContext {
  public:
    StatementAssiggnmentContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *RightBracket();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprIncPreContext : public ExprContext {
  public:
    ExprIncPreContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *LeftBracket();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightBracket();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprBinaireContext : public ExprContext {
  public:
    ExprBinaireContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OperatorBinaireContext *operatorBinaire();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  OperatorBinaireContext : public antlr4::ParserRuleContext {
  public:
    OperatorBinaireContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OperatorBinaireContext() : antlr4::ParserRuleContext() { }
    void copyFrom(OperatorBinaireContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprPlusMinusContext : public OperatorBinaireContext {
  public:
    ExprPlusMinusContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprComparativeContext : public OperatorBinaireContext {
  public:
    ExprComparativeContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *GreaterEqual();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprOrContext : public OperatorBinaireContext {
  public:
    ExprOrContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *Or();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprCaretContext : public OperatorBinaireContext {
  public:
    ExprCaretContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *Caret();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprOrOrContext : public OperatorBinaireContext {
  public:
    ExprOrOrContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *OrOr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMultiDivModContext : public OperatorBinaireContext {
  public:
    ExprMultiDivModContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndContext : public OperatorBinaireContext {
  public:
    ExprAndContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *And();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndAndContext : public OperatorBinaireContext {
  public:
    ExprAndAndContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *AndAnd();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprShiftContext : public OperatorBinaireContext {
  public:
    ExprShiftContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *RightShift();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprEqualNotEqualContext : public OperatorBinaireContext {
  public:
    ExprEqualNotEqualContext(OperatorBinaireContext *ctx);

    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OperatorBinaireContext* operatorBinaire();

  class  ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListContext* exprList();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


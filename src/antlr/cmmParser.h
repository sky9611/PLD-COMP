
// Generated from D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/grammaire\cmm.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  cmmParser : public antlr4::Parser {
public:
  enum {
    WS = 1, LINECOMMENT = 2, BLOCKCOMMENT = 3, PreProcess = 4, Char = 5, 
    Int32_t = 6, Int64_t = 7, Void = 8, While = 9, If = 10, Else = 11, Return = 12, 
    LeftParen = 13, RightParen = 14, LeftBracket = 15, RightBracket = 16, 
    LeftBrace = 17, RightBrace = 18, Less = 19, LessEqual = 20, Greater = 21, 
    GreaterEqual = 22, LeftShift = 23, RightShift = 24, Plus = 25, PlusPlus = 26, 
    Minus = 27, MinusMinus = 28, Star = 29, Div = 30, Mod = 31, And = 32, 
    Or = 33, AndAnd = 34, OrOr = 35, Caret = 36, Not = 37, Tilde = 38, Question = 39, 
    Quote = 40, Colon = 41, Semi = 42, Comma = 43, Assign = 44, StarAssign = 45, 
    DivAssign = 46, ModAssign = 47, PlusAssign = 48, MinusAssign = 49, LeftShiftAssign = 50, 
    RightShiftAssign = 51, AndAssign = 52, XorAssign = 53, OrAssign = 54, 
    Equal = 55, NotEqual = 56, Character = 57, VarName = 58, Value = 59
  };

  enum {
    RuleFile = 0, RuleDefinition = 1, RuleDefinitionAttributs = 2, RuleType = 3, 
    RuleArrayDef = 4, RuleArrayDecl = 5, RuleBlock = 6, RuleBrace = 7, RuleFctBlock = 8, 
    RuleFctBrace = 9, RuleFctDeclaration = 10, RuleFctDefinition = 11, RuleStatement = 12, 
    RuleExpr = 13, RuleOperatorBinaire = 14, RuleExprList = 15
  };

  cmmParser(antlr4::TokenStream *input);
  ~cmmParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class DefinitionContext;
  class DefinitionAttributsContext;
  class TypeContext;
  class ArrayDefContext;
  class ArrayDeclContext;
  class BlockContext;
  class BraceContext;
  class FctBlockContext;
  class FctBraceContext;
  class FctDeclarationContext;
  class FctDefinitionContext;
  class StatementContext;
  class ExprContext;
  class OperatorBinaireContext;
  class ExprListContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FileContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FileContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProgRuleContext : public FileContext {
  public:
    ProgRuleContext(FileContext *ctx);

    std::vector<FctDefinitionContext *> fctDefinition();
    FctDefinitionContext* fctDefinition(size_t i);
    std::vector<FctDeclarationContext *> fctDeclaration();
    FctDeclarationContext* fctDeclaration(size_t i);
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FileContext* file();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefRuleContext : public DefinitionContext {
  public:
    DefRuleContext(DefinitionContext *ctx);

    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> VarName();
    antlr4::tree::TerminalNode* VarName(size_t i);
    antlr4::tree::TerminalNode *Semi();
    std::vector<ArrayDefContext *> arrayDef();
    ArrayDefContext* arrayDef(size_t i);
    std::vector<ArrayDeclContext *> arrayDecl();
    ArrayDeclContext* arrayDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Assign();
    antlr4::tree::TerminalNode* Assign(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DefinitionContext* definition();

  class  DefinitionAttributsContext : public antlr4::ParserRuleContext {
  public:
    DefinitionAttributsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefinitionAttributsContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DefinitionAttributsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefAttributesContext : public DefinitionAttributsContext {
  public:
    DefAttributesContext(DefinitionAttributsContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Value();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DefinitionAttributsContext* definitionAttributs();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeRuleContext : public TypeContext {
  public:
    TypeRuleContext(TypeContext *ctx);

    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Int32_t();
    antlr4::tree::TerminalNode *Int64_t();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeContext* type();

  class  ArrayDefContext : public antlr4::ParserRuleContext {
  public:
    ArrayDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArrayDefContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ArrayDefContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayDefinitionContext : public ArrayDefContext {
  public:
    ArrayDefinitionContext(ArrayDefContext *ctx);

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
   
    ArrayDeclContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ArrayDeclContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayDeclarationContext : public ArrayDeclContext {
  public:
    ArrayDeclarationContext(ArrayDeclContext *ctx);

    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *RightBracket();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArrayDeclContext* arrayDecl();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BlockContext() : antlr4::ParserRuleContext() { }
    void copyFrom(BlockContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlockZoneContext : public BlockContext {
  public:
    BlockZoneContext(BlockContext *ctx);

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
   
    BraceContext() : antlr4::ParserRuleContext() { }
    void copyFrom(BraceContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BraceZoneContext : public BraceContext {
  public:
    BraceZoneContext(BraceContext *ctx);

    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BraceContext* brace();

  class  FctBlockContext : public antlr4::ParserRuleContext {
  public:
    FctBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FctBlockContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FctBlockContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionBlockContext : public FctBlockContext {
  public:
    FunctionBlockContext(FctBlockContext *ctx);

    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);
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
   
    FctBraceContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FctBraceContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionBraceContext : public FctBraceContext {
  public:
    FunctionBraceContext(FctBraceContext *ctx);

    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<DefinitionAttributsContext *> definitionAttributs();
    DefinitionAttributsContext* definitionAttributs(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FctBraceContext* fctBrace();

  class  FctDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FctDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FctDeclarationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FctDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionDeclarationContext : public FctDeclarationContext {
  public:
    FunctionDeclarationContext(FctDeclarationContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    FctBraceContext *fctBrace();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Void();
    TypeContext *type();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FctDeclarationContext* fctDeclaration();

  class  FctDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FctDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FctDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FctDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionDefinitionContext : public FctDefinitionContext {
  public:
    FunctionDefinitionContext(FctDefinitionContext *ctx);

    antlr4::tree::TerminalNode *VarName();
    FctBraceContext *fctBrace();
    FctBlockContext *fctBlock();
    antlr4::tree::TerminalNode *Void();
    TypeContext *type();
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
   
    ExprListContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ListOfExpressionsContext : public ExprListContext {
  public:
    ListOfExpressionsContext(ExprListContext *ctx);

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


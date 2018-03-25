
// Generated from D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/grammaire\cmm.g4 by ANTLR 4.7


#include "cmmVisitor.h"

#include "cmmParser.h"


using namespace antlrcpp;
using namespace antlr4;

cmmParser::cmmParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

cmmParser::~cmmParser() {
  delete _interpreter;
}

std::string cmmParser::getGrammarFileName() const {
  return "cmm.g4";
}

const std::vector<std::string>& cmmParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& cmmParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

cmmParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::FileContext::getRuleIndex() const {
  return cmmParser::RuleFile;
}

void cmmParser::FileContext::copyFrom(FileContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgRuleContext ------------------------------------------------------------------

std::vector<cmmParser::FctDefinitionContext *> cmmParser::ProgRuleContext::fctDefinition() {
  return getRuleContexts<cmmParser::FctDefinitionContext>();
}

cmmParser::FctDefinitionContext* cmmParser::ProgRuleContext::fctDefinition(size_t i) {
  return getRuleContext<cmmParser::FctDefinitionContext>(i);
}

std::vector<cmmParser::FctDeclarationContext *> cmmParser::ProgRuleContext::fctDeclaration() {
  return getRuleContexts<cmmParser::FctDeclarationContext>();
}

cmmParser::FctDeclarationContext* cmmParser::ProgRuleContext::fctDeclaration(size_t i) {
  return getRuleContext<cmmParser::FctDeclarationContext>(i);
}

std::vector<cmmParser::DefinitionContext *> cmmParser::ProgRuleContext::definition() {
  return getRuleContexts<cmmParser::DefinitionContext>();
}

cmmParser::DefinitionContext* cmmParser::ProgRuleContext::definition(size_t i) {
  return getRuleContext<cmmParser::DefinitionContext>(i);
}

cmmParser::ProgRuleContext::ProgRuleContext(FileContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ProgRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitProgRule(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::FileContext* cmmParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, cmmParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<FileContext *>(_tracker.createInstance<cmmParser::ProgRuleContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::Char)
      | (1ULL << cmmParser::Int32_t)
      | (1ULL << cmmParser::Int64_t)
      | (1ULL << cmmParser::Void))) != 0)) {
      setState(35);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(32);
        fctDefinition();
        break;
      }

      case 2: {
        setState(33);
        fctDeclaration();
        break;
      }

      case 3: {
        setState(34);
        definition();
        break;
      }

      }
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

cmmParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::DefinitionContext::getRuleIndex() const {
  return cmmParser::RuleDefinition;
}

void cmmParser::DefinitionContext::copyFrom(DefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefRuleContext ------------------------------------------------------------------

cmmParser::TypeContext* cmmParser::DefRuleContext::type() {
  return getRuleContext<cmmParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> cmmParser::DefRuleContext::VarName() {
  return getTokens(cmmParser::VarName);
}

tree::TerminalNode* cmmParser::DefRuleContext::VarName(size_t i) {
  return getToken(cmmParser::VarName, i);
}

tree::TerminalNode* cmmParser::DefRuleContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

std::vector<cmmParser::ArrayDefContext *> cmmParser::DefRuleContext::arrayDef() {
  return getRuleContexts<cmmParser::ArrayDefContext>();
}

cmmParser::ArrayDefContext* cmmParser::DefRuleContext::arrayDef(size_t i) {
  return getRuleContext<cmmParser::ArrayDefContext>(i);
}

std::vector<cmmParser::ArrayDeclContext *> cmmParser::DefRuleContext::arrayDecl() {
  return getRuleContexts<cmmParser::ArrayDeclContext>();
}

cmmParser::ArrayDeclContext* cmmParser::DefRuleContext::arrayDecl(size_t i) {
  return getRuleContext<cmmParser::ArrayDeclContext>(i);
}

std::vector<tree::TerminalNode *> cmmParser::DefRuleContext::Assign() {
  return getTokens(cmmParser::Assign);
}

tree::TerminalNode* cmmParser::DefRuleContext::Assign(size_t i) {
  return getToken(cmmParser::Assign, i);
}

std::vector<cmmParser::ExprContext *> cmmParser::DefRuleContext::expr() {
  return getRuleContexts<cmmParser::ExprContext>();
}

cmmParser::ExprContext* cmmParser::DefRuleContext::expr(size_t i) {
  return getRuleContext<cmmParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> cmmParser::DefRuleContext::Comma() {
  return getTokens(cmmParser::Comma);
}

tree::TerminalNode* cmmParser::DefRuleContext::Comma(size_t i) {
  return getToken(cmmParser::Comma, i);
}

cmmParser::DefRuleContext::DefRuleContext(DefinitionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::DefRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitDefRule(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::DefinitionContext* cmmParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, cmmParser::RuleDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DefinitionContext *>(_tracker.createInstance<cmmParser::DefRuleContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(40);
    type();
    setState(41);
    match(cmmParser::VarName);
    setState(46);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(42);
      arrayDef();
      break;
    }

    case 2: {
      setState(43);
      arrayDecl();
      break;
    }

    case 3: {
      setState(44);
      match(cmmParser::Assign);
      setState(45);
      expr(0);
      break;
    }

    }
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmParser::Comma) {
      setState(48);
      match(cmmParser::Comma);
      setState(49);
      match(cmmParser::VarName);
      setState(54);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(50);
        arrayDef();
        break;
      }

      case 2: {
        setState(51);
        arrayDecl();
        break;
      }

      case 3: {
        setState(52);
        match(cmmParser::Assign);
        setState(53);
        expr(0);
        break;
      }

      }
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
    match(cmmParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionAttributsContext ------------------------------------------------------------------

cmmParser::DefinitionAttributsContext::DefinitionAttributsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::DefinitionAttributsContext::getRuleIndex() const {
  return cmmParser::RuleDefinitionAttributs;
}

void cmmParser::DefinitionAttributsContext::copyFrom(DefinitionAttributsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefAttributesContext ------------------------------------------------------------------

cmmParser::TypeContext* cmmParser::DefAttributesContext::type() {
  return getRuleContext<cmmParser::TypeContext>(0);
}

tree::TerminalNode* cmmParser::DefAttributesContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::DefAttributesContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::DefAttributesContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

tree::TerminalNode* cmmParser::DefAttributesContext::Value() {
  return getToken(cmmParser::Value, 0);
}

cmmParser::DefAttributesContext::DefAttributesContext(DefinitionAttributsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::DefAttributesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitDefAttributes(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::DefinitionAttributsContext* cmmParser::definitionAttributs() {
  DefinitionAttributsContext *_localctx = _tracker.createInstance<DefinitionAttributsContext>(_ctx, getState());
  enterRule(_localctx, 4, cmmParser::RuleDefinitionAttributs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DefinitionAttributsContext *>(_tracker.createInstance<cmmParser::DefAttributesContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(63);
    type();
    setState(64);
    match(cmmParser::VarName);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::LeftBracket) {
      setState(65);
      match(cmmParser::LeftBracket);
      setState(67);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::Value) {
        setState(66);
        match(cmmParser::Value);
      }
      setState(69);
      match(cmmParser::RightBracket);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

cmmParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::TypeContext::getRuleIndex() const {
  return cmmParser::RuleType;
}

void cmmParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeRuleContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::TypeRuleContext::Char() {
  return getToken(cmmParser::Char, 0);
}

tree::TerminalNode* cmmParser::TypeRuleContext::Int32_t() {
  return getToken(cmmParser::Int32_t, 0);
}

tree::TerminalNode* cmmParser::TypeRuleContext::Int64_t() {
  return getToken(cmmParser::Int64_t, 0);
}

cmmParser::TypeRuleContext::TypeRuleContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::TypeRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitTypeRule(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::TypeContext* cmmParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 6, cmmParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<cmmParser::TypeRuleContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(72);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::Char)
      | (1ULL << cmmParser::Int32_t)
      | (1ULL << cmmParser::Int64_t))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDefContext ------------------------------------------------------------------

cmmParser::ArrayDefContext::ArrayDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::ArrayDefContext::getRuleIndex() const {
  return cmmParser::RuleArrayDef;
}

void cmmParser::ArrayDefContext::copyFrom(ArrayDefContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayDefinitionContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ArrayDefinitionContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::ArrayDefinitionContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

tree::TerminalNode* cmmParser::ArrayDefinitionContext::Value() {
  return getToken(cmmParser::Value, 0);
}

tree::TerminalNode* cmmParser::ArrayDefinitionContext::Assign() {
  return getToken(cmmParser::Assign, 0);
}

tree::TerminalNode* cmmParser::ArrayDefinitionContext::LeftBrace() {
  return getToken(cmmParser::LeftBrace, 0);
}

tree::TerminalNode* cmmParser::ArrayDefinitionContext::RightBrace() {
  return getToken(cmmParser::RightBrace, 0);
}

cmmParser::ExprListContext* cmmParser::ArrayDefinitionContext::exprList() {
  return getRuleContext<cmmParser::ExprListContext>(0);
}

cmmParser::ArrayDefinitionContext::ArrayDefinitionContext(ArrayDefContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ArrayDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitArrayDefinition(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::ArrayDefContext* cmmParser::arrayDef() {
  ArrayDefContext *_localctx = _tracker.createInstance<ArrayDefContext>(_ctx, getState());
  enterRule(_localctx, 8, cmmParser::RuleArrayDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ArrayDefContext *>(_tracker.createInstance<cmmParser::ArrayDefinitionContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(cmmParser::LeftBracket);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::Value) {
      setState(75);
      match(cmmParser::Value);
    }
    setState(78);
    match(cmmParser::RightBracket);
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::Assign) {
      setState(79);
      match(cmmParser::Assign);
      setState(80);
      match(cmmParser::LeftBrace);
      setState(82);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cmmParser::LeftParen)
        | (1ULL << cmmParser::PlusPlus)
        | (1ULL << cmmParser::Minus)
        | (1ULL << cmmParser::MinusMinus)
        | (1ULL << cmmParser::Not)
        | (1ULL << cmmParser::Character)
        | (1ULL << cmmParser::VarName)
        | (1ULL << cmmParser::Value))) != 0)) {
        setState(81);
        exprList();
      }
      setState(84);
      match(cmmParser::RightBrace);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDeclContext ------------------------------------------------------------------

cmmParser::ArrayDeclContext::ArrayDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::ArrayDeclContext::getRuleIndex() const {
  return cmmParser::RuleArrayDecl;
}

void cmmParser::ArrayDeclContext::copyFrom(ArrayDeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ArrayDeclarationContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::ArrayDeclarationContext::Value() {
  return getToken(cmmParser::Value, 0);
}

tree::TerminalNode* cmmParser::ArrayDeclarationContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

cmmParser::ArrayDeclarationContext::ArrayDeclarationContext(ArrayDeclContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ArrayDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitArrayDeclaration(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::ArrayDeclContext* cmmParser::arrayDecl() {
  ArrayDeclContext *_localctx = _tracker.createInstance<ArrayDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, cmmParser::RuleArrayDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ArrayDeclContext *>(_tracker.createInstance<cmmParser::ArrayDeclarationContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(cmmParser::LeftBracket);
    setState(88);
    match(cmmParser::Value);
    setState(89);
    match(cmmParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

cmmParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::BlockContext::getRuleIndex() const {
  return cmmParser::RuleBlock;
}

void cmmParser::BlockContext::copyFrom(BlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlockZoneContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::BlockZoneContext::LeftBrace() {
  return getToken(cmmParser::LeftBrace, 0);
}

tree::TerminalNode* cmmParser::BlockZoneContext::RightBrace() {
  return getToken(cmmParser::RightBrace, 0);
}

std::vector<cmmParser::StatementContext *> cmmParser::BlockZoneContext::statement() {
  return getRuleContexts<cmmParser::StatementContext>();
}

cmmParser::StatementContext* cmmParser::BlockZoneContext::statement(size_t i) {
  return getRuleContext<cmmParser::StatementContext>(i);
}

cmmParser::BlockZoneContext::BlockZoneContext(BlockContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::BlockZoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitBlockZone(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::BlockContext* cmmParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 12, cmmParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<BlockContext *>(_tracker.createInstance<cmmParser::BlockZoneContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(cmmParser::LeftBrace);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::While)
      | (1ULL << cmmParser::If)
      | (1ULL << cmmParser::Return)
      | (1ULL << cmmParser::LeftParen)
      | (1ULL << cmmParser::LeftBrace)
      | (1ULL << cmmParser::PlusPlus)
      | (1ULL << cmmParser::Minus)
      | (1ULL << cmmParser::MinusMinus)
      | (1ULL << cmmParser::Not)
      | (1ULL << cmmParser::Character)
      | (1ULL << cmmParser::VarName)
      | (1ULL << cmmParser::Value))) != 0)) {
      setState(92);
      statement();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    match(cmmParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceContext ------------------------------------------------------------------

cmmParser::BraceContext::BraceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::BraceContext::getRuleIndex() const {
  return cmmParser::RuleBrace;
}

void cmmParser::BraceContext::copyFrom(BraceContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BraceZoneContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::BraceZoneContext::LeftParen() {
  return getToken(cmmParser::LeftParen, 0);
}

cmmParser::ExprListContext* cmmParser::BraceZoneContext::exprList() {
  return getRuleContext<cmmParser::ExprListContext>(0);
}

tree::TerminalNode* cmmParser::BraceZoneContext::RightParen() {
  return getToken(cmmParser::RightParen, 0);
}

cmmParser::BraceZoneContext::BraceZoneContext(BraceContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::BraceZoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitBraceZone(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::BraceContext* cmmParser::brace() {
  BraceContext *_localctx = _tracker.createInstance<BraceContext>(_ctx, getState());
  enterRule(_localctx, 14, cmmParser::RuleBrace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<BraceContext *>(_tracker.createInstance<cmmParser::BraceZoneContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(cmmParser::LeftParen);
    setState(101);
    exprList();
    setState(102);
    match(cmmParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FctBlockContext ------------------------------------------------------------------

cmmParser::FctBlockContext::FctBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::FctBlockContext::getRuleIndex() const {
  return cmmParser::RuleFctBlock;
}

void cmmParser::FctBlockContext::copyFrom(FctBlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionBlockContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::FunctionBlockContext::LeftBrace() {
  return getToken(cmmParser::LeftBrace, 0);
}

tree::TerminalNode* cmmParser::FunctionBlockContext::RightBrace() {
  return getToken(cmmParser::RightBrace, 0);
}

std::vector<cmmParser::DefinitionContext *> cmmParser::FunctionBlockContext::definition() {
  return getRuleContexts<cmmParser::DefinitionContext>();
}

cmmParser::DefinitionContext* cmmParser::FunctionBlockContext::definition(size_t i) {
  return getRuleContext<cmmParser::DefinitionContext>(i);
}

std::vector<cmmParser::ArrayDeclContext *> cmmParser::FunctionBlockContext::arrayDecl() {
  return getRuleContexts<cmmParser::ArrayDeclContext>();
}

cmmParser::ArrayDeclContext* cmmParser::FunctionBlockContext::arrayDecl(size_t i) {
  return getRuleContext<cmmParser::ArrayDeclContext>(i);
}

std::vector<cmmParser::ArrayDefContext *> cmmParser::FunctionBlockContext::arrayDef() {
  return getRuleContexts<cmmParser::ArrayDefContext>();
}

cmmParser::ArrayDefContext* cmmParser::FunctionBlockContext::arrayDef(size_t i) {
  return getRuleContext<cmmParser::ArrayDefContext>(i);
}

std::vector<cmmParser::StatementContext *> cmmParser::FunctionBlockContext::statement() {
  return getRuleContexts<cmmParser::StatementContext>();
}

cmmParser::StatementContext* cmmParser::FunctionBlockContext::statement(size_t i) {
  return getRuleContext<cmmParser::StatementContext>(i);
}

cmmParser::FunctionBlockContext::FunctionBlockContext(FctBlockContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::FunctionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFunctionBlock(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::FctBlockContext* cmmParser::fctBlock() {
  FctBlockContext *_localctx = _tracker.createInstance<FctBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, cmmParser::RuleFctBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<FctBlockContext *>(_tracker.createInstance<cmmParser::FunctionBlockContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(cmmParser::LeftBrace);
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::Char)
      | (1ULL << cmmParser::Int32_t)
      | (1ULL << cmmParser::Int64_t)
      | (1ULL << cmmParser::LeftBracket))) != 0)) {
      setState(108);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(105);
        definition();
        break;
      }

      case 2: {
        setState(106);
        arrayDecl();
        break;
      }

      case 3: {
        setState(107);
        arrayDef();
        break;
      }

      }
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::While)
      | (1ULL << cmmParser::If)
      | (1ULL << cmmParser::Return)
      | (1ULL << cmmParser::LeftParen)
      | (1ULL << cmmParser::LeftBrace)
      | (1ULL << cmmParser::PlusPlus)
      | (1ULL << cmmParser::Minus)
      | (1ULL << cmmParser::MinusMinus)
      | (1ULL << cmmParser::Not)
      | (1ULL << cmmParser::Character)
      | (1ULL << cmmParser::VarName)
      | (1ULL << cmmParser::Value))) != 0)) {
      setState(113);
      statement();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(119);
    match(cmmParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FctBraceContext ------------------------------------------------------------------

cmmParser::FctBraceContext::FctBraceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::FctBraceContext::getRuleIndex() const {
  return cmmParser::RuleFctBrace;
}

void cmmParser::FctBraceContext::copyFrom(FctBraceContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionBraceContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::FunctionBraceContext::LeftParen() {
  return getToken(cmmParser::LeftParen, 0);
}

tree::TerminalNode* cmmParser::FunctionBraceContext::RightParen() {
  return getToken(cmmParser::RightParen, 0);
}

std::vector<cmmParser::DefinitionAttributsContext *> cmmParser::FunctionBraceContext::definitionAttributs() {
  return getRuleContexts<cmmParser::DefinitionAttributsContext>();
}

cmmParser::DefinitionAttributsContext* cmmParser::FunctionBraceContext::definitionAttributs(size_t i) {
  return getRuleContext<cmmParser::DefinitionAttributsContext>(i);
}

std::vector<tree::TerminalNode *> cmmParser::FunctionBraceContext::Comma() {
  return getTokens(cmmParser::Comma);
}

tree::TerminalNode* cmmParser::FunctionBraceContext::Comma(size_t i) {
  return getToken(cmmParser::Comma, i);
}

cmmParser::FunctionBraceContext::FunctionBraceContext(FctBraceContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::FunctionBraceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFunctionBrace(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::FctBraceContext* cmmParser::fctBrace() {
  FctBraceContext *_localctx = _tracker.createInstance<FctBraceContext>(_ctx, getState());
  enterRule(_localctx, 18, cmmParser::RuleFctBrace);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<FctBraceContext *>(_tracker.createInstance<cmmParser::FunctionBraceContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(cmmParser::LeftParen);
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::Char)
      | (1ULL << cmmParser::Int32_t)
      | (1ULL << cmmParser::Int64_t))) != 0)) {
      setState(122);
      definitionAttributs();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == cmmParser::Comma) {
        setState(123);
        match(cmmParser::Comma);
        setState(124);
        definitionAttributs();
        setState(129);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(132);
    match(cmmParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FctDeclarationContext ------------------------------------------------------------------

cmmParser::FctDeclarationContext::FctDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::FctDeclarationContext::getRuleIndex() const {
  return cmmParser::RuleFctDeclaration;
}

void cmmParser::FctDeclarationContext::copyFrom(FctDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::FunctionDeclarationContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

cmmParser::FctBraceContext* cmmParser::FunctionDeclarationContext::fctBrace() {
  return getRuleContext<cmmParser::FctBraceContext>(0);
}

tree::TerminalNode* cmmParser::FunctionDeclarationContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

tree::TerminalNode* cmmParser::FunctionDeclarationContext::Void() {
  return getToken(cmmParser::Void, 0);
}

cmmParser::TypeContext* cmmParser::FunctionDeclarationContext::type() {
  return getRuleContext<cmmParser::TypeContext>(0);
}

cmmParser::FunctionDeclarationContext::FunctionDeclarationContext(FctDeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::FctDeclarationContext* cmmParser::fctDeclaration() {
  FctDeclarationContext *_localctx = _tracker.createInstance<FctDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, cmmParser::RuleFctDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<FctDeclarationContext *>(_tracker.createInstance<cmmParser::FunctionDeclarationContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::Void: {
        setState(134);
        match(cmmParser::Void);
        break;
      }

      case cmmParser::Char:
      case cmmParser::Int32_t:
      case cmmParser::Int64_t: {
        setState(135);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(138);
    match(cmmParser::VarName);
    setState(139);
    fctBrace();
    setState(140);
    match(cmmParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FctDefinitionContext ------------------------------------------------------------------

cmmParser::FctDefinitionContext::FctDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::FctDefinitionContext::getRuleIndex() const {
  return cmmParser::RuleFctDefinition;
}

void cmmParser::FctDefinitionContext::copyFrom(FctDefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::FunctionDefinitionContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

cmmParser::FctBraceContext* cmmParser::FunctionDefinitionContext::fctBrace() {
  return getRuleContext<cmmParser::FctBraceContext>(0);
}

cmmParser::FctBlockContext* cmmParser::FunctionDefinitionContext::fctBlock() {
  return getRuleContext<cmmParser::FctBlockContext>(0);
}

tree::TerminalNode* cmmParser::FunctionDefinitionContext::Void() {
  return getToken(cmmParser::Void, 0);
}

cmmParser::TypeContext* cmmParser::FunctionDefinitionContext::type() {
  return getRuleContext<cmmParser::TypeContext>(0);
}

cmmParser::FunctionDefinitionContext::FunctionDefinitionContext(FctDefinitionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::FctDefinitionContext* cmmParser::fctDefinition() {
  FctDefinitionContext *_localctx = _tracker.createInstance<FctDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, cmmParser::RuleFctDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<FctDefinitionContext *>(_tracker.createInstance<cmmParser::FunctionDefinitionContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::Void: {
        setState(142);
        match(cmmParser::Void);
        break;
      }

      case cmmParser::Char:
      case cmmParser::Int32_t:
      case cmmParser::Int64_t: {
        setState(143);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(146);
    match(cmmParser::VarName);
    setState(147);
    fctBrace();
    setState(148);
    fctBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

cmmParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::StatementContext::getRuleIndex() const {
  return cmmParser::RuleStatement;
}

void cmmParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatementAppelFoncSansAttributContext ------------------------------------------------------------------

cmmParser::ExprContext* cmmParser::StatementAppelFoncSansAttributContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::StatementAppelFoncSansAttributContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

cmmParser::StatementAppelFoncSansAttributContext::StatementAppelFoncSansAttributContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementAppelFoncSansAttributContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementAppelFoncSansAttribut(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementReturnContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::StatementReturnContext::Return() {
  return getToken(cmmParser::Return, 0);
}

tree::TerminalNode* cmmParser::StatementReturnContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

cmmParser::ExprContext* cmmParser::StatementReturnContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

cmmParser::StatementReturnContext::StatementReturnContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementBlockContext ------------------------------------------------------------------

cmmParser::BlockContext* cmmParser::StatementBlockContext::block() {
  return getRuleContext<cmmParser::BlockContext>(0);
}

cmmParser::StatementBlockContext::StatementBlockContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementWhileContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::StatementWhileContext::While() {
  return getToken(cmmParser::While, 0);
}

cmmParser::BraceContext* cmmParser::StatementWhileContext::brace() {
  return getRuleContext<cmmParser::BraceContext>(0);
}

cmmParser::StatementContext* cmmParser::StatementWhileContext::statement() {
  return getRuleContext<cmmParser::StatementContext>(0);
}

cmmParser::StatementWhileContext::StatementWhileContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementIfContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::StatementIfContext::If() {
  return getToken(cmmParser::If, 0);
}

cmmParser::ExprContext* cmmParser::StatementIfContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

std::vector<cmmParser::StatementContext *> cmmParser::StatementIfContext::statement() {
  return getRuleContexts<cmmParser::StatementContext>();
}

cmmParser::StatementContext* cmmParser::StatementIfContext::statement(size_t i) {
  return getRuleContext<cmmParser::StatementContext>(i);
}

tree::TerminalNode* cmmParser::StatementIfContext::Else() {
  return getToken(cmmParser::Else, 0);
}

cmmParser::StatementIfContext::StatementIfContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementAssiggnmentContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

cmmParser::ExprListContext* cmmParser::StatementAssiggnmentContext::exprList() {
  return getRuleContext<cmmParser::ExprListContext>(0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::Assign() {
  return getToken(cmmParser::Assign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::StarAssign() {
  return getToken(cmmParser::StarAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::DivAssign() {
  return getToken(cmmParser::DivAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::ModAssign() {
  return getToken(cmmParser::ModAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::PlusAssign() {
  return getToken(cmmParser::PlusAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::MinusAssign() {
  return getToken(cmmParser::MinusAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::LeftShiftAssign() {
  return getToken(cmmParser::LeftShiftAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::RightShiftAssign() {
  return getToken(cmmParser::RightShiftAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::AndAssign() {
  return getToken(cmmParser::AndAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::XorAssign() {
  return getToken(cmmParser::XorAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::OrAssign() {
  return getToken(cmmParser::OrAssign, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::Value() {
  return getToken(cmmParser::Value, 0);
}

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

cmmParser::StatementAssiggnmentContext::StatementAssiggnmentContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementAssiggnmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementAssiggnment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementAppelFoncAvecAttributContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::StatementAppelFoncAvecAttributContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::StatementAppelFoncAvecAttributContext::LeftParen() {
  return getToken(cmmParser::LeftParen, 0);
}

tree::TerminalNode* cmmParser::StatementAppelFoncAvecAttributContext::RightParen() {
  return getToken(cmmParser::RightParen, 0);
}

tree::TerminalNode* cmmParser::StatementAppelFoncAvecAttributContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

cmmParser::ExprListContext* cmmParser::StatementAppelFoncAvecAttributContext::exprList() {
  return getRuleContext<cmmParser::ExprListContext>(0);
}

cmmParser::StatementAppelFoncAvecAttributContext::StatementAppelFoncAvecAttributContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementAppelFoncAvecAttributContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementAppelFoncAvecAttribut(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::StatementContext* cmmParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, cmmParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementBlockContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(150);
      block();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementAssiggnmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(151);
      match(cmmParser::VarName);
      setState(155);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::LeftBracket) {
        setState(152);
        match(cmmParser::LeftBracket);
        setState(153);
        match(cmmParser::Value);
        setState(154);
        match(cmmParser::RightBracket);
      }
      setState(157);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cmmParser::Assign)
        | (1ULL << cmmParser::StarAssign)
        | (1ULL << cmmParser::DivAssign)
        | (1ULL << cmmParser::ModAssign)
        | (1ULL << cmmParser::PlusAssign)
        | (1ULL << cmmParser::MinusAssign)
        | (1ULL << cmmParser::LeftShiftAssign)
        | (1ULL << cmmParser::RightShiftAssign)
        | (1ULL << cmmParser::AndAssign)
        | (1ULL << cmmParser::XorAssign)
        | (1ULL << cmmParser::OrAssign))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(158);
      exprList();
      setState(159);
      match(cmmParser::Semi);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementIfContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(161);
      match(cmmParser::If);
      setState(162);
      expr(0);
      setState(163);
      statement();
      setState(166);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(164);
        match(cmmParser::Else);
        setState(165);
        statement();
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementWhileContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(168);
      match(cmmParser::While);
      setState(169);
      brace();
      setState(170);
      statement();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementReturnContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(172);
      match(cmmParser::Return);
      setState(174);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cmmParser::LeftParen)
        | (1ULL << cmmParser::PlusPlus)
        | (1ULL << cmmParser::Minus)
        | (1ULL << cmmParser::MinusMinus)
        | (1ULL << cmmParser::Not)
        | (1ULL << cmmParser::Character)
        | (1ULL << cmmParser::VarName)
        | (1ULL << cmmParser::Value))) != 0)) {
        setState(173);
        expr(0);
      }
      setState(176);
      match(cmmParser::Semi);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementAppelFoncSansAttributContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(177);
      expr(0);
      setState(178);
      match(cmmParser::Semi);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementAppelFoncAvecAttributContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(180);
      match(cmmParser::VarName);
      setState(181);
      match(cmmParser::LeftParen);
      setState(183);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cmmParser::LeftParen)
        | (1ULL << cmmParser::PlusPlus)
        | (1ULL << cmmParser::Minus)
        | (1ULL << cmmParser::MinusMinus)
        | (1ULL << cmmParser::Not)
        | (1ULL << cmmParser::Character)
        | (1ULL << cmmParser::VarName)
        | (1ULL << cmmParser::Value))) != 0)) {
        setState(182);
        exprList();
      }
      setState(185);
      match(cmmParser::RightParen);
      setState(186);
      match(cmmParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

cmmParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::ExprContext::getRuleIndex() const {
  return cmmParser::RuleExpr;
}

void cmmParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprParenContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprParenContext::LeftParen() {
  return getToken(cmmParser::LeftParen, 0);
}

cmmParser::ExprContext* cmmParser::ExprParenContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::ExprParenContext::RightParen() {
  return getToken(cmmParser::RightParen, 0);
}

cmmParser::ExprParenContext::ExprParenContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprValueContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprValueContext::Value() {
  return getToken(cmmParser::Value, 0);
}

cmmParser::ExprValueContext::ExprValueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprNotContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprNotContext::Not() {
  return getToken(cmmParser::Not, 0);
}

cmmParser::ExprContext* cmmParser::ExprNotContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

cmmParser::ExprNotContext::ExprNotContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprVariableContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprVariableContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::ExprVariableContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

cmmParser::ExprContext* cmmParser::ExprVariableContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::ExprVariableContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

cmmParser::ExprVariableContext::ExprVariableContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAppelFoncContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprAppelFoncContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::ExprAppelFoncContext::LeftParen() {
  return getToken(cmmParser::LeftParen, 0);
}

tree::TerminalNode* cmmParser::ExprAppelFoncContext::RightParen() {
  return getToken(cmmParser::RightParen, 0);
}

cmmParser::ExprListContext* cmmParser::ExprAppelFoncContext::exprList() {
  return getRuleContext<cmmParser::ExprListContext>(0);
}

cmmParser::ExprAppelFoncContext::ExprAppelFoncContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprAppelFoncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprAppelFonc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMinusContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprMinusContext::Minus() {
  return getToken(cmmParser::Minus, 0);
}

cmmParser::ExprContext* cmmParser::ExprMinusContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

cmmParser::ExprMinusContext::ExprMinusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIncPostContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprIncPostContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::ExprIncPostContext::PlusPlus() {
  return getToken(cmmParser::PlusPlus, 0);
}

tree::TerminalNode* cmmParser::ExprIncPostContext::MinusMinus() {
  return getToken(cmmParser::MinusMinus, 0);
}

tree::TerminalNode* cmmParser::ExprIncPostContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

cmmParser::ExprContext* cmmParser::ExprIncPostContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::ExprIncPostContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

cmmParser::ExprIncPostContext::ExprIncPostContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprIncPostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprIncPost(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprCharContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprCharContext::Character() {
  return getToken(cmmParser::Character, 0);
}

cmmParser::ExprCharContext::ExprCharContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprCharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIncPreContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprIncPreContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::ExprIncPreContext::PlusPlus() {
  return getToken(cmmParser::PlusPlus, 0);
}

tree::TerminalNode* cmmParser::ExprIncPreContext::MinusMinus() {
  return getToken(cmmParser::MinusMinus, 0);
}

tree::TerminalNode* cmmParser::ExprIncPreContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

cmmParser::ExprContext* cmmParser::ExprIncPreContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::ExprIncPreContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

cmmParser::ExprIncPreContext::ExprIncPreContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprIncPreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprIncPre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprBinaireContext ------------------------------------------------------------------

std::vector<cmmParser::ExprContext *> cmmParser::ExprBinaireContext::expr() {
  return getRuleContexts<cmmParser::ExprContext>();
}

cmmParser::ExprContext* cmmParser::ExprBinaireContext::expr(size_t i) {
  return getRuleContext<cmmParser::ExprContext>(i);
}

cmmParser::OperatorBinaireContext* cmmParser::ExprBinaireContext::operatorBinaire() {
  return getRuleContext<cmmParser::OperatorBinaireContext>(0);
}

cmmParser::ExprBinaireContext::ExprBinaireContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprBinaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprBinaire(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprContext* cmmParser::expr() {
   return expr(0);
}

cmmParser::ExprContext* cmmParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cmmParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  cmmParser::ExprContext *previousContext = _localctx;
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, cmmParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ExprValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(190);
      match(cmmParser::Value);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExprVariableContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(191);
      match(cmmParser::VarName);
      setState(196);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(192);
        match(cmmParser::LeftBracket);
        setState(193);
        expr(0);
        setState(194);
        match(cmmParser::RightBracket);
        break;
      }

      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExprIncPostContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(198);
      match(cmmParser::VarName);
      setState(203);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::LeftBracket) {
        setState(199);
        match(cmmParser::LeftBracket);
        setState(200);
        expr(0);
        setState(201);
        match(cmmParser::RightBracket);
      }
      setState(205);
      _la = _input->LA(1);
      if (!(_la == cmmParser::PlusPlus

      || _la == cmmParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExprIncPreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(206);
      _la = _input->LA(1);
      if (!(_la == cmmParser::PlusPlus

      || _la == cmmParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(207);
      match(cmmParser::VarName);
      setState(212);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(208);
        match(cmmParser::LeftBracket);
        setState(209);
        expr(0);
        setState(210);
        match(cmmParser::RightBracket);
        break;
      }

      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ExprNotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(214);
      match(cmmParser::Not);
      setState(215);
      expr(6);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExprMinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(216);
      match(cmmParser::Minus);
      setState(217);
      expr(5);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ExprParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(218);
      match(cmmParser::LeftParen);
      setState(219);
      expr(0);
      setState(220);
      match(cmmParser::RightParen);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ExprAppelFoncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(222);
      match(cmmParser::VarName);
      setState(223);
      match(cmmParser::LeftParen);
      setState(225);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cmmParser::LeftParen)
        | (1ULL << cmmParser::PlusPlus)
        | (1ULL << cmmParser::Minus)
        | (1ULL << cmmParser::MinusMinus)
        | (1ULL << cmmParser::Not)
        | (1ULL << cmmParser::Character)
        | (1ULL << cmmParser::VarName)
        | (1ULL << cmmParser::Value))) != 0)) {
        setState(224);
        exprList();
      }
      setState(227);
      match(cmmParser::RightParen);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ExprCharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(228);
      match(cmmParser::Character);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(237);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpr);
        setState(231);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(232);
        operatorBinaire();
        setState(233);
        expr(5); 
      }
      setState(239);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OperatorBinaireContext ------------------------------------------------------------------

cmmParser::OperatorBinaireContext::OperatorBinaireContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::OperatorBinaireContext::getRuleIndex() const {
  return cmmParser::RuleOperatorBinaire;
}

void cmmParser::OperatorBinaireContext::copyFrom(OperatorBinaireContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprPlusMinusContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprPlusMinusContext::Plus() {
  return getToken(cmmParser::Plus, 0);
}

tree::TerminalNode* cmmParser::ExprPlusMinusContext::Minus() {
  return getToken(cmmParser::Minus, 0);
}

cmmParser::ExprPlusMinusContext::ExprPlusMinusContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprPlusMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprPlusMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprComparativeContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprComparativeContext::Less() {
  return getToken(cmmParser::Less, 0);
}

tree::TerminalNode* cmmParser::ExprComparativeContext::LessEqual() {
  return getToken(cmmParser::LessEqual, 0);
}

tree::TerminalNode* cmmParser::ExprComparativeContext::Greater() {
  return getToken(cmmParser::Greater, 0);
}

tree::TerminalNode* cmmParser::ExprComparativeContext::GreaterEqual() {
  return getToken(cmmParser::GreaterEqual, 0);
}

cmmParser::ExprComparativeContext::ExprComparativeContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprComparativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprComparative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprOrContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprOrContext::Or() {
  return getToken(cmmParser::Or, 0);
}

cmmParser::ExprOrContext::ExprOrContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprCaretContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprCaretContext::Caret() {
  return getToken(cmmParser::Caret, 0);
}

cmmParser::ExprCaretContext::ExprCaretContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprCaretContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprCaret(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprOrOrContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprOrOrContext::OrOr() {
  return getToken(cmmParser::OrOr, 0);
}

cmmParser::ExprOrOrContext::ExprOrOrContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprOrOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprOrOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMultiDivModContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprMultiDivModContext::Star() {
  return getToken(cmmParser::Star, 0);
}

tree::TerminalNode* cmmParser::ExprMultiDivModContext::Div() {
  return getToken(cmmParser::Div, 0);
}

tree::TerminalNode* cmmParser::ExprMultiDivModContext::Mod() {
  return getToken(cmmParser::Mod, 0);
}

cmmParser::ExprMultiDivModContext::ExprMultiDivModContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprMultiDivModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprMultiDivMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAndContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprAndContext::And() {
  return getToken(cmmParser::And, 0);
}

cmmParser::ExprAndContext::ExprAndContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAndAndContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprAndAndContext::AndAnd() {
  return getToken(cmmParser::AndAnd, 0);
}

cmmParser::ExprAndAndContext::ExprAndAndContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprAndAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprAndAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprShiftContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprShiftContext::LeftShift() {
  return getToken(cmmParser::LeftShift, 0);
}

tree::TerminalNode* cmmParser::ExprShiftContext::RightShift() {
  return getToken(cmmParser::RightShift, 0);
}

cmmParser::ExprShiftContext::ExprShiftContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprShift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprEqualNotEqualContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprEqualNotEqualContext::Equal() {
  return getToken(cmmParser::Equal, 0);
}

tree::TerminalNode* cmmParser::ExprEqualNotEqualContext::NotEqual() {
  return getToken(cmmParser::NotEqual, 0);
}

cmmParser::ExprEqualNotEqualContext::ExprEqualNotEqualContext(OperatorBinaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprEqualNotEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprEqualNotEqual(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::OperatorBinaireContext* cmmParser::operatorBinaire() {
  OperatorBinaireContext *_localctx = _tracker.createInstance<OperatorBinaireContext>(_ctx, getState());
  enterRule(_localctx, 28, cmmParser::RuleOperatorBinaire);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::Star:
      case cmmParser::Div:
      case cmmParser::Mod: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprMultiDivModContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(240);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cmmParser::Star)
          | (1ULL << cmmParser::Div)
          | (1ULL << cmmParser::Mod))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case cmmParser::Plus:
      case cmmParser::Minus: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprPlusMinusContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(241);
        _la = _input->LA(1);
        if (!(_la == cmmParser::Plus

        || _la == cmmParser::Minus)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case cmmParser::LeftShift:
      case cmmParser::RightShift: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprShiftContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(242);
        _la = _input->LA(1);
        if (!(_la == cmmParser::LeftShift

        || _la == cmmParser::RightShift)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case cmmParser::Less:
      case cmmParser::LessEqual:
      case cmmParser::Greater:
      case cmmParser::GreaterEqual: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprComparativeContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(243);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cmmParser::Less)
          | (1ULL << cmmParser::LessEqual)
          | (1ULL << cmmParser::Greater)
          | (1ULL << cmmParser::GreaterEqual))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case cmmParser::Equal:
      case cmmParser::NotEqual: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprEqualNotEqualContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(244);
        _la = _input->LA(1);
        if (!(_la == cmmParser::Equal

        || _la == cmmParser::NotEqual)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case cmmParser::And: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprAndContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(245);
        match(cmmParser::And);
        break;
      }

      case cmmParser::Caret: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprCaretContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(246);
        match(cmmParser::Caret);
        break;
      }

      case cmmParser::Or: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprOrContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(247);
        match(cmmParser::Or);
        break;
      }

      case cmmParser::AndAnd: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprAndAndContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(248);
        match(cmmParser::AndAnd);
        break;
      }

      case cmmParser::OrOr: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprOrOrContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(249);
        match(cmmParser::OrOr);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprListContext ------------------------------------------------------------------

cmmParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::ExprListContext::getRuleIndex() const {
  return cmmParser::RuleExprList;
}

void cmmParser::ExprListContext::copyFrom(ExprListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ListOfExpressionsContext ------------------------------------------------------------------

std::vector<cmmParser::ExprContext *> cmmParser::ListOfExpressionsContext::expr() {
  return getRuleContexts<cmmParser::ExprContext>();
}

cmmParser::ExprContext* cmmParser::ListOfExpressionsContext::expr(size_t i) {
  return getRuleContext<cmmParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> cmmParser::ListOfExpressionsContext::Comma() {
  return getTokens(cmmParser::Comma);
}

tree::TerminalNode* cmmParser::ListOfExpressionsContext::Comma(size_t i) {
  return getToken(cmmParser::Comma, i);
}

cmmParser::ListOfExpressionsContext::ListOfExpressionsContext(ExprListContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ListOfExpressionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitListOfExpressions(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::ExprListContext* cmmParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 30, cmmParser::RuleExprList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ExprListContext *>(_tracker.createInstance<cmmParser::ListOfExpressionsContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(252);
    expr(0);
    setState(257);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmParser::Comma) {
      setState(253);
      match(cmmParser::Comma);
      setState(254);
      expr(0);
      setState(259);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool cmmParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool cmmParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> cmmParser::_decisionToDFA;
atn::PredictionContextCache cmmParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN cmmParser::_atn;
std::vector<uint16_t> cmmParser::_serializedATN;

std::vector<std::string> cmmParser::_ruleNames = {
  "file", "definition", "definitionAttributs", "type", "arrayDef", "arrayDecl", 
  "block", "brace", "fctBlock", "fctBrace", "fctDeclaration", "fctDefinition", 
  "statement", "expr", "operatorBinaire", "exprList"
};

std::vector<std::string> cmmParser::_literalNames = {
  "", "", "", "", "", "'char'", "'int32_t'", "'int64_t'", "'void'", "'while'", 
  "'if'", "'else'", "'return'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
  "'<'", "'<='", "'>'", "'>='", "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", 
  "'*'", "'/'", "'%'", "'&'", "'|'", "'&&'", "'||'", "'^'", "'!'", "'~'", 
  "'?'", "'''", "':'", "';'", "','", "'='", "'*='", "'/='", "'%='", "'+='", 
  "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", "'=='", "'!='"
};

std::vector<std::string> cmmParser::_symbolicNames = {
  "", "WS", "LINECOMMENT", "BLOCKCOMMENT", "PreProcess", "Char", "Int32_t", 
  "Int64_t", "Void", "While", "If", "Else", "Return", "LeftParen", "RightParen", 
  "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Less", "LessEqual", 
  "Greater", "GreaterEqual", "LeftShift", "RightShift", "Plus", "PlusPlus", 
  "Minus", "MinusMinus", "Star", "Div", "Mod", "And", "Or", "AndAnd", "OrOr", 
  "Caret", "Not", "Tilde", "Question", "Quote", "Colon", "Semi", "Comma", 
  "Assign", "StarAssign", "DivAssign", "ModAssign", "PlusAssign", "MinusAssign", 
  "LeftShiftAssign", "RightShiftAssign", "AndAssign", "XorAssign", "OrAssign", 
  "Equal", "NotEqual", "Character", "VarName", "Value"
};

dfa::Vocabulary cmmParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> cmmParser::_tokenNames;

cmmParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3d, 0x107, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x26, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x29, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x31, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x39, 0xa, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x3e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x46, 0xa, 0x4, 0x3, 0x4, 0x5, 0x4, 
    0x49, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4f, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x55, 0xa, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x58, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x60, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x63, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x6f, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x72, 0xb, 0xa, 0x3, 0xa, 0x7, 0xa, 0x75, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x78, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x80, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x83, 0xb, 0xb, 0x5, 0xb, 0x85, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x8b, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x93, 0xa, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x9e, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xa9, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0xb1, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xba, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0xbe, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xc7, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xce, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd7, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xe4, 0xa, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xe8, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0xee, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xf1, 0xb, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xfd, 0xa, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x102, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x105, 0xb, 0x11, 0x3, 0x11, 0x2, 0x3, 0x1c, 0x12, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x2, 0xa, 0x3, 0x2, 0x7, 0x9, 0x3, 0x2, 0x2e, 0x38, 0x4, 0x2, 
    0x1c, 0x1c, 0x1e, 0x1e, 0x3, 0x2, 0x1f, 0x21, 0x4, 0x2, 0x1b, 0x1b, 
    0x1d, 0x1d, 0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x15, 0x18, 0x3, 0x2, 0x39, 
    0x3a, 0x2, 0x12f, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x41, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x59, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x66, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x92, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x22, 0x26, 0x5, 0x18, 0xd, 0x2, 0x23, 
    0x26, 0x5, 0x16, 0xc, 0x2, 0x24, 0x26, 0x5, 0x4, 0x3, 0x2, 0x25, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x24, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0x8, 0x5, 0x2, 
    0x2b, 0x30, 0x7, 0x3c, 0x2, 0x2, 0x2c, 0x31, 0x5, 0xa, 0x6, 0x2, 0x2d, 
    0x31, 0x5, 0xc, 0x7, 0x2, 0x2e, 0x2f, 0x7, 0x2e, 0x2, 0x2, 0x2f, 0x31, 
    0x5, 0x1c, 0xf, 0x2, 0x30, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x31, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x2d, 0x2, 
    0x2, 0x33, 0x38, 0x7, 0x3c, 0x2, 0x2, 0x34, 0x39, 0x5, 0xa, 0x6, 0x2, 
    0x35, 0x39, 0x5, 0xc, 0x7, 0x2, 0x36, 0x37, 0x7, 0x2e, 0x2, 0x2, 0x37, 
    0x39, 0x5, 0x1c, 0xf, 0x2, 0x38, 0x34, 0x3, 0x2, 0x2, 0x2, 0x38, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x2c, 0x2, 0x2, 0x40, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x5, 0x8, 0x5, 0x2, 0x42, 0x48, 
    0x7, 0x3c, 0x2, 0x2, 0x43, 0x45, 0x7, 0x11, 0x2, 0x2, 0x44, 0x46, 0x7, 
    0x3d, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x7, 0x12, 0x2, 
    0x2, 0x48, 0x43, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x49, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x9, 0x2, 0x2, 0x2, 0x4b, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x7, 0x11, 0x2, 0x2, 0x4d, 0x4f, 
    0x7, 0x3d, 0x2, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x57, 0x7, 0x12, 
    0x2, 0x2, 0x51, 0x52, 0x7, 0x2e, 0x2, 0x2, 0x52, 0x54, 0x7, 0x13, 0x2, 
    0x2, 0x53, 0x55, 0x5, 0x20, 0x11, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x58, 0x7, 0x14, 0x2, 0x2, 0x57, 0x51, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0xb, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 
    0x11, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x3d, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x12, 
    0x2, 0x2, 0x5c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x61, 0x7, 0x13, 0x2, 
    0x2, 0x5e, 0x60, 0x5, 0x1a, 0xe, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x64, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x14, 0x2, 0x2, 0x65, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0xf, 0x2, 0x2, 0x67, 0x68, 0x5, 0x20, 
    0x11, 0x2, 0x68, 0x69, 0x7, 0x10, 0x2, 0x2, 0x69, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x70, 0x7, 0x13, 0x2, 0x2, 0x6b, 0x6f, 0x5, 0x4, 0x3, 0x2, 
    0x6c, 0x6f, 0x5, 0xc, 0x7, 0x2, 0x6d, 0x6f, 0x5, 0xa, 0x6, 0x2, 0x6e, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x5, 0x1a, 0xe, 
    0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 
    0x7, 0x14, 0x2, 0x2, 0x7a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x84, 0x7, 
    0xf, 0x2, 0x2, 0x7c, 0x81, 0x5, 0x6, 0x4, 0x2, 0x7d, 0x7e, 0x7, 0x2d, 
    0x2, 0x2, 0x7e, 0x80, 0x5, 0x6, 0x4, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 
    0x10, 0x2, 0x2, 0x87, 0x15, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x7, 0xa, 
    0x2, 0x2, 0x89, 0x8b, 0x5, 0x8, 0x5, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8d, 0x7, 0x3c, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x14, 0xb, 0x2, 0x8e, 
    0x8f, 0x7, 0x2c, 0x2, 0x2, 0x8f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 
    0x7, 0xa, 0x2, 0x2, 0x91, 0x93, 0x5, 0x8, 0x5, 0x2, 0x92, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x95, 0x7, 0x3c, 0x2, 0x2, 0x95, 0x96, 0x5, 0x14, 0xb, 
    0x2, 0x96, 0x97, 0x5, 0x12, 0xa, 0x2, 0x97, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0xbe, 0x5, 0xe, 0x8, 0x2, 0x99, 0x9d, 0x7, 0x3c, 0x2, 0x2, 0x9a, 
    0x9b, 0x7, 0x11, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x3d, 0x2, 0x2, 0x9c, 0x9e, 
    0x7, 0x12, 0x2, 0x2, 0x9d, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x9, 0x3, 
    0x2, 0x2, 0xa0, 0xa1, 0x5, 0x20, 0x11, 0x2, 0xa1, 0xa2, 0x7, 0x2c, 0x2, 
    0x2, 0xa2, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0xc, 0x2, 0x2, 
    0xa4, 0xa5, 0x5, 0x1c, 0xf, 0x2, 0xa5, 0xa8, 0x5, 0x1a, 0xe, 0x2, 0xa6, 
    0xa7, 0x7, 0xd, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x1a, 0xe, 0x2, 0xa8, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0xb, 0x2, 0x2, 0xab, 0xac, 0x5, 0x10, 
    0x9, 0x2, 0xac, 0xad, 0x5, 0x1a, 0xe, 0x2, 0xad, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xb0, 0x7, 0xe, 0x2, 0x2, 0xaf, 0xb1, 0x5, 0x1c, 0xf, 0x2, 
    0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xbe, 0x7, 0x2c, 0x2, 0x2, 0xb3, 0xb4, 
    0x5, 0x1c, 0xf, 0x2, 0xb4, 0xb5, 0x7, 0x2c, 0x2, 0x2, 0xb5, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x3c, 0x2, 0x2, 0xb7, 0xb9, 0x7, 0xf, 
    0x2, 0x2, 0xb8, 0xba, 0x5, 0x20, 0x11, 0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbc, 0x7, 0x10, 0x2, 0x2, 0xbc, 0xbe, 0x7, 0x2c, 0x2, 0x2, 0xbd, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x99, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x8, 0xf, 0x1, 
    0x2, 0xc0, 0xe8, 0x7, 0x3d, 0x2, 0x2, 0xc1, 0xc6, 0x7, 0x3c, 0x2, 0x2, 
    0xc2, 0xc3, 0x7, 0x11, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x1c, 0xf, 0x2, 0xc4, 
    0xc5, 0x7, 0x12, 0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xe8, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xcd, 0x7, 0x3c, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x11, 
    0x2, 0x2, 0xca, 0xcb, 0x5, 0x1c, 0xf, 0x2, 0xcb, 0xcc, 0x7, 0x12, 0x2, 
    0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xe8, 0x9, 0x4, 0x2, 0x2, 0xd0, 0xd1, 0x9, 0x4, 0x2, 0x2, 0xd1, 0xd6, 
    0x7, 0x3c, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x11, 0x2, 0x2, 0xd3, 0xd4, 0x5, 
    0x1c, 0xf, 0x2, 0xd4, 0xd5, 0x7, 0x12, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x27, 0x2, 0x2, 
    0xd9, 0xe8, 0x5, 0x1c, 0xf, 0x8, 0xda, 0xdb, 0x7, 0x1d, 0x2, 0x2, 0xdb, 
    0xe8, 0x5, 0x1c, 0xf, 0x7, 0xdc, 0xdd, 0x7, 0xf, 0x2, 0x2, 0xdd, 0xde, 
    0x5, 0x1c, 0xf, 0x2, 0xde, 0xdf, 0x7, 0x10, 0x2, 0x2, 0xdf, 0xe8, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x3c, 0x2, 0x2, 0xe1, 0xe3, 0x7, 0xf, 
    0x2, 0x2, 0xe2, 0xe4, 0x5, 0x20, 0x11, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe8, 0x7, 0x10, 0x2, 0x2, 0xe6, 0xe8, 0x7, 0x3b, 0x2, 0x2, 0xe7, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xef, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0xc, 0x6, 0x2, 0x2, 
    0xea, 0xeb, 0x5, 0x1e, 0x10, 0x2, 0xeb, 0xec, 0x5, 0x1c, 0xf, 0x7, 0xec, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0xed, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xfd, 0x9, 0x5, 0x2, 0x2, 0xf3, 0xfd, 0x9, 0x6, 0x2, 
    0x2, 0xf4, 0xfd, 0x9, 0x7, 0x2, 0x2, 0xf5, 0xfd, 0x9, 0x8, 0x2, 0x2, 
    0xf6, 0xfd, 0x9, 0x9, 0x2, 0x2, 0xf7, 0xfd, 0x7, 0x22, 0x2, 0x2, 0xf8, 
    0xfd, 0x7, 0x26, 0x2, 0x2, 0xf9, 0xfd, 0x7, 0x23, 0x2, 0x2, 0xfa, 0xfd, 
    0x7, 0x24, 0x2, 0x2, 0xfb, 0xfd, 0x7, 0x25, 0x2, 0x2, 0xfc, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xfc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x103, 
    0x5, 0x1c, 0xf, 0x2, 0xff, 0x100, 0x7, 0x2d, 0x2, 0x2, 0x100, 0x102, 
    0x5, 0x1c, 0xf, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x21, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x25, 0x27, 0x30, 0x38, 0x3c, 0x45, 0x48, 0x4e, 
    0x54, 0x57, 0x61, 0x6e, 0x70, 0x76, 0x81, 0x84, 0x8a, 0x92, 0x9d, 0xa8, 
    0xb0, 0xb9, 0xbd, 0xc6, 0xcd, 0xd6, 0xe3, 0xe7, 0xef, 0xfc, 0x103, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

cmmParser::Initializer cmmParser::_init;

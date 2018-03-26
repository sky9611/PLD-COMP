
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

cmmParser::ProgrammeContext* cmmParser::FileContext::programme() {
  return getRuleContext<cmmParser::ProgrammeContext>(0);
}


size_t cmmParser::FileContext::getRuleIndex() const {
  return cmmParser::RuleFile;
}

antlrcpp::Any cmmParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::FileContext* cmmParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, cmmParser::RuleFile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    programme();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgrammeContext ------------------------------------------------------------------

cmmParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::ProgrammeContext::getRuleIndex() const {
  return cmmParser::RuleProgramme;
}

void cmmParser::ProgrammeContext::copyFrom(ProgrammeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

cmmParser::FctDefinitionContext* cmmParser::FunctionDefinitionContext::fctDefinition() {
  return getRuleContext<cmmParser::FctDefinitionContext>(0);
}

cmmParser::ProgrammeContext* cmmParser::FunctionDefinitionContext::programme() {
  return getRuleContext<cmmParser::ProgrammeContext>(0);
}

cmmParser::FunctionDefinitionContext::FunctionDefinitionContext(ProgrammeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EofContext ------------------------------------------------------------------

cmmParser::EofContext::EofContext(ProgrammeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::EofContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitEof(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclarationContext ------------------------------------------------------------------

cmmParser::VarDeclarationListContext* cmmParser::VarDeclarationContext::varDeclarationList() {
  return getRuleContext<cmmParser::VarDeclarationListContext>(0);
}

cmmParser::ProgrammeContext* cmmParser::VarDeclarationContext::programme() {
  return getRuleContext<cmmParser::ProgrammeContext>(0);
}

cmmParser::VarDeclarationContext::VarDeclarationContext(ProgrammeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::ProgrammeContext* cmmParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 2, cmmParser::RuleProgramme);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(43);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<cmmParser::FunctionDefinitionContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(36);
      fctDefinition();
      setState(37);
      programme();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<cmmParser::VarDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(39);
      varDeclarationList();
      setState(40);
      programme();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<cmmParser::EofContext>(_localctx));
      enterOuterAlt(_localctx, 3);

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

//----------------- VarDeclarationListContext ------------------------------------------------------------------

cmmParser::VarDeclarationListContext::VarDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::VarDeclarationListContext::Type() {
  return getToken(cmmParser::Type, 0);
}

std::vector<cmmParser::DeclarationVarContext *> cmmParser::VarDeclarationListContext::declarationVar() {
  return getRuleContexts<cmmParser::DeclarationVarContext>();
}

cmmParser::DeclarationVarContext* cmmParser::VarDeclarationListContext::declarationVar(size_t i) {
  return getRuleContext<cmmParser::DeclarationVarContext>(i);
}

tree::TerminalNode* cmmParser::VarDeclarationListContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

std::vector<tree::TerminalNode *> cmmParser::VarDeclarationListContext::Comma() {
  return getTokens(cmmParser::Comma);
}

tree::TerminalNode* cmmParser::VarDeclarationListContext::Comma(size_t i) {
  return getToken(cmmParser::Comma, i);
}


size_t cmmParser::VarDeclarationListContext::getRuleIndex() const {
  return cmmParser::RuleVarDeclarationList;
}

antlrcpp::Any cmmParser::VarDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitVarDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::VarDeclarationListContext* cmmParser::varDeclarationList() {
  VarDeclarationListContext *_localctx = _tracker.createInstance<VarDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 4, cmmParser::RuleVarDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(cmmParser::Type);
    setState(46);
    declarationVar();
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmParser::Comma) {
      setState(47);
      match(cmmParser::Comma);
      setState(48);
      declarationVar();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(cmmParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationVarContext ------------------------------------------------------------------

cmmParser::DeclarationVarContext::DeclarationVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::DeclarationVarContext::getRuleIndex() const {
  return cmmParser::RuleDeclarationVar;
}

void cmmParser::DeclarationVarContext::copyFrom(DeclarationVarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DecArrayContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::DecArrayContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

cmmParser::ArrayDefContext* cmmParser::DecArrayContext::arrayDef() {
  return getRuleContext<cmmParser::ArrayDefContext>(0);
}

cmmParser::ArrayDeclContext* cmmParser::DecArrayContext::arrayDecl() {
  return getRuleContext<cmmParser::ArrayDeclContext>(0);
}

cmmParser::DecArrayContext::DecArrayContext(DeclarationVarContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::DecArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitDecArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecVarSimpleContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::DecVarSimpleContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::DecVarSimpleContext::Assign() {
  return getToken(cmmParser::Assign, 0);
}

cmmParser::ExprContext* cmmParser::DecVarSimpleContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

cmmParser::DecVarSimpleContext::DecVarSimpleContext(DeclarationVarContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::DecVarSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitDecVarSimple(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::DeclarationVarContext* cmmParser::declarationVar() {
  DeclarationVarContext *_localctx = _tracker.createInstance<DeclarationVarContext>(_ctx, getState());
  enterRule(_localctx, 6, cmmParser::RuleDeclarationVar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationVarContext *>(_tracker.createInstance<cmmParser::DecVarSimpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(56);
      match(cmmParser::VarName);
      setState(59);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::Assign) {
        setState(57);
        match(cmmParser::Assign);
        setState(58);
        expr(0);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationVarContext *>(_tracker.createInstance<cmmParser::DecArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(61);
      match(cmmParser::VarName);
      setState(64);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(62);
        arrayDef();
        break;
      }

      case 2: {
        setState(63);
        arrayDecl();
        break;
      }

      }
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

//----------------- DefinitionAttributsContext ------------------------------------------------------------------

cmmParser::DefinitionAttributsContext::DefinitionAttributsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::DefinitionAttributsContext::Type() {
  return getToken(cmmParser::Type, 0);
}

tree::TerminalNode* cmmParser::DefinitionAttributsContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::DefinitionAttributsContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::DefinitionAttributsContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

tree::TerminalNode* cmmParser::DefinitionAttributsContext::Value() {
  return getToken(cmmParser::Value, 0);
}


size_t cmmParser::DefinitionAttributsContext::getRuleIndex() const {
  return cmmParser::RuleDefinitionAttributs;
}

antlrcpp::Any cmmParser::DefinitionAttributsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitDefinitionAttributs(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::DefinitionAttributsContext* cmmParser::definitionAttributs() {
  DefinitionAttributsContext *_localctx = _tracker.createInstance<DefinitionAttributsContext>(_ctx, getState());
  enterRule(_localctx, 8, cmmParser::RuleDefinitionAttributs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(cmmParser::Type);
    setState(69);
    match(cmmParser::VarName);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::LeftBracket) {
      setState(70);
      match(cmmParser::LeftBracket);
      setState(72);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::Value) {
        setState(71);
        match(cmmParser::Value);
      }
      setState(74);
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

//----------------- ArrayDefContext ------------------------------------------------------------------

cmmParser::ArrayDefContext::ArrayDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ArrayDefContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::ArrayDefContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

tree::TerminalNode* cmmParser::ArrayDefContext::Value() {
  return getToken(cmmParser::Value, 0);
}

tree::TerminalNode* cmmParser::ArrayDefContext::Assign() {
  return getToken(cmmParser::Assign, 0);
}

tree::TerminalNode* cmmParser::ArrayDefContext::LeftBrace() {
  return getToken(cmmParser::LeftBrace, 0);
}

tree::TerminalNode* cmmParser::ArrayDefContext::RightBrace() {
  return getToken(cmmParser::RightBrace, 0);
}

cmmParser::ExprListContext* cmmParser::ArrayDefContext::exprList() {
  return getRuleContext<cmmParser::ExprListContext>(0);
}


size_t cmmParser::ArrayDefContext::getRuleIndex() const {
  return cmmParser::RuleArrayDef;
}

antlrcpp::Any cmmParser::ArrayDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitArrayDef(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ArrayDefContext* cmmParser::arrayDef() {
  ArrayDefContext *_localctx = _tracker.createInstance<ArrayDefContext>(_ctx, getState());
  enterRule(_localctx, 10, cmmParser::RuleArrayDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(cmmParser::LeftBracket);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::Value) {
      setState(78);
      match(cmmParser::Value);
    }
    setState(81);
    match(cmmParser::RightBracket);
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::Assign) {
      setState(82);
      match(cmmParser::Assign);
      setState(83);
      match(cmmParser::LeftBrace);
      setState(85);
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
        setState(84);
        exprList();
      }
      setState(87);
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

tree::TerminalNode* cmmParser::ArrayDeclContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::ArrayDeclContext::Value() {
  return getToken(cmmParser::Value, 0);
}

tree::TerminalNode* cmmParser::ArrayDeclContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}


size_t cmmParser::ArrayDeclContext::getRuleIndex() const {
  return cmmParser::RuleArrayDecl;
}

antlrcpp::Any cmmParser::ArrayDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitArrayDecl(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ArrayDeclContext* cmmParser::arrayDecl() {
  ArrayDeclContext *_localctx = _tracker.createInstance<ArrayDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, cmmParser::RuleArrayDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(cmmParser::LeftBracket);
    setState(91);
    match(cmmParser::Value);
    setState(92);
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

tree::TerminalNode* cmmParser::BlockContext::LeftBrace() {
  return getToken(cmmParser::LeftBrace, 0);
}

tree::TerminalNode* cmmParser::BlockContext::RightBrace() {
  return getToken(cmmParser::RightBrace, 0);
}

std::vector<cmmParser::StatementContext *> cmmParser::BlockContext::statement() {
  return getRuleContexts<cmmParser::StatementContext>();
}

cmmParser::StatementContext* cmmParser::BlockContext::statement(size_t i) {
  return getRuleContext<cmmParser::StatementContext>(i);
}


size_t cmmParser::BlockContext::getRuleIndex() const {
  return cmmParser::RuleBlock;
}

antlrcpp::Any cmmParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::BlockContext* cmmParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 14, cmmParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(cmmParser::LeftBrace);
    setState(98);
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
      setState(95);
      statement();
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(101);
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

tree::TerminalNode* cmmParser::BraceContext::LeftParen() {
  return getToken(cmmParser::LeftParen, 0);
}

cmmParser::ExprContext* cmmParser::BraceContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::BraceContext::RightParen() {
  return getToken(cmmParser::RightParen, 0);
}


size_t cmmParser::BraceContext::getRuleIndex() const {
  return cmmParser::RuleBrace;
}

antlrcpp::Any cmmParser::BraceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitBrace(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::BraceContext* cmmParser::brace() {
  BraceContext *_localctx = _tracker.createInstance<BraceContext>(_ctx, getState());
  enterRule(_localctx, 16, cmmParser::RuleBrace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(cmmParser::LeftParen);
    setState(104);
    expr(0);
    setState(105);
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

tree::TerminalNode* cmmParser::FctBlockContext::LeftBrace() {
  return getToken(cmmParser::LeftBrace, 0);
}

tree::TerminalNode* cmmParser::FctBlockContext::RightBrace() {
  return getToken(cmmParser::RightBrace, 0);
}

std::vector<cmmParser::InstructionContext *> cmmParser::FctBlockContext::instruction() {
  return getRuleContexts<cmmParser::InstructionContext>();
}

cmmParser::InstructionContext* cmmParser::FctBlockContext::instruction(size_t i) {
  return getRuleContext<cmmParser::InstructionContext>(i);
}


size_t cmmParser::FctBlockContext::getRuleIndex() const {
  return cmmParser::RuleFctBlock;
}

antlrcpp::Any cmmParser::FctBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFctBlock(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::FctBlockContext* cmmParser::fctBlock() {
  FctBlockContext *_localctx = _tracker.createInstance<FctBlockContext>(_ctx, getState());
  enterRule(_localctx, 18, cmmParser::RuleFctBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(cmmParser::LeftBrace);
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::Type)
      | (1ULL << cmmParser::While)
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
      setState(108);
      instruction();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(114);
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

tree::TerminalNode* cmmParser::FctBraceContext::LeftParen() {
  return getToken(cmmParser::LeftParen, 0);
}

tree::TerminalNode* cmmParser::FctBraceContext::RightParen() {
  return getToken(cmmParser::RightParen, 0);
}

std::vector<cmmParser::DefinitionAttributsContext *> cmmParser::FctBraceContext::definitionAttributs() {
  return getRuleContexts<cmmParser::DefinitionAttributsContext>();
}

cmmParser::DefinitionAttributsContext* cmmParser::FctBraceContext::definitionAttributs(size_t i) {
  return getRuleContext<cmmParser::DefinitionAttributsContext>(i);
}

std::vector<tree::TerminalNode *> cmmParser::FctBraceContext::Comma() {
  return getTokens(cmmParser::Comma);
}

tree::TerminalNode* cmmParser::FctBraceContext::Comma(size_t i) {
  return getToken(cmmParser::Comma, i);
}


size_t cmmParser::FctBraceContext::getRuleIndex() const {
  return cmmParser::RuleFctBrace;
}

antlrcpp::Any cmmParser::FctBraceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFctBrace(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::FctBraceContext* cmmParser::fctBrace() {
  FctBraceContext *_localctx = _tracker.createInstance<FctBraceContext>(_ctx, getState());
  enterRule(_localctx, 20, cmmParser::RuleFctBrace);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(cmmParser::LeftParen);
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::Type) {
      setState(117);
      definitionAttributs();
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == cmmParser::Comma) {
        setState(118);
        match(cmmParser::Comma);
        setState(119);
        definitionAttributs();
        setState(124);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(127);
    match(cmmParser::RightParen);
   
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

tree::TerminalNode* cmmParser::FctDefinitionContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

cmmParser::FctBraceContext* cmmParser::FctDefinitionContext::fctBrace() {
  return getRuleContext<cmmParser::FctBraceContext>(0);
}

cmmParser::FctBlockContext* cmmParser::FctDefinitionContext::fctBlock() {
  return getRuleContext<cmmParser::FctBlockContext>(0);
}

tree::TerminalNode* cmmParser::FctDefinitionContext::Void() {
  return getToken(cmmParser::Void, 0);
}

tree::TerminalNode* cmmParser::FctDefinitionContext::Type() {
  return getToken(cmmParser::Type, 0);
}


size_t cmmParser::FctDefinitionContext::getRuleIndex() const {
  return cmmParser::RuleFctDefinition;
}

antlrcpp::Any cmmParser::FctDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitFctDefinition(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::FctDefinitionContext* cmmParser::fctDefinition() {
  FctDefinitionContext *_localctx = _tracker.createInstance<FctDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, cmmParser::RuleFctDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    _la = _input->LA(1);
    if (!(_la == cmmParser::Type

    || _la == cmmParser::Void)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(130);
    match(cmmParser::VarName);
    setState(131);
    fctBrace();
    setState(132);
    fctBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

cmmParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmParser::InstructionContext::getRuleIndex() const {
  return cmmParser::RuleInstruction;
}

void cmmParser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InsStmtContext ------------------------------------------------------------------

cmmParser::StatementContext* cmmParser::InsStmtContext::statement() {
  return getRuleContext<cmmParser::StatementContext>(0);
}

cmmParser::InsStmtContext::InsStmtContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::InsStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitInsStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InsDecVarListContext ------------------------------------------------------------------

cmmParser::VarDeclarationListContext* cmmParser::InsDecVarListContext::varDeclarationList() {
  return getRuleContext<cmmParser::VarDeclarationListContext>(0);
}

cmmParser::InsDecVarListContext::InsDecVarListContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::InsDecVarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitInsDecVarList(this);
  else
    return visitor->visitChildren(this);
}
cmmParser::InstructionContext* cmmParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 24, cmmParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::Type: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<cmmParser::InsDecVarListContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(134);
        varDeclarationList();
        break;
      }

      case cmmParser::While:
      case cmmParser::If:
      case cmmParser::Return:
      case cmmParser::LeftParen:
      case cmmParser::LeftBrace:
      case cmmParser::PlusPlus:
      case cmmParser::Minus:
      case cmmParser::MinusMinus:
      case cmmParser::Not:
      case cmmParser::Character:
      case cmmParser::VarName:
      case cmmParser::Value: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<cmmParser::InsStmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(135);
        statement();
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

cmmParser::BraceContext* cmmParser::StatementIfContext::brace() {
  return getRuleContext<cmmParser::BraceContext>(0);
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
cmmParser::StatementContext* cmmParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 26, cmmParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::LeftBrace: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementBlockContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(138);
        block();
        break;
      }

      case cmmParser::If: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementIfContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(139);
        match(cmmParser::If);
        setState(140);
        brace();
        setState(141);
        statement();
        setState(144);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(142);
          match(cmmParser::Else);
          setState(143);
          statement();
          break;
        }

        }
        break;
      }

      case cmmParser::While: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementWhileContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(146);
        match(cmmParser::While);
        setState(147);
        brace();
        setState(148);
        statement();
        break;
      }

      case cmmParser::Return: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementReturnContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(150);
        match(cmmParser::Return);
        setState(152);
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
          setState(151);
          expr(0);
        }
        setState(154);
        match(cmmParser::Semi);
        break;
      }

      case cmmParser::LeftParen:
      case cmmParser::PlusPlus:
      case cmmParser::Minus:
      case cmmParser::MinusMinus:
      case cmmParser::Not:
      case cmmParser::Character:
      case cmmParser::VarName:
      case cmmParser::Value: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementAppelFoncSansAttributContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(155);
        expr(0);
        setState(156);
        match(cmmParser::Semi);
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
//----------------- StatementAssiggnmentContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::StatementAssiggnmentContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

cmmParser::ExprContext* cmmParser::StatementAssiggnmentContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
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

cmmParser::StatementAssiggnmentContext::StatementAssiggnmentContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementAssiggnmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementAssiggnment(this);
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
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, cmmParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ExprValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(161);
      match(cmmParser::Value);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StatementAssiggnmentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(162);
      match(cmmParser::VarName);
      setState(166);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::LeftBracket) {
        setState(163);
        match(cmmParser::LeftBracket);
        setState(164);
        match(cmmParser::Value);
        setState(165);
        match(cmmParser::RightBracket);
      }
      setState(168);
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
      setState(169);
      expr(10);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExprVariableContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(170);
      match(cmmParser::VarName);
      setState(175);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(171);
        match(cmmParser::LeftBracket);
        setState(172);
        expr(0);
        setState(173);
        match(cmmParser::RightBracket);
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExprIncPostContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(177);
      match(cmmParser::VarName);
      setState(182);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::LeftBracket) {
        setState(178);
        match(cmmParser::LeftBracket);
        setState(179);
        expr(0);
        setState(180);
        match(cmmParser::RightBracket);
      }
      setState(184);
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

    case 5: {
      _localctx = _tracker.createInstance<ExprIncPreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      _la = _input->LA(1);
      if (!(_la == cmmParser::PlusPlus

      || _la == cmmParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(186);
      match(cmmParser::VarName);
      setState(191);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(187);
        match(cmmParser::LeftBracket);
        setState(188);
        expr(0);
        setState(189);
        match(cmmParser::RightBracket);
        break;
      }

      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExprNotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(193);
      match(cmmParser::Not);
      setState(194);
      expr(6);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ExprMinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(195);
      match(cmmParser::Minus);
      setState(196);
      expr(5);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ExprParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(197);
      match(cmmParser::LeftParen);
      setState(198);
      expr(0);
      setState(199);
      match(cmmParser::RightParen);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ExprAppelFoncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      match(cmmParser::VarName);
      setState(202);
      match(cmmParser::LeftParen);
      setState(204);
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
        setState(203);
        exprList();
      }
      setState(206);
      match(cmmParser::RightParen);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ExprCharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(207);
      match(cmmParser::Character);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(216);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpr);
        setState(210);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(211);
        operatorBinaire();
        setState(212);
        expr(5); 
      }
      setState(218);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
  enterRule(_localctx, 30, cmmParser::RuleOperatorBinaire);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::Star:
      case cmmParser::Div:
      case cmmParser::Mod: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprMultiDivModContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(219);
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
        setState(220);
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
        setState(221);
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
        setState(222);
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
        setState(223);
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
        setState(224);
        match(cmmParser::And);
        break;
      }

      case cmmParser::Caret: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprCaretContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(225);
        match(cmmParser::Caret);
        break;
      }

      case cmmParser::Or: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprOrContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(226);
        match(cmmParser::Or);
        break;
      }

      case cmmParser::AndAnd: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprAndAndContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(227);
        match(cmmParser::AndAnd);
        break;
      }

      case cmmParser::OrOr: {
        _localctx = dynamic_cast<OperatorBinaireContext *>(_tracker.createInstance<cmmParser::ExprOrOrContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(228);
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

std::vector<cmmParser::ExprContext *> cmmParser::ExprListContext::expr() {
  return getRuleContexts<cmmParser::ExprContext>();
}

cmmParser::ExprContext* cmmParser::ExprListContext::expr(size_t i) {
  return getRuleContext<cmmParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> cmmParser::ExprListContext::Comma() {
  return getTokens(cmmParser::Comma);
}

tree::TerminalNode* cmmParser::ExprListContext::Comma(size_t i) {
  return getToken(cmmParser::Comma, i);
}


size_t cmmParser::ExprListContext::getRuleIndex() const {
  return cmmParser::RuleExprList;
}

antlrcpp::Any cmmParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprListContext* cmmParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 32, cmmParser::RuleExprList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    expr(0);
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmParser::Comma) {
      setState(232);
      match(cmmParser::Comma);
      setState(233);
      expr(0);
      setState(238);
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
    case 14: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "file", "programme", "varDeclarationList", "declarationVar", "definitionAttributs", 
  "arrayDef", "arrayDecl", "block", "brace", "fctBlock", "fctBrace", "fctDefinition", 
  "instruction", "statement", "expr", "operatorBinaire", "exprList"
};

std::vector<std::string> cmmParser::_literalNames = {
  "", "", "", "", "", "", "'char'", "'int32_t'", "'int64_t'", "'void'", 
  "'while'", "'if'", "'else'", "'return'", "'('", "')'", "'['", "']'", "'{'", 
  "'}'", "'<'", "'<='", "'>'", "'>='", "'<<'", "'>>'", "'+'", "'++'", "'-'", 
  "'--'", "'*'", "'/'", "'%'", "'&'", "'|'", "'&&'", "'||'", "'^'", "'!'", 
  "'~'", "'?'", "'''", "':'", "';'", "','", "'='", "'*='", "'/='", "'%='", 
  "'+='", "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", "'=='", "'!='"
};

std::vector<std::string> cmmParser::_symbolicNames = {
  "", "Type", "WS", "LINECOMMENT", "BLOCKCOMMENT", "PreProcess", "Char", 
  "Int32_t", "Int64_t", "Void", "While", "If", "Else", "Return", "LeftParen", 
  "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
  "Less", "LessEqual", "Greater", "GreaterEqual", "LeftShift", "RightShift", 
  "Plus", "PlusPlus", "Minus", "MinusMinus", "Star", "Div", "Mod", "And", 
  "Or", "AndAnd", "OrOr", "Caret", "Not", "Tilde", "Question", "Quote", 
  "Colon", "Semi", "Comma", "Assign", "StarAssign", "DivAssign", "ModAssign", 
  "PlusAssign", "MinusAssign", "LeftShiftAssign", "RightShiftAssign", "AndAssign", 
  "XorAssign", "OrAssign", "Equal", "NotEqual", "Character", "VarName", 
  "Value"
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
    0x3, 0x3e, 0xf2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2e, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x34, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x37, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x3e, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x43, 0xa, 
    0x5, 0x5, 0x5, 0x45, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x4b, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4e, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x52, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x58, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x5b, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x63, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x66, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x70, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x73, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x7b, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0x7e, 0xb, 0xc, 0x5, 0xc, 0x80, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0x8b, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0x93, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x9b, 0xa, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa1, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xa9, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0xb2, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xb9, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xc2, 0xa, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xcf, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xd3, 0xa, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xd9, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0xdc, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xe8, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xed, 
    0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xf0, 0xb, 0x12, 0x3, 0x12, 0x2, 0x3, 
    0x1e, 0x13, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x2, 0xa, 0x4, 0x2, 0x3, 0x3, 0xb, 
    0xb, 0x3, 0x2, 0x2f, 0x39, 0x4, 0x2, 0x1d, 0x1d, 0x1f, 0x1f, 0x3, 0x2, 
    0x20, 0x22, 0x4, 0x2, 0x1c, 0x1c, 0x1e, 0x1e, 0x3, 0x2, 0x1a, 0x1b, 
    0x3, 0x2, 0x16, 0x19, 0x3, 0x2, 0x3a, 0x3b, 0x2, 0x10f, 0x2, 0x24, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x44, 0x3, 0x2, 0x2, 0x2, 0xa, 0x46, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x69, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x76, 0x3, 0x2, 0x2, 0x2, 0x18, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x5, 0x4, 0x3, 0x2, 0x25, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0x18, 0xd, 0x2, 0x27, 0x28, 
    0x5, 0x4, 0x3, 0x2, 0x28, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x5, 
    0x6, 0x4, 0x2, 0x2a, 0x2b, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x3, 0x2, 0x2, 0x30, 
    0x35, 0x5, 0x8, 0x5, 0x2, 0x31, 0x32, 0x7, 0x2e, 0x2, 0x2, 0x32, 0x34, 
    0x5, 0x8, 0x5, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x39, 0x7, 0x2d, 0x2, 0x2, 0x39, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3d, 0x7, 0x3d, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x2f, 0x2, 0x2, 0x3c, 
    0x3e, 0x5, 0x1e, 0x10, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x45, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x7, 
    0x3d, 0x2, 0x2, 0x40, 0x43, 0x5, 0xc, 0x7, 0x2, 0x41, 0x43, 0x5, 0xe, 
    0x8, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x45, 0x9, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x47, 0x7, 0x3, 0x2, 0x2, 0x47, 0x4d, 0x7, 0x3d, 0x2, 0x2, 0x48, 0x4a, 
    0x7, 0x12, 0x2, 0x2, 0x49, 0x4b, 0x7, 0x3e, 0x2, 0x2, 0x4a, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4e, 0x7, 0x13, 0x2, 0x2, 0x4d, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x51, 0x7, 0x12, 0x2, 0x2, 0x50, 0x52, 0x7, 0x3e, 0x2, 0x2, 0x51, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x5a, 0x7, 0x13, 0x2, 0x2, 0x54, 0x55, 0x7, 
    0x2f, 0x2, 0x2, 0x55, 0x57, 0x7, 0x14, 0x2, 0x2, 0x56, 0x58, 0x5, 0x22, 
    0x12, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x7, 0x15, 0x2, 0x2, 
    0x5a, 0x54, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x12, 0x2, 0x2, 0x5d, 0x5e, 
    0x7, 0x3e, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x13, 0x2, 0x2, 0x5f, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x64, 0x7, 0x14, 0x2, 0x2, 0x61, 0x63, 0x5, 0x1c, 
    0xf, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x68, 0x7, 0x15, 0x2, 0x2, 0x68, 0x11, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x7, 0x10, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x1e, 0x10, 0x2, 0x6b, 0x6c, 0x7, 
    0x11, 0x2, 0x2, 0x6c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x71, 0x7, 0x14, 
    0x2, 0x2, 0x6e, 0x70, 0x5, 0x1a, 0xe, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x15, 0x2, 0x2, 0x75, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x7f, 0x7, 0x10, 0x2, 0x2, 0x77, 0x7c, 0x5, 
    0xa, 0x6, 0x2, 0x78, 0x79, 0x7, 0x2e, 0x2, 0x2, 0x79, 0x7b, 0x5, 0xa, 
    0x6, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x11, 0x2, 0x2, 0x82, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x84, 0x9, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x3d, 
    0x2, 0x2, 0x85, 0x86, 0x5, 0x16, 0xc, 0x2, 0x86, 0x87, 0x5, 0x14, 0xb, 
    0x2, 0x87, 0x19, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x5, 0x6, 0x4, 0x2, 
    0x89, 0x8b, 0x5, 0x1c, 0xf, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0xa1, 
    0x5, 0x10, 0x9, 0x2, 0x8d, 0x8e, 0x7, 0xd, 0x2, 0x2, 0x8e, 0x8f, 0x5, 
    0x12, 0xa, 0x2, 0x8f, 0x92, 0x5, 0x1c, 0xf, 0x2, 0x90, 0x91, 0x7, 0xe, 
    0x2, 0x2, 0x91, 0x93, 0x5, 0x1c, 0xf, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x95, 0x7, 0xc, 0x2, 0x2, 0x95, 0x96, 0x5, 0x12, 0xa, 0x2, 0x96, 
    0x97, 0x5, 0x1c, 0xf, 0x2, 0x97, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 
    0x7, 0xf, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x1e, 0x10, 0x2, 0x9a, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0xa1, 0x7, 0x2d, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x1e, 0x10, 
    0x2, 0x9e, 0x9f, 0x7, 0x2d, 0x2, 0x2, 0x9f, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x8c, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x98, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0xa1, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x8, 
    0x10, 0x1, 0x2, 0xa3, 0xd3, 0x7, 0x3e, 0x2, 0x2, 0xa4, 0xa8, 0x7, 0x3d, 
    0x2, 0x2, 0xa5, 0xa6, 0x7, 0x12, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x3e, 0x2, 
    0x2, 0xa7, 0xa9, 0x7, 0x13, 0x2, 0x2, 0xa8, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xab, 0x9, 0x3, 0x2, 0x2, 0xab, 0xd3, 0x5, 0x1e, 0x10, 0xc, 0xac, 0xb1, 
    0x7, 0x3d, 0x2, 0x2, 0xad, 0xae, 0x7, 0x12, 0x2, 0x2, 0xae, 0xaf, 0x5, 
    0x1e, 0x10, 0x2, 0xaf, 0xb0, 0x7, 0x13, 0x2, 0x2, 0xb0, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb8, 0x7, 0x3d, 0x2, 0x2, 
    0xb4, 0xb5, 0x7, 0x12, 0x2, 0x2, 0xb5, 0xb6, 0x5, 0x1e, 0x10, 0x2, 0xb6, 
    0xb7, 0x7, 0x13, 0x2, 0x2, 0xb7, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xd3, 0x9, 0x4, 0x2, 0x2, 0xbb, 0xbc, 0x9, 0x4, 
    0x2, 0x2, 0xbc, 0xc1, 0x7, 0x3d, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x12, 0x2, 
    0x2, 0xbe, 0xbf, 0x5, 0x1e, 0x10, 0x2, 0xbf, 0xc0, 0x7, 0x13, 0x2, 0x2, 
    0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
    0x7, 0x28, 0x2, 0x2, 0xc4, 0xd3, 0x5, 0x1e, 0x10, 0x8, 0xc5, 0xc6, 0x7, 
    0x1e, 0x2, 0x2, 0xc6, 0xd3, 0x5, 0x1e, 0x10, 0x7, 0xc7, 0xc8, 0x7, 0x10, 
    0x2, 0x2, 0xc8, 0xc9, 0x5, 0x1e, 0x10, 0x2, 0xc9, 0xca, 0x7, 0x11, 0x2, 
    0x2, 0xca, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x3d, 0x2, 0x2, 
    0xcc, 0xce, 0x7, 0x10, 0x2, 0x2, 0xcd, 0xcf, 0x5, 0x22, 0x12, 0x2, 0xce, 
    0xcd, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x7, 0x11, 0x2, 0x2, 0xd1, 0xd3, 0x7, 
    0x3c, 0x2, 0x2, 0xd2, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xac, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0xc, 0x6, 0x2, 0x2, 0xd5, 0xd6, 0x5, 
    0x20, 0x11, 0x2, 0xd6, 0xd7, 0x5, 0x1e, 0x10, 0x7, 0xd7, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xe8, 0x9, 0x5, 0x2, 0x2, 0xde, 0xe8, 0x9, 0x6, 0x2, 0x2, 0xdf, 
    0xe8, 0x9, 0x7, 0x2, 0x2, 0xe0, 0xe8, 0x9, 0x8, 0x2, 0x2, 0xe1, 0xe8, 
    0x9, 0x9, 0x2, 0x2, 0xe2, 0xe8, 0x7, 0x23, 0x2, 0x2, 0xe3, 0xe8, 0x7, 
    0x27, 0x2, 0x2, 0xe4, 0xe8, 0x7, 0x24, 0x2, 0x2, 0xe5, 0xe8, 0x7, 0x25, 
    0x2, 0x2, 0xe6, 0xe8, 0x7, 0x26, 0x2, 0x2, 0xe7, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xee, 0x5, 0x1e, 
    0x10, 0x2, 0xea, 0xeb, 0x7, 0x2e, 0x2, 0x2, 0xeb, 0xed, 0x5, 0x1e, 0x10, 
    0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x2d, 
    0x35, 0x3d, 0x42, 0x44, 0x4a, 0x4d, 0x51, 0x57, 0x5a, 0x64, 0x71, 0x7c, 
    0x7f, 0x8a, 0x92, 0x9a, 0xa0, 0xa8, 0xb1, 0xb8, 0xc1, 0xce, 0xd2, 0xda, 
    0xe7, 0xee, 
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

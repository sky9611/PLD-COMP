
// Generated from cmm.g4 by ANTLR 4.7.1


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
    setState(50);
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

std::vector<cmmParser::VarDeclarationListContext *> cmmParser::ProgrammeContext::varDeclarationList() {
  return getRuleContexts<cmmParser::VarDeclarationListContext>();
}

cmmParser::VarDeclarationListContext* cmmParser::ProgrammeContext::varDeclarationList(size_t i) {
  return getRuleContext<cmmParser::VarDeclarationListContext>(i);
}

std::vector<cmmParser::FctDefinitionContext *> cmmParser::ProgrammeContext::fctDefinition() {
  return getRuleContexts<cmmParser::FctDefinitionContext>();
}

cmmParser::FctDefinitionContext* cmmParser::ProgrammeContext::fctDefinition(size_t i) {
  return getRuleContext<cmmParser::FctDefinitionContext>(i);
}


size_t cmmParser::ProgrammeContext::getRuleIndex() const {
  return cmmParser::RuleProgramme;
}

antlrcpp::Any cmmParser::ProgrammeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitProgramme(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ProgrammeContext* cmmParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 2, cmmParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::Char)
      | (1ULL << cmmParser::Int32_t)
      | (1ULL << cmmParser::Int64_t)
      | (1ULL << cmmParser::Void))) != 0)) {
      setState(54);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(52);
        varDeclarationList();
        break;
      }

      case 2: {
        setState(53);
        fctDefinition();
        break;
      }

      }
      setState(58);
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

//----------------- VarDeclarationListContext ------------------------------------------------------------------

cmmParser::VarDeclarationListContext::VarDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmParser::TypeContext* cmmParser::VarDeclarationListContext::type() {
  return getRuleContext<cmmParser::TypeContext>(0);
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
    setState(59);
    type();
    setState(60);
    declarationVar();
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmParser::Comma) {
      setState(61);
      match(cmmParser::Comma);
      setState(62);
      declarationVar();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(68);
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

//----------------- ArrayDefContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ArrayDefContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::ArrayDefContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::ArrayDefContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
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

tree::TerminalNode* cmmParser::ArrayDefContext::Value() {
  return getToken(cmmParser::Value, 0);
}

cmmParser::ExprListContext* cmmParser::ArrayDefContext::exprList() {
  return getRuleContext<cmmParser::ExprListContext>(0);
}

cmmParser::ArrayDefContext::ArrayDefContext(DeclarationVarContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ArrayDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitArrayDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayDeclContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ArrayDeclContext::VarName() {
  return getToken(cmmParser::VarName, 0);
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

cmmParser::ArrayDeclContext::ArrayDeclContext(DeclarationVarContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ArrayDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitArrayDecl(this);
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
    setState(91);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationVarContext *>(_tracker.createInstance<cmmParser::DecVarSimpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(70);
      match(cmmParser::VarName);
      setState(73);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::Assign) {
        setState(71);
        match(cmmParser::Assign);
        setState(72);
        expr(0);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationVarContext *>(_tracker.createInstance<cmmParser::ArrayDefContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(75);
      match(cmmParser::VarName);
      setState(76);
      match(cmmParser::LeftBracket);
      setState(78);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::Value) {
        setState(77);
        match(cmmParser::Value);
      }
      setState(80);
      match(cmmParser::RightBracket);

      setState(81);
      match(cmmParser::Assign);
      setState(82);
      match(cmmParser::LeftBrace);
      setState(84);
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
        | (1ULL << cmmParser::Value)
        | (1ULL << cmmParser::LongValue))) != 0)) {
        setState(83);
        exprList();
      }
      setState(86);
      match(cmmParser::RightBrace);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationVarContext *>(_tracker.createInstance<cmmParser::ArrayDeclContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(87);
      match(cmmParser::VarName);
      setState(88);
      match(cmmParser::LeftBracket);
      setState(89);
      match(cmmParser::Value);
      setState(90);
      match(cmmParser::RightBracket);
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

//----------------- DefinitionParameterContext ------------------------------------------------------------------

cmmParser::DefinitionParameterContext::DefinitionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmParser::TypeContext* cmmParser::DefinitionParameterContext::type() {
  return getRuleContext<cmmParser::TypeContext>(0);
}

tree::TerminalNode* cmmParser::DefinitionParameterContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::DefinitionParameterContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

tree::TerminalNode* cmmParser::DefinitionParameterContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}

tree::TerminalNode* cmmParser::DefinitionParameterContext::Value() {
  return getToken(cmmParser::Value, 0);
}


size_t cmmParser::DefinitionParameterContext::getRuleIndex() const {
  return cmmParser::RuleDefinitionParameter;
}

antlrcpp::Any cmmParser::DefinitionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitDefinitionParameter(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::DefinitionParameterContext* cmmParser::definitionParameter() {
  DefinitionParameterContext *_localctx = _tracker.createInstance<DefinitionParameterContext>(_ctx, getState());
  enterRule(_localctx, 8, cmmParser::RuleDefinitionParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    type();
    setState(94);
    match(cmmParser::VarName);
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmParser::LeftBracket) {
      setState(95);
      match(cmmParser::LeftBracket);
      setState(97);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmParser::Value) {
        setState(96);
        match(cmmParser::Value);
      }
      setState(99);
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
  enterRule(_localctx, 10, cmmParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(cmmParser::LeftBrace);
    setState(106);
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
      | (1ULL << cmmParser::Value)
      | (1ULL << cmmParser::LongValue))) != 0)) {
      setState(103);
      statement();
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
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
  enterRule(_localctx, 12, cmmParser::RuleBrace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(cmmParser::LeftParen);
    setState(112);
    expr(0);
    setState(113);
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

std::vector<cmmParser::VarDeclarationListContext *> cmmParser::FctBlockContext::varDeclarationList() {
  return getRuleContexts<cmmParser::VarDeclarationListContext>();
}

cmmParser::VarDeclarationListContext* cmmParser::FctBlockContext::varDeclarationList(size_t i) {
  return getRuleContext<cmmParser::VarDeclarationListContext>(i);
}

std::vector<cmmParser::StatementContext *> cmmParser::FctBlockContext::statement() {
  return getRuleContexts<cmmParser::StatementContext>();
}

cmmParser::StatementContext* cmmParser::FctBlockContext::statement(size_t i) {
  return getRuleContext<cmmParser::StatementContext>(i);
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
  enterRule(_localctx, 14, cmmParser::RuleFctBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(cmmParser::LeftBrace);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmParser::Char)
      | (1ULL << cmmParser::Int32_t)
      | (1ULL << cmmParser::Int64_t))) != 0)) {
      setState(116);
      varDeclarationList();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(125);
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
      | (1ULL << cmmParser::Value)
      | (1ULL << cmmParser::LongValue))) != 0)) {
      setState(122);
      statement();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
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

tree::TerminalNode* cmmParser::FctBraceContext::Void() {
  return getToken(cmmParser::Void, 0);
}

std::vector<cmmParser::DefinitionParameterContext *> cmmParser::FctBraceContext::definitionParameter() {
  return getRuleContexts<cmmParser::DefinitionParameterContext>();
}

cmmParser::DefinitionParameterContext* cmmParser::FctBraceContext::definitionParameter(size_t i) {
  return getRuleContext<cmmParser::DefinitionParameterContext>(i);
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
  enterRule(_localctx, 16, cmmParser::RuleFctBrace);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(cmmParser::LeftParen);
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::Char:
      case cmmParser::Int32_t:
      case cmmParser::Int64_t: {
        setState(131);
        definitionParameter();
        setState(136);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == cmmParser::Comma) {
          setState(132);
          match(cmmParser::Comma);
          setState(133);
          definitionParameter();
          setState(138);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case cmmParser::Void: {
        setState(139);
        match(cmmParser::Void);
        break;
      }

      case cmmParser::RightParen: {
        break;
      }

    default:
      break;
    }
    setState(142);
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

cmmParser::TypeContext* cmmParser::FctDefinitionContext::type() {
  return getRuleContext<cmmParser::TypeContext>(0);
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
  enterRule(_localctx, 18, cmmParser::RuleFctDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::Void: {
        setState(144);
        match(cmmParser::Void);
        break;
      }

      case cmmParser::Char:
      case cmmParser::Int32_t:
      case cmmParser::Int64_t: {
        setState(145);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(148);
    match(cmmParser::VarName);
    setState(149);
    fctBrace();
    setState(150);
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
//----------------- StatementExprContext ------------------------------------------------------------------

cmmParser::ExprContext* cmmParser::StatementExprContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::StatementExprContext::Semi() {
  return getToken(cmmParser::Semi, 0);
}

cmmParser::StatementExprContext::StatementExprContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementExpr(this);
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
  enterRule(_localctx, 20, cmmParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmParser::LeftBrace: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementBlockContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(152);
        block();
        break;
      }

      case cmmParser::If: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementIfContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(153);
        match(cmmParser::If);
        setState(154);
        brace();
        setState(155);
        statement();
        setState(158);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(156);
          match(cmmParser::Else);
          setState(157);
          statement();
          break;
        }

        }
        break;
      }

      case cmmParser::While: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementWhileContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(160);
        match(cmmParser::While);
        setState(161);
        brace();
        setState(162);
        statement();
        break;
      }

      case cmmParser::Return: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementReturnContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(164);
        match(cmmParser::Return);
        setState(166);
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
          | (1ULL << cmmParser::Value)
          | (1ULL << cmmParser::LongValue))) != 0)) {
          setState(165);
          expr(0);
        }
        setState(168);
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
      case cmmParser::Value:
      case cmmParser::LongValue: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<cmmParser::StatementExprContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(169);
        expr(0);
        setState(170);
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

//----------------- VarCallContext ------------------------------------------------------------------

cmmParser::VarCallContext::VarCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::VarCallContext::VarName() {
  return getToken(cmmParser::VarName, 0);
}

tree::TerminalNode* cmmParser::VarCallContext::LeftBracket() {
  return getToken(cmmParser::LeftBracket, 0);
}

cmmParser::ExprContext* cmmParser::VarCallContext::expr() {
  return getRuleContext<cmmParser::ExprContext>(0);
}

tree::TerminalNode* cmmParser::VarCallContext::RightBracket() {
  return getToken(cmmParser::RightBracket, 0);
}


size_t cmmParser::VarCallContext::getRuleIndex() const {
  return cmmParser::RuleVarCall;
}

antlrcpp::Any cmmParser::VarCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitVarCall(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::VarCallContext* cmmParser::varCall() {
  VarCallContext *_localctx = _tracker.createInstance<VarCallContext>(_ctx, getState());
  enterRule(_localctx, 22, cmmParser::RuleVarCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(cmmParser::VarName);
    setState(179);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(175);
      match(cmmParser::LeftBracket);
      setState(176);
      expr(0);
      setState(177);
      match(cmmParser::RightBracket);
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

cmmParser::VarCallContext* cmmParser::ExprVariableContext::varCall() {
  return getRuleContext<cmmParser::VarCallContext>(0);
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
//----------------- ExprLongValueContext ------------------------------------------------------------------

tree::TerminalNode* cmmParser::ExprLongValueContext::LongValue() {
  return getToken(cmmParser::LongValue, 0);
}

cmmParser::ExprLongValueContext::ExprLongValueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprLongValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprLongValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIncPostContext ------------------------------------------------------------------

cmmParser::VarCallContext* cmmParser::ExprIncPostContext::varCall() {
  return getRuleContext<cmmParser::VarCallContext>(0);
}

tree::TerminalNode* cmmParser::ExprIncPostContext::PlusPlus() {
  return getToken(cmmParser::PlusPlus, 0);
}

tree::TerminalNode* cmmParser::ExprIncPostContext::MinusMinus() {
  return getToken(cmmParser::MinusMinus, 0);
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

cmmParser::VarCallContext* cmmParser::ExprIncPreContext::varCall() {
  return getRuleContext<cmmParser::VarCallContext>(0);
}

tree::TerminalNode* cmmParser::ExprIncPreContext::PlusPlus() {
  return getToken(cmmParser::PlusPlus, 0);
}

tree::TerminalNode* cmmParser::ExprIncPreContext::MinusMinus() {
  return getToken(cmmParser::MinusMinus, 0);
}

cmmParser::ExprIncPreContext::ExprIncPreContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::ExprIncPreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprIncPre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementAssiggnmentContext ------------------------------------------------------------------

cmmParser::VarCallContext* cmmParser::StatementAssiggnmentContext::varCall() {
  return getRuleContext<cmmParser::VarCallContext>(0);
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

cmmParser::StatementAssiggnmentContext::StatementAssiggnmentContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any cmmParser::StatementAssiggnmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitStatementAssiggnment(this);
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

cmmParser::ExprMultiDivModContext* cmmParser::ExprBinaireContext::exprMultiDivMod() {
  return getRuleContext<cmmParser::ExprMultiDivModContext>(0);
}

cmmParser::ExprPlusMinusContext* cmmParser::ExprBinaireContext::exprPlusMinus() {
  return getRuleContext<cmmParser::ExprPlusMinusContext>(0);
}

cmmParser::ExprShiftContext* cmmParser::ExprBinaireContext::exprShift() {
  return getRuleContext<cmmParser::ExprShiftContext>(0);
}

cmmParser::ExprComparativeContext* cmmParser::ExprBinaireContext::exprComparative() {
  return getRuleContext<cmmParser::ExprComparativeContext>(0);
}

cmmParser::ExprEqualNotEqualContext* cmmParser::ExprBinaireContext::exprEqualNotEqual() {
  return getRuleContext<cmmParser::ExprEqualNotEqualContext>(0);
}

cmmParser::ExprAndContext* cmmParser::ExprBinaireContext::exprAnd() {
  return getRuleContext<cmmParser::ExprAndContext>(0);
}

cmmParser::ExprCaretContext* cmmParser::ExprBinaireContext::exprCaret() {
  return getRuleContext<cmmParser::ExprCaretContext>(0);
}

cmmParser::ExprOrContext* cmmParser::ExprBinaireContext::exprOr() {
  return getRuleContext<cmmParser::ExprOrContext>(0);
}

cmmParser::ExprAndAndContext* cmmParser::ExprBinaireContext::exprAndAnd() {
  return getRuleContext<cmmParser::ExprAndAndContext>(0);
}

cmmParser::ExprOrOrContext* cmmParser::ExprBinaireContext::exprOrOr() {
  return getRuleContext<cmmParser::ExprOrOrContext>(0);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, cmmParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ExprValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(182);
      match(cmmParser::Value);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExprLongValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(183);
      match(cmmParser::LongValue);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExprVariableContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(184);
      varCall();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExprIncPostContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      varCall();
      setState(186);
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
      setState(188);
      _la = _input->LA(1);
      if (!(_la == cmmParser::PlusPlus

      || _la == cmmParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(189);
      varCall();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExprNotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(190);
      match(cmmParser::Not);
      setState(191);
      expr(16);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ExprMinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(192);
      match(cmmParser::Minus);
      setState(193);
      expr(15);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StatementAssiggnmentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(194);
      varCall();
      setState(195);
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
      setState(196);
      expr(4);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ExprParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(198);
      match(cmmParser::LeftParen);
      setState(199);
      expr(0);
      setState(200);
      match(cmmParser::RightParen);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ExprAppelFoncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(202);
      match(cmmParser::VarName);
      setState(203);
      match(cmmParser::LeftParen);
      setState(205);
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
        | (1ULL << cmmParser::Value)
        | (1ULL << cmmParser::LongValue))) != 0)) {
        setState(204);
        exprList();
      }
      setState(207);
      match(cmmParser::RightParen);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<ExprCharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(208);
      match(cmmParser::Character);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(253);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(251);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(211);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(212);
          exprMultiDivMod();
          setState(213);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(215);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(216);
          exprPlusMinus();
          setState(217);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(219);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(220);
          exprShift();
          setState(221);
          expr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(223);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(224);
          exprComparative();
          setState(225);
          expr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(227);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(228);
          exprEqualNotEqual();
          setState(229);
          expr(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(231);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(232);
          exprAnd();
          setState(233);
          expr(10);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(235);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(236);
          exprCaret();
          setState(237);
          expr(9);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(239);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(240);
          exprOr();
          setState(241);
          expr(8);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(243);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(244);
          exprAndAnd();
          setState(245);
          expr(7);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<ExprBinaireContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(247);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(248);
          exprOrOr();
          setState(249);
          expr(6);
          break;
        }

        } 
      }
      setState(255);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprMultiDivModContext ------------------------------------------------------------------

cmmParser::ExprMultiDivModContext::ExprMultiDivModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprMultiDivModContext::Star() {
  return getToken(cmmParser::Star, 0);
}

tree::TerminalNode* cmmParser::ExprMultiDivModContext::Div() {
  return getToken(cmmParser::Div, 0);
}

tree::TerminalNode* cmmParser::ExprMultiDivModContext::Mod() {
  return getToken(cmmParser::Mod, 0);
}


size_t cmmParser::ExprMultiDivModContext::getRuleIndex() const {
  return cmmParser::RuleExprMultiDivMod;
}

antlrcpp::Any cmmParser::ExprMultiDivModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprMultiDivMod(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprMultiDivModContext* cmmParser::exprMultiDivMod() {
  ExprMultiDivModContext *_localctx = _tracker.createInstance<ExprMultiDivModContext>(_ctx, getState());
  enterRule(_localctx, 26, cmmParser::RuleExprMultiDivMod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
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
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprPlusMinusContext ------------------------------------------------------------------

cmmParser::ExprPlusMinusContext::ExprPlusMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprPlusMinusContext::Plus() {
  return getToken(cmmParser::Plus, 0);
}

tree::TerminalNode* cmmParser::ExprPlusMinusContext::Minus() {
  return getToken(cmmParser::Minus, 0);
}


size_t cmmParser::ExprPlusMinusContext::getRuleIndex() const {
  return cmmParser::RuleExprPlusMinus;
}

antlrcpp::Any cmmParser::ExprPlusMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprPlusMinus(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprPlusMinusContext* cmmParser::exprPlusMinus() {
  ExprPlusMinusContext *_localctx = _tracker.createInstance<ExprPlusMinusContext>(_ctx, getState());
  enterRule(_localctx, 28, cmmParser::RuleExprPlusMinus);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    _la = _input->LA(1);
    if (!(_la == cmmParser::Plus

    || _la == cmmParser::Minus)) {
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

//----------------- ExprShiftContext ------------------------------------------------------------------

cmmParser::ExprShiftContext::ExprShiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprShiftContext::LeftShift() {
  return getToken(cmmParser::LeftShift, 0);
}

tree::TerminalNode* cmmParser::ExprShiftContext::RightShift() {
  return getToken(cmmParser::RightShift, 0);
}


size_t cmmParser::ExprShiftContext::getRuleIndex() const {
  return cmmParser::RuleExprShift;
}

antlrcpp::Any cmmParser::ExprShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprShift(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprShiftContext* cmmParser::exprShift() {
  ExprShiftContext *_localctx = _tracker.createInstance<ExprShiftContext>(_ctx, getState());
  enterRule(_localctx, 30, cmmParser::RuleExprShift);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    _la = _input->LA(1);
    if (!(_la == cmmParser::LeftShift

    || _la == cmmParser::RightShift)) {
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

//----------------- ExprComparativeContext ------------------------------------------------------------------

cmmParser::ExprComparativeContext::ExprComparativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t cmmParser::ExprComparativeContext::getRuleIndex() const {
  return cmmParser::RuleExprComparative;
}

antlrcpp::Any cmmParser::ExprComparativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprComparative(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprComparativeContext* cmmParser::exprComparative() {
  ExprComparativeContext *_localctx = _tracker.createInstance<ExprComparativeContext>(_ctx, getState());
  enterRule(_localctx, 32, cmmParser::RuleExprComparative);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
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
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprEqualNotEqualContext ------------------------------------------------------------------

cmmParser::ExprEqualNotEqualContext::ExprEqualNotEqualContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprEqualNotEqualContext::Equal() {
  return getToken(cmmParser::Equal, 0);
}

tree::TerminalNode* cmmParser::ExprEqualNotEqualContext::NotEqual() {
  return getToken(cmmParser::NotEqual, 0);
}


size_t cmmParser::ExprEqualNotEqualContext::getRuleIndex() const {
  return cmmParser::RuleExprEqualNotEqual;
}

antlrcpp::Any cmmParser::ExprEqualNotEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprEqualNotEqual(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprEqualNotEqualContext* cmmParser::exprEqualNotEqual() {
  ExprEqualNotEqualContext *_localctx = _tracker.createInstance<ExprEqualNotEqualContext>(_ctx, getState());
  enterRule(_localctx, 34, cmmParser::RuleExprEqualNotEqual);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    _la = _input->LA(1);
    if (!(_la == cmmParser::Equal

    || _la == cmmParser::NotEqual)) {
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

//----------------- ExprAndContext ------------------------------------------------------------------

cmmParser::ExprAndContext::ExprAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprAndContext::And() {
  return getToken(cmmParser::And, 0);
}


size_t cmmParser::ExprAndContext::getRuleIndex() const {
  return cmmParser::RuleExprAnd;
}

antlrcpp::Any cmmParser::ExprAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprAnd(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprAndContext* cmmParser::exprAnd() {
  ExprAndContext *_localctx = _tracker.createInstance<ExprAndContext>(_ctx, getState());
  enterRule(_localctx, 36, cmmParser::RuleExprAnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(cmmParser::And);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprCaretContext ------------------------------------------------------------------

cmmParser::ExprCaretContext::ExprCaretContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprCaretContext::Caret() {
  return getToken(cmmParser::Caret, 0);
}


size_t cmmParser::ExprCaretContext::getRuleIndex() const {
  return cmmParser::RuleExprCaret;
}

antlrcpp::Any cmmParser::ExprCaretContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprCaret(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprCaretContext* cmmParser::exprCaret() {
  ExprCaretContext *_localctx = _tracker.createInstance<ExprCaretContext>(_ctx, getState());
  enterRule(_localctx, 38, cmmParser::RuleExprCaret);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    match(cmmParser::Caret);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprOrContext ------------------------------------------------------------------

cmmParser::ExprOrContext::ExprOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprOrContext::Or() {
  return getToken(cmmParser::Or, 0);
}


size_t cmmParser::ExprOrContext::getRuleIndex() const {
  return cmmParser::RuleExprOr;
}

antlrcpp::Any cmmParser::ExprOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprOr(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprOrContext* cmmParser::exprOr() {
  ExprOrContext *_localctx = _tracker.createInstance<ExprOrContext>(_ctx, getState());
  enterRule(_localctx, 40, cmmParser::RuleExprOr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(cmmParser::Or);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprAndAndContext ------------------------------------------------------------------

cmmParser::ExprAndAndContext::ExprAndAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprAndAndContext::AndAnd() {
  return getToken(cmmParser::AndAnd, 0);
}


size_t cmmParser::ExprAndAndContext::getRuleIndex() const {
  return cmmParser::RuleExprAndAnd;
}

antlrcpp::Any cmmParser::ExprAndAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprAndAnd(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprAndAndContext* cmmParser::exprAndAnd() {
  ExprAndAndContext *_localctx = _tracker.createInstance<ExprAndAndContext>(_ctx, getState());
  enterRule(_localctx, 42, cmmParser::RuleExprAndAnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(cmmParser::AndAnd);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprOrOrContext ------------------------------------------------------------------

cmmParser::ExprOrOrContext::ExprOrOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::ExprOrOrContext::OrOr() {
  return getToken(cmmParser::OrOr, 0);
}


size_t cmmParser::ExprOrOrContext::getRuleIndex() const {
  return cmmParser::RuleExprOrOr;
}

antlrcpp::Any cmmParser::ExprOrOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitExprOrOr(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::ExprOrOrContext* cmmParser::exprOrOr() {
  ExprOrOrContext *_localctx = _tracker.createInstance<ExprOrOrContext>(_ctx, getState());
  enterRule(_localctx, 44, cmmParser::RuleExprOrOr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(cmmParser::OrOr);
   
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
  enterRule(_localctx, 46, cmmParser::RuleExprList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    expr(0);
    setState(281);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmParser::Comma) {
      setState(277);
      match(cmmParser::Comma);
      setState(278);
      expr(0);
      setState(283);
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

//----------------- TypeContext ------------------------------------------------------------------

cmmParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmParser::TypeContext::Char() {
  return getToken(cmmParser::Char, 0);
}

tree::TerminalNode* cmmParser::TypeContext::Int32_t() {
  return getToken(cmmParser::Int32_t, 0);
}

tree::TerminalNode* cmmParser::TypeContext::Int64_t() {
  return getToken(cmmParser::Int64_t, 0);
}


size_t cmmParser::TypeContext::getRuleIndex() const {
  return cmmParser::RuleType;
}

antlrcpp::Any cmmParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

cmmParser::TypeContext* cmmParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 48, cmmParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
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

bool cmmParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool cmmParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 9);
    case 6: return precpred(_ctx, 8);
    case 7: return precpred(_ctx, 7);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 5);

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
  "file", "programme", "varDeclarationList", "declarationVar", "definitionParameter", 
  "block", "brace", "fctBlock", "fctBrace", "fctDefinition", "statement", 
  "varCall", "expr", "exprMultiDivMod", "exprPlusMinus", "exprShift", "exprComparative", 
  "exprEqualNotEqual", "exprAnd", "exprCaret", "exprOr", "exprAndAnd", "exprOrOr", 
  "exprList", "type"
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
  "Equal", "NotEqual", "Character", "VarName", "Value", "LongValue"
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
    0x3, 0x3e, 0x121, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x39, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3c, 
    0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x42, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0x45, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4c, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x51, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x57, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x5e, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x64, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x67, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0x6b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x6e, 0xb, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x78, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x7b, 0xb, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x7e, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x81, 0xb, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x89, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x8c, 0xb, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x8f, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x95, 
    0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa1, 0xa, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa9, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xaf, 0xa, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xb6, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xd0, 0xa, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0xd4, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xfe, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x101, 
    0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x11a, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x11d, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x2, 0x3, 0x1a, 0x1b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x2, 0xa, 0x4, 0x2, 0x1c, 0x1c, 
    0x1e, 0x1e, 0x3, 0x2, 0x2e, 0x38, 0x3, 0x2, 0x1f, 0x21, 0x4, 0x2, 0x1b, 
    0x1b, 0x1d, 0x1d, 0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x15, 0x18, 0x3, 0x2, 
    0x39, 0x3a, 0x3, 0x2, 0x7, 0x9, 0x2, 0x135, 0x2, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x71, 0x3, 0x2, 0x2, 0x2, 0x10, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x84, 0x3, 0x2, 0x2, 0x2, 0x14, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xae, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb0, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x104, 0x3, 0x2, 0x2, 0x2, 0x20, 0x106, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x108, 0x3, 0x2, 0x2, 0x2, 0x24, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x26, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x112, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x116, 0x3, 0x2, 0x2, 0x2, 0x32, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x35, 0x5, 0x4, 0x3, 0x2, 0x35, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x39, 0x5, 0x6, 0x4, 0x2, 0x37, 0x39, 0x5, 0x14, 0xb, 0x2, 0x38, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3e, 0x5, 0x32, 0x1a, 0x2, 0x3e, 0x43, 0x5, 0x8, 0x5, 
    0x2, 0x3f, 0x40, 0x7, 0x2d, 0x2, 0x2, 0x40, 0x42, 0x5, 0x8, 0x5, 0x2, 
    0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 
    0x2c, 0x2, 0x2, 0x47, 0x7, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x7, 0x3c, 
    0x2, 0x2, 0x49, 0x4a, 0x7, 0x2e, 0x2, 0x2, 0x4a, 0x4c, 0x5, 0x1a, 0xe, 
    0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x3c, 0x2, 0x2, 0x4e, 
    0x50, 0x7, 0x11, 0x2, 0x2, 0x4f, 0x51, 0x7, 0x3d, 0x2, 0x2, 0x50, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x12, 0x2, 0x2, 0x53, 0x54, 0x7, 0x2e, 
    0x2, 0x2, 0x54, 0x56, 0x7, 0x13, 0x2, 0x2, 0x55, 0x57, 0x5, 0x30, 0x19, 
    0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5e, 0x7, 0x14, 0x2, 0x2, 0x59, 
    0x5a, 0x7, 0x3c, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x11, 0x2, 0x2, 0x5b, 0x5c, 
    0x7, 0x3d, 0x2, 0x2, 0x5c, 0x5e, 0x7, 0x12, 0x2, 0x2, 0x5d, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x5d, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x32, 0x1a, 
    0x2, 0x60, 0x66, 0x7, 0x3c, 0x2, 0x2, 0x61, 0x63, 0x7, 0x11, 0x2, 0x2, 
    0x62, 0x64, 0x7, 0x3d, 0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x67, 
    0x7, 0x12, 0x2, 0x2, 0x66, 0x61, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0xb, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6c, 0x7, 0x13, 
    0x2, 0x2, 0x69, 0x6b, 0x5, 0x16, 0xc, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x14, 0x2, 0x2, 0x70, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0xf, 0x2, 0x2, 0x72, 0x73, 0x5, 
    0x1a, 0xe, 0x2, 0x73, 0x74, 0x7, 0x10, 0x2, 0x2, 0x74, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x79, 0x7, 0x13, 0x2, 0x2, 0x76, 0x78, 0x5, 0x6, 0x4, 
    0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 
    0x5, 0x16, 0xc, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x14, 0x2, 0x2, 0x83, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x8e, 0x7, 0xf, 0x2, 0x2, 0x85, 0x8a, 0x5, 0xa, 0x6, 0x2, 0x86, 
    0x87, 0x7, 0x2d, 0x2, 0x2, 0x87, 0x89, 0x5, 0xa, 0x6, 0x2, 0x88, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x7, 0xa, 0x2, 
    0x2, 0x8e, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x91, 0x7, 0x10, 0x2, 0x2, 0x91, 0x13, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 
    0x7, 0xa, 0x2, 0x2, 0x93, 0x95, 0x5, 0x32, 0x1a, 0x2, 0x94, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x97, 0x7, 0x3c, 0x2, 0x2, 0x97, 0x98, 0x5, 0x12, 0xa, 
    0x2, 0x98, 0x99, 0x5, 0x10, 0x9, 0x2, 0x99, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0xaf, 0x5, 0xc, 0x7, 0x2, 0x9b, 0x9c, 0x7, 0xc, 0x2, 0x2, 0x9c, 
    0x9d, 0x5, 0xe, 0x8, 0x2, 0x9d, 0xa0, 0x5, 0x16, 0xc, 0x2, 0x9e, 0x9f, 
    0x7, 0xd, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0x16, 0xc, 0x2, 0xa0, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa3, 0x7, 0xb, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0xe, 0x8, 
    0x2, 0xa4, 0xa5, 0x5, 0x16, 0xc, 0x2, 0xa5, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa8, 0x7, 0xe, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x1a, 0xe, 0x2, 0xa8, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xaf, 0x7, 0x2c, 0x2, 0x2, 0xab, 0xac, 0x5, 
    0x1a, 0xe, 0x2, 0xac, 0xad, 0x7, 0x2c, 0x2, 0x2, 0xad, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xae, 0x9b, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb5, 0x7, 0x3c, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x11, 0x2, 0x2, 0xb2, 0xb3, 
    0x5, 0x1a, 0xe, 0x2, 0xb3, 0xb4, 0x7, 0x12, 0x2, 0x2, 0xb4, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x8, 0xe, 0x1, 
    0x2, 0xb8, 0xd4, 0x7, 0x3d, 0x2, 0x2, 0xb9, 0xd4, 0x7, 0x3e, 0x2, 0x2, 
    0xba, 0xd4, 0x5, 0x18, 0xd, 0x2, 0xbb, 0xbc, 0x5, 0x18, 0xd, 0x2, 0xbc, 
    0xbd, 0x9, 0x2, 0x2, 0x2, 0xbd, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
    0x9, 0x2, 0x2, 0x2, 0xbf, 0xd4, 0x5, 0x18, 0xd, 0x2, 0xc0, 0xc1, 0x7, 
    0x27, 0x2, 0x2, 0xc1, 0xd4, 0x5, 0x1a, 0xe, 0x12, 0xc2, 0xc3, 0x7, 0x1d, 
    0x2, 0x2, 0xc3, 0xd4, 0x5, 0x1a, 0xe, 0x11, 0xc4, 0xc5, 0x5, 0x18, 0xd, 
    0x2, 0xc5, 0xc6, 0x9, 0x3, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x1a, 0xe, 0x6, 
    0xc7, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0xf, 0x2, 0x2, 0xc9, 
    0xca, 0x5, 0x1a, 0xe, 0x2, 0xca, 0xcb, 0x7, 0x10, 0x2, 0x2, 0xcb, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x3c, 0x2, 0x2, 0xcd, 0xcf, 0x7, 
    0xf, 0x2, 0x2, 0xce, 0xd0, 0x5, 0x30, 0x19, 0x2, 0xcf, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd4, 0x7, 0x10, 0x2, 0x2, 0xd2, 0xd4, 0x7, 0x3b, 0x2, 0x2, 
    0xd3, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xc2, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xd3, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xff, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0xc, 0x10, 0x2, 0x2, 
    0xd6, 0xd7, 0x5, 0x1c, 0xf, 0x2, 0xd7, 0xd8, 0x5, 0x1a, 0xe, 0x11, 0xd8, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0xc, 0xf, 0x2, 0x2, 0xda, 0xdb, 
    0x5, 0x1e, 0x10, 0x2, 0xdb, 0xdc, 0x5, 0x1a, 0xe, 0x10, 0xdc, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0xc, 0xe, 0x2, 0x2, 0xde, 0xdf, 0x5, 
    0x20, 0x11, 0x2, 0xdf, 0xe0, 0x5, 0x1a, 0xe, 0xf, 0xe0, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0xe2, 0xc, 0xd, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x22, 0x12, 
    0x2, 0xe3, 0xe4, 0x5, 0x1a, 0xe, 0xe, 0xe4, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe6, 0xc, 0xc, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x24, 0x13, 0x2, 0xe7, 
    0xe8, 0x5, 0x1a, 0xe, 0xd, 0xe8, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 
    0xc, 0xb, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x26, 0x14, 0x2, 0xeb, 0xec, 0x5, 
    0x1a, 0xe, 0xc, 0xec, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0xc, 0xa, 
    0x2, 0x2, 0xee, 0xef, 0x5, 0x28, 0x15, 0x2, 0xef, 0xf0, 0x5, 0x1a, 0xe, 
    0xb, 0xf0, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0xc, 0x9, 0x2, 0x2, 
    0xf2, 0xf3, 0x5, 0x2a, 0x16, 0x2, 0xf3, 0xf4, 0x5, 0x1a, 0xe, 0xa, 0xf4, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0xc, 0x8, 0x2, 0x2, 0xf6, 0xf7, 
    0x5, 0x2c, 0x17, 0x2, 0xf7, 0xf8, 0x5, 0x1a, 0xe, 0x9, 0xf8, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xfa, 0xc, 0x7, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x2e, 
    0x18, 0x2, 0xfb, 0xfc, 0x5, 0x1a, 0xe, 0x8, 0xfc, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0xfd, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0xfd, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 
    0x2, 0x100, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x103, 0x9, 0x4, 0x2, 0x2, 0x103, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0x9, 0x5, 0x2, 0x2, 0x105, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x9, 0x6, 0x2, 0x2, 0x107, 0x21, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x9, 
    0x7, 0x2, 0x2, 0x109, 0x23, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x9, 0x8, 
    0x2, 0x2, 0x10b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x22, 
    0x2, 0x2, 0x10d, 0x27, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x26, 
    0x2, 0x2, 0x10f, 0x29, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0x23, 
    0x2, 0x2, 0x111, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x7, 0x24, 
    0x2, 0x2, 0x113, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x25, 
    0x2, 0x2, 0x115, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x116, 0x11b, 0x5, 0x1a, 
    0xe, 0x2, 0x117, 0x118, 0x7, 0x2d, 0x2, 0x2, 0x118, 0x11a, 0x5, 0x1a, 
    0xe, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x31, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 
    0x2, 0x11e, 0x11f, 0x9, 0x9, 0x2, 0x2, 0x11f, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x38, 0x3a, 0x43, 0x4b, 0x50, 0x56, 0x5d, 0x63, 0x66, 0x6c, 0x79, 
    0x7f, 0x8a, 0x8e, 0x94, 0xa0, 0xa8, 0xae, 0xb5, 0xcf, 0xd3, 0xfd, 0xff, 
    0x11b, 
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

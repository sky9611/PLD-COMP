
// Generated from cmm.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  cmmLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, Comment = 2, PreProcess = 3, Char = 4, Int32_t = 5, Int64_t = 6, 
    Void = 7, While = 8, If = 9, Else = 10, Return = 11, LeftParen = 12, 
    RightParen = 13, LeftBracket = 14, RightBracket = 15, LeftBrace = 16, 
    RightBrace = 17, Less = 18, LessEqual = 19, Greater = 20, GreaterEqual = 21, 
    LeftShift = 22, RightShift = 23, Plus = 24, PlusPlus = 25, Minus = 26, 
    MinusMinus = 27, Star = 28, Div = 29, Mod = 30, And = 31, Or = 32, AndAnd = 33, 
    OrOr = 34, Caret = 35, Not = 36, Tilde = 37, Question = 38, Quote = 39, 
    Colon = 40, Semi = 41, Comma = 42, Assign = 43, StarAssign = 44, DivAssign = 45, 
    ModAssign = 46, PlusAssign = 47, MinusAssign = 48, LeftShiftAssign = 49, 
    RightShiftAssign = 50, AndAssign = 51, XorAssign = 52, OrAssign = 53, 
    Equal = 54, NotEqual = 55, Character = 56, VarName = 57, Value = 58
  };

  cmmLexer(antlr4::CharStream *input);
  ~cmmLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


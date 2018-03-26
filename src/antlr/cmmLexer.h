
// Generated from D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/grammaire\cmm.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  cmmLexer : public antlr4::Lexer {
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


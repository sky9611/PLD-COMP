
// Generated from cmm.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


class cmmLexer : public antlr4::Lexer {
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
        Equal = 55, NotEqual = 56, Character = 57, VarName = 58, Value = 59,
        LongValue = 60
    };

    cmmLexer( antlr4::CharStream *input );

    ~cmmLexer();

    virtual std::string getGrammarFileName() const override;

    virtual const std::vector<std::string> &getRuleNames() const override;

    virtual const std::vector<std::string> &getChannelNames() const override;

    virtual const std::vector<std::string> &getModeNames() const override;

    virtual const std::vector<std::string> &getTokenNames() const override; // deprecated, use vocabulary instead
    virtual antlr4::dfa::Vocabulary &getVocabulary() const override;

    virtual const std::vector<uint16_t> getSerializedATN() const override;

    virtual const antlr4::atn::ATN &getATN() const override;

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


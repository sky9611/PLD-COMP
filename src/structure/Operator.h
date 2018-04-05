//
// Created by wth on 2018/3/26.
//

#ifndef PLD_COMP_OPERATOR_H
#define PLD_COMP_OPERATOR_H


enum UnaryAssignmentOperator {
    PLUSPLUS,
    MINUSMINUS
};

enum AssignmentOperator {
    ASSIGN,
    STARASSIGN,
    DIVASSIGN,
    MODASSIGN,
    PLUSASSIGN,
    MINUSASSIGN,
    LEFTSHIFTASSIGN,
    RIGHTSHIFTASSIGN,
    ANDASSIGN,
    XORASSIGN,
    ORASSIGN
};

enum UnaryOperator {
    NOT,
    MINUS,
    DIV,
    MOD
};

enum BinaryOperator {
    Star,
    Div,
    Mod,
    Plus,
    Minus,
    LeftShift,
    RightShift,
    Less,
    LessEqual,
    Greater,
    GreaterEqual,
    Equal,
    NotEqual,
    And,
    Caret,
    Or,
    AndAnd,
    OrOr
};

#endif //PLD_COMP_OPERATOR_H

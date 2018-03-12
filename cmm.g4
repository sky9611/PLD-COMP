grammar cmm;

options{
    //language = cpp;
}
file:   (fctDefinition | fctDeclaration | definition | main)*;
//parser
main:
    Void 'main' fctBrace fctBlock;
type: 'char'|'int';

definition:
    arrayDecl
    |arrayDef
    |type VarName ('\u003d' expr)? Semi;

arrayDecl:
    Type VarName LeftBracket Value RightBracket Semi;
arrayDef :
    Type LeftBracket Value? RightBracket (Assign LeftBrace exprList? RightBrace) Semi;

//zones
block: LeftBrace statement* RightBrace;
brace: LeftParen exprList RightParen;
fctBlock : LeftBrace definition* statement* RightBrace;
fctBrace: LeftParen (Type VarName (Comma Type VarName)*|Void)? RightParen;

assignment: VarName AssignOperator expr Semi;

fctDeclaration :
    (Void|Type) VarName fctBrace Semi;

fctDefinition :
    (Void|Type) VarName fctBrace fctBlock;

//sentences
statement : block
    |assignment
    |fctDeclaration
    |If expr statement (Else statement)?
    |While brace statement
    |Return (expr)? Semi
    |expr Semi //appel de fct
    |VarName LeftParen exprList? RightParen Semi;

expr:
    main
    |Value|VarName
    |expr BinaryLogicOperator expr (BinaryLogicOperator expr)*
    |Not expr
    |Minus expr
    |expr (Star|Div) expr
    |expr (Plus|Minus) expr
    |expr Comparison expr
    |LeftParen expr RightParen
    |VarName LeftBracket expr RightBracket //array index comme a[i]
    |VarName LeftParen exprList? RightParen //appel de fonction
    |Character;

exprList : expr (Comma expr)* ;

//lexer
PreProcess : '#include' ('\u003c' VarName '.h' '\u003e'|'"' VarName '.h"') -> skip;

WS:
    [ \t\n\r]+ -> skip ;
Comment:
    '//' ~[\r\n]* -> skip ;

Putchar:'putchar';
Getchar:'getchar';

Type : Char|Int32_t|Int64_t;
Char : 'char';
Int32_t : 'int';
Int64_t : 'long';
Void : 'void';

While : 'while';
If : 'if';
Else : 'else';
Return : 'return';

LeftParen : '(';
RightParen : ')';
LeftBracket : '[';
RightBracket : ']';
LeftBrace : '{';
RightBrace : '}';

Less : '<';
LessEqual : '<=';
Greater : '>';
GreaterEqual : '>=';
LeftShift : '<<';
RightShift : '>>';

Plus : '+';
PlusPlus : '++';
Minus : '-';
MinusMinus : '--';
Star : '*';
Div : '/';
Mod : '%';

BinaryLogicOperator : AndAnd|OrOr;
And : '&';
Or : '|';
AndAnd : '&&';
OrOr : '||';
Caret : '^';
Not : '!';
Tilde : '~';

Question : '?';
Quote : '\'';
Colon : ':';
Semi : ';';
Comma : ',';

AssignOperator :
    Assign|StarAssign|DivAssign|ModAssign|PlusAssign|MinusAssign|LeftShiftAssign|RightShiftAssign|AndAssign|XorAssign|OrAssign;
Assign : '=';
// '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|='
StarAssign : '*=';
DivAssign : '/=';
ModAssign : '%=';
PlusAssign : '+=';
MinusAssign : '-=';
LeftShiftAssign : '<<=';
RightShiftAssign : '>>=';
AndAssign : '&=';
XorAssign : '^=';
OrAssign : '|=';

Comparison :
    Equal|NotEqual;
Equal : '==';
NotEqual : '!=';

Character: '\'' ~'\'' '\'';
VarName: Nondigit (Digit|Nondigit)*;
Value: Digit+;

fragment Digit:[0-9];
fragment Nondigit:[a-zA-Z_];

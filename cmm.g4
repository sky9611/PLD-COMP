grammar cmm;

options{
    language = cpp;
}

//parser
main:
    Void main fctBrace fctBlock;

definition:
    Type VarName (Assign expr)? Semi;

arrayDecl:
    Type VarName LeftBracket Value RightBracket Semi;
arrayDef :
    Type LeftBracket Digit* RightBracket (Assign LeftBrace exprList? RightBrace) Semi;

//zones

block: LeftBrace statement* RightBrace;
brace: LeftParen exprList RightParen;
fctBlock : Leftbrace definition* statement* RightBrace;
fctBrace: LeftParen (Type VarName (Comma Type VarName)*)? RightParen;

assignment: VarName AssignOperator (expr) Semi;

fctDeclaration :
    Void VarName fctBrace Semi;

fctDefinition :
    Void VarName fctBrace fctBlock;

//sentences
statement : block
    |assignment
    |fctDeclaration
    |fctDefinition
    |If expr Then statement (Else statement)?
    |While brace statement
    |Return expr? Semi
    |expr Semi //appel de fct
    |VarName LeftParen exprList? RightParen Semi
    |arrayDef
    |arrayDecl;

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
    |Quote Nondigit Quote;

exprList : expr (Comma expr)* ;

//lexer

Char : 'char';
Int32_t : 'int';
Int64_t : 'long';
Void : 'void';

While : 'while';
If : 'if';
Then : 'then';
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

VarName: Nondigit (Digit|Nondigit)*;


Type : Char|Int32_t|Int64_t;

Value: Digit+;

fragment
Digit
    :   [0-9]
    ;

fragment
Nondigit:
    [a-zA-Z_];

WS:
    [ \t\n\r]+ -> skip ;

Comment:
    '//' ~[\r\n]* -> skip ;
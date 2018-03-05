grammar cmm;

options{
    language = cpp;
}

//parser

expr:
    main
    |Value
    |assignment
    |declaring
    |functionDeclaring;

main:
    Void main inbrackets innsqbrackets;

declaring:
    Type VarName Semi;

inbrackets: (LeftBrace expr* RightBrace);
innsqbrackets: (LeftParen expr* RightParen);

assignment: VarName AssignOperator (VarName|Value) Semi;

functionDeclaring :
    Void VarName innsqbrackets

//lexer

Char : 'char';
Int32_t : 'int';
Int64_t : 'long';
Void : 'void';

While : 'while';
If : 'if';
Else : 'else';

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

And : '&';
Or : '|';
AndAnd : '&&';
OrOr : '||';
Caret : '^';
Not : '!';
Tilde : '~';

Question : '?';
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
Nondigit
    :   [a-zA-Z_]
    ;

Space:
    [ \t\n\r]+ -> skip ;

Comment:
    '//' ~[\r\n]* -> skip ;
grammar cmm;

options{
    //language = cpp;
}
file:   (fctDefinition | fctDeclaration | definition | main)*;
//parser
main:
    Void 'main' fctBrace fctBlock;

definition: type VarName(arrayDef|arrayDecl)? (Assign expr)? (Comma VarName(arrayDef|arrayDecl)? (Assign expr)?)* Semi;

definitionAttributs : type VarName (LeftBracket Value? RightBracket)?;

type: (Char|Int32_t|Int64_t);

arrayDef :
    LeftBracket Value? RightBracket (Assign LeftBrace exprList? RightBrace);
arrayDecl:
    LeftBracket Value RightBracket;

//zones
block: LeftBrace statement* RightBrace;
brace: LeftParen exprList RightParen;
fctBlock : LeftBrace (definition|arrayDecl|arrayDef)* statement* RightBrace;
fctBrace: LeftParen (definitionAttributs (Comma definitionAttributs)*|Void)? RightParen;

assignment: VarName (Assign|StarAssign|DivAssign|ModAssign|PlusAssign|MinusAssign|LeftShiftAssign|RightShiftAssign|AndAssign|XorAssign|OrAssign) expr Semi;

fctDeclaration :
    (Void|type) VarName fctBrace Semi;

fctDefinition :
    (Void|type) VarName fctBrace fctBlock;

//sentences
statement : block
    |assignment
    |If expr statement (Else statement)?
    |While brace statement
    |Return (expr)? Semi
    |expr Semi //appel de fct
    |VarName LeftParen exprList? RightParen Semi;

expr:
    main
    |Value
    |VarName
    |expr (AndAnd|OrOr) expr ((AndAnd|OrOr) expr)*
    |Not expr
    |Minus expr
    |expr (Star|Div) expr
    |expr (Plus|Minus) expr
    |expr (Equal|NotEqual) expr
    |LeftParen expr RightParen
    |VarName LeftBracket expr RightBracket //array index comme a[i]
    |VarName LeftParen exprList? RightParen //appel de fonction
    |Character;

exprList : expr (Comma expr)* ;

//lexer
WS:
    [ \t\n\r]+ -> skip ;
Comment:
    '//' ~[\r\n]* -> skip ;
PreProcess : '#include' (|' ') ('<' VarName '.h' '>'|'"' VarName '.h"') -> skip;

//Type : (Char|Int32_t|Int64_t);
Char : 'char';
Int32_t : 'int32_t';
Int64_t : 'int64_t';
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

//BinaryLogicOperator : (AndAnd|OrOr);
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


//AssignOperator :
//    (Assign|StarAssign|DivAssign|ModAssign|PlusAssign|MinusAssign|LeftShiftAssign|RightShiftAssign|AndAssign|XorAssign|OrAssign);
// '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|='
Assign : '=';
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

//Comparison :
//    (Equal|NotEqual);
Equal : '==';
NotEqual : '!=';

Character: '\'' ((~'\'')|'\\'~'\'') '\'';
VarName: Nondigit (Digit|Nondigit)*;
Value: Digit+;

fragment Digit:[0-9];
fragment Nondigit:[a-zA-Z_];

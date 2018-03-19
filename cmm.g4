grammar cmm;

options{
    //language = cpp;
}
file:   (fctDefinition | fctDeclaration | definition)*      #progRule;
//parser
definition: type VarName(arrayDef|arrayDecl)? (Assign expr)? (Comma VarName(arrayDef|arrayDecl)? (Assign expr)?)* Semi  #defRule;

definitionAttributs : type VarName (LeftBracket Value? RightBracket)?   #defAttributes;

type: (Char|Int32_t|Int64_t)    #typeRule;

arrayDef :
    LeftBracket Value? RightBracket (Assign LeftBrace exprList? RightBrace)     #arrayDefinition;
arrayDecl:
    LeftBracket Value RightBracket      #arrayDeclaration;

//zones
block: LeftBrace statement* RightBrace      #blockZone;
brace: LeftParen exprList RightParen        #braceZone;
fctBlock : LeftBrace (definition|arrayDecl|arrayDef)* statement* RightBrace     #functionBlock;
fctBrace: LeftParen (definitionAttributs (Comma definitionAttributs)*|Void)? RightParen     #functionBlock;

fctDeclaration :
    (Void|type) VarName fctBrace Semi       #functionDeclaration;

fctDefinition :
    (Void|type) VarName fctBrace fctBlock       #functionDefinition;

//sentences
statement :
    block                                           #statementBlock
    |VarName (LeftBracket Value RightBracket)? (Assign|StarAssign|DivAssign|ModAssign|PlusAssign|MinusAssign|LeftShiftAssign|RightShiftAssign|AndAssign|XorAssign|OrAssign) exprList Semi                         #statementAssiggnment
    |If expr statement (Else statement)?            #statementIf
    |While brace statement                          #statementWhile
    |Return (expr)? Semi                            #statementReturn
    |expr Semi                                      #statementAppelFoncSansAttribut
    |VarName LeftParen exprList? RightParen Semi    #statementAppelFoncAvecAttribut;

expr:
    Value                                                              #exprValue
    |VarName (LeftBracket Value RightBracket)?                          #exprVariable
    |VarName (LeftBracket Value RightBracket)? (PlusPlus|MinusMinus)    #exprIncPost
    |(PlusPlus|MinusMinus) VarName (LeftBracket Value RightBracket)?    #exprIncPre
    |Not expr                                                           #exprNot
    |Minus expr                                                         #exprMinus
    |expr (Star|Div|Mod) expr                                           #exprMultiDivMod
    |expr (Plus|Minus) expr                                             #exprPlusMinus
    |expr (LeftShift|RightShift) expr                                   #exprShift
    |expr (Less|LessEqual|Greater|GreaterEqual) expr                    #exprComparative
    |expr (Equal|NotEqual) expr                                         #exprEqualNotEqual
    |expr And expr                                                      #exprAnd
    |expr Caret expr                                                    #exprCaret
    |expr Or expr                                                       #exprOr
    |expr AndAnd expr                                                   #exprAndAnd
    |expr OrOr expr                                                     #exprOrOr
    |LeftParen expr RightParen                                          #exprParen
    |VarName LeftBracket expr RightBracket                              #exprArrayIndex //array index comme a[i]
    |VarName LeftParen exprList? RightParen                             #exprAppelFonc //appel de fonction
    |Character                                                          #exprChar
    ;

exprList : expr (Comma expr)*       #listOfExpressions;

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

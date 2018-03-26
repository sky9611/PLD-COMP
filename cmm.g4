grammar cmm;

options{
    //language = cpp;
}
file:   (fctDefinition | fctDeclaration | definition)*      #progRule;
//parser
definition: type VarName(arrayDef|arrayDecl|Assign expr)?( Comma VarName(arrayDef|arrayDecl|Assign expr)?)* Semi  #defRule;

definitionAttributs : type VarName (LeftBracket Value? RightBracket)?   #defAttributes;

type: (Char|Int32_t|Int64_t)    #typeRule;

arrayDef :
    LeftBracket Value? RightBracket (Assign LeftBrace exprList? RightBrace)?     #arrayDefinition;
arrayDecl:
    LeftBracket Value RightBracket      #arrayDeclaration;

//zones
block: LeftBrace statement* RightBrace      #blockZone;
brace: LeftParen exprList RightParen        #braceZone;
fctBlock : LeftBrace (definition|arrayDecl|arrayDef)* statement* RightBrace     #functionBlock;
fctBrace: LeftParen (definitionAttributs (Comma definitionAttributs)*|Void)? RightParen     #functionBrace;

fctDeclaration :
    (Void|type) VarName fctBrace Semi       #functionDeclaration;

fctDefinition :
    (Void|type) VarName fctBrace fctBlock       #functionDefinition;

//sentences
statement :
    block                                           #statementBlock
    |If expr statement (Else statement)?            #statementIf
    |While brace statement                          #statementWhile
    |Return (expr)? Semi                            #statementReturn
    |expr Semi                                      #statementAppelFoncSansAttribut
    |VarName LeftParen exprList? RightParen Semi    #statementAppelFoncAvecAttribut;

expr:
    Value                                                              #exprValue
    |VarName (LeftBracket expr RightBracket)?                          #exprVariable
    |VarName (LeftBracket expr RightBracket)? (PlusPlus|MinusMinus)    #exprIncPost
    |(PlusPlus|MinusMinus) VarName (LeftBracket expr RightBracket)?    #exprIncPre
    |Not expr                                                           #exprNot
    |Minus expr                                                         #exprMinus
    |expr operatorBinaire expr                                          #exprBinaire
    |VarName (LeftBracket Value RightBracket)? (Assign|StarAssign|DivAssign|ModAssign|PlusAssign|MinusAssign|LeftShiftAssign|RightShiftAssign|AndAssign|XorAssign|OrAssign) expr    #exprAssiggnment
    |LeftParen expr RightParen                                          #exprParen
    |VarName LeftParen exprList? RightParen                             #exprAppelFonc //appel de fonction
    |Character                                                          #exprChar
    ;

operatorBinaire:
    (Star|Div|Mod)                                            #exprMultiDivMod
    |(Plus|Minus)                                             #exprPlusMinus
    |(LeftShift|RightShift)                                   #exprShift
    |(Less|LessEqual|Greater|GreaterEqual)                    #exprComparative
    |(Equal|NotEqual)                                         #exprEqualNotEqual
    |And                                                      #exprAnd
    |Caret                                                    #exprCaret
    |Or                                                       #exprOr
    |AndAnd                                                   #exprAndAnd
    |OrOr                                                     #exprOrOr
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

grammar cmm;

options{
    //language = cpp;
}
file: programme;
programme:
    (varDeclarationList | fctDefinition)*;
//parser
//definition: Type VarName(arrayDef|arrayDecl|Assign expr)?( Comma VarName(arrayDef|arrayDecl|Assign expr)?)* Semi;
varDeclarationList:
    type declarationVar (Comma declarationVar)* Semi;

declarationVar:
    VarName (Assign expr)?                                                              #decVarSimple
    | VarName LeftBracket Value? RightBracket (Assign LeftBrace exprList? RightBrace)   #arrayDef
    | VarName LeftBracket Value RightBracket                                            #arrayDecl
    ;

//declarationVarSimple: VarName (Assign expr)?;

//declarationArray: VarName (arrayDef|arrayDecl);

definitionParameter : type VarName (LeftBracket Value? RightBracket)?;


//zones
block: LeftBrace statement* RightBrace;
brace: LeftParen expr RightParen;
fctBlock : LeftBrace varDeclarationList* statement* RightBrace;
fctBrace: LeftParen ((definitionParameter (Comma definitionParameter)*)|Void)? RightParen;

fctDefinition :
    (Void|type) VarName fctBrace fctBlock;

statement :
    block                                           #statementBlock
    |If brace statement (Else statement)?           #statementIf
    |While brace statement                          #statementWhile
    |Return (expr)? Semi                            #statementReturn
    |expr Semi                                      #statementExpr
    ;

varCall: VarName (LeftBracket expr RightBracket)?;


expr:
    varCall                                                            #exprVariable
    |varCall (PlusPlus|MinusMinus)                                      #exprIncPost
    |(PlusPlus|MinusMinus) varCall                                      #exprIncPre
    |Not expr                                                           #exprNot
    |Minus expr                                                         #exprMinus
    |expr exprMultiDivMod expr                                          #exprBinaire
    |expr exprPlusMinus expr                                            #exprBinaire
    |expr exprShift expr                                                #exprBinaire
    |expr exprComparative expr                                          #exprBinaire
    |expr exprEqualNotEqual expr                                        #exprBinaire
    |expr exprAnd expr                                                  #exprBinaire
    |expr exprCaret expr                                                #exprBinaire
    |expr exprOr expr                                                   #exprBinaire
    |expr exprAndAnd expr                                               #exprBinaire
    |expr exprOrOr expr                                                 #exprBinaire
    |varCall (Assign|StarAssign|DivAssign|ModAssign|PlusAssign|MinusAssign|LeftShiftAssign|RightShiftAssign|AndAssign|XorAssign|OrAssign) expr     #statementAssiggnment
    |LeftParen expr RightParen                                          #exprParen
    |VarName LeftParen exprList? RightParen                             #exprAppelFonc //appel de fonction
    |Character                                                          #exprChar
    |Value                                                              #exprValue
    ;

exprMultiDivMod:
    (Star|Div|Mod);
exprPlusMinus:
    (Plus|Minus);
exprShift:
    (LeftShift|RightShift);
exprComparative:
    (Less|LessEqual|Greater|GreaterEqual);
exprEqualNotEqual:
    (Equal|NotEqual);
exprAnd:
    And;
exprCaret:
    Caret;
exprOr:
    Or;
exprAndAnd:
    AndAnd;
exprOrOr:
    OrOr;

exprList : expr (Comma expr)*;

type: (Char|Int32_t|Int64_t);

//lexer

WS:
    [ \t\n\r]+ -> skip ;
LINECOMMENT: '//' ~('\r' | '\n')* -> skip ;
BLOCKCOMMENT: '/*' .*? '*/' -> skip ;
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
Value: Digit+'L'?;

fragment Digit:[0-9];
fragment Nondigit:[a-zA-Z_];

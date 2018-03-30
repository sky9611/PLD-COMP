//
// Created by Zifan YAO on 26/03/2018.
//

#include "cmmInterpreter.h"
#define VIEW_VISITOR_COUT

#include "../structure/cmmDef.h"
#include "../structure/cmmVar.h"
#include "../structure/cmmArray.h"
#include "../structure/Function.h"
#include "../structure/Program.h"
#include "../structure/Statements/Statement.h"
#include "../structure/Statements/StmtBlock.h"
#include "../structure/Statements/StmtIf.h"
#include "../structure/Statements/StmtReturn.h"
#include "../structure/Statements/StmtWhile.h"
#include "../structure/Statements/Expressions/Expression.h"
#include "../structure/Statements/Expressions/ExprArray.h"
#include "../structure/Statements/Expressions/ExprAssignment.h"
#include "../structure/Statements/Expressions/ExprFuncCall.h"
#include "../structure/Statements/Expressions/ExprValue.h"
#include "../structure/Statements/Expressions/ExprVariable.h"
#include "../structure/Statements/Expressions/ExprBinary.h"
#include "../structure/Statements/Expressions/ExprUnary.h"

using namespace std;

antlrcpp::Any cmmInterpreter::visitFile(cmmParser::FileContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitFile : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitFile(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFile" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitProgramme(cmmParser::ProgrammeContext *ctx) {
#ifdef  VIEW_VISITOR_COUT
    cout << "[cmmInterpreter] + visitProgramme : scope( "<< getScopeList() <<" )" << endl;
#endif

    this->program = new Program();

    setScope(program);
    cmmBaseVisitor::visitProgramme(ctx);
    unScope();

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitProgramme" << endl;
    #endif
    return program;
}

antlrcpp::Any cmmInterpreter::visitVarDeclarationList(cmmParser::VarDeclarationListContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitVarDeclarationList : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Type t = visit(ctx->type());


    for(cmmParser::DeclarationVarContext* varCtx :  ctx->declarationVar()){
        cmmVar* var = visit(varCtx);

        if(typeid(*var) == typeid(cmmArray)){
            var->setType(type::basicToArrayType(t));
        }else{
            var->setType(t);
        }

        if(currentScope->getDefLocal(var->getName()) != nullptr){
            throw cmmRuntimeException(string("[cmmInterpreter::visitVarDeclarationList] varName alredy use : ") + var->getName() + string("\n scope ( ") + getScopeList()+ string(" )"));
        }

        currentScope->addVar(var);
    }


    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitVarDeclarationList" << endl;
    #endif
    return nullptr;
}

antlrcpp::Any cmmInterpreter::visitDecVarSimple(cmmParser::DecVarSimpleContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitDecVarSimple : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Type type = VOID;
    string name = ctx->VarName()->getText();

    cmmVar* res = new cmmVar(type, name);

    if(ctx->expr() != nullptr){
        Expression* exp = visit(ctx->expr());
        program->addStatement(new ExprAssignment(currentScope,res,exp));
    }

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitDecVarSimple" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitDecArray(cmmParser::DecArrayContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitDecArray : scope( "<< getScopeList() <<" )" << endl;
    #endif

    cmmArray* res;

    if(ctx->arrayDecl() != nullptr){
        res = visit(ctx->arrayDecl());
    } else {
        res = visit(ctx->arrayDef());
    }

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitDecArray" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitDefinitionParameter(cmmParser::DefinitionParameterContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitDefinitionAttributs : scope( "<< getScopeList() <<" )" << endl;
    #endif

    cmmVar* res;

    Type type = visit(ctx->type());
    string name = ctx->VarName()->getText();

    if(ctx->LeftBracket() != nullptr){// is table
        if(ctx->Value() != nullptr){// fix size
            res = new cmmArray(type, name, stoi(ctx->Value()->getText()));
        }else{
            res = new cmmArray(type, name);
        }
    }else{
        res = new cmmVar(type, name);
    }


    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitDefinitionAttributs" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitArrayDef(cmmParser::ArrayDefContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitArrayDef : scope( "<< getScopeList() <<" )" << endl;
    #endif

    throw cmmRuntimeException("[cmmInterpreter::visitArrayDef] not implemented"); // TODO cmmInterpreter::visitArrayDef

    auto res = cmmBaseVisitor::visitArrayDef(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitArrayDef" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitArrayDecl(cmmParser::ArrayDeclContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitArrayDecl : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Type type = VOID;
    string name;
    int size;

    cmmArray* res = new cmmArray(type, name, size);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitArrayDecl" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitBlock(cmmParser::BlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitBlock : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitBlock(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitBlock" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitBrace(cmmParser::BraceContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitBrace : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = visit(ctx->expr());

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitBrace" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitFctBlock(cmmParser::FctBlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitFctBlock : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Function* function = currentScope->getFunctionScope();

    for(auto defCtx : ctx->varDeclarationList()){
        visit(defCtx);
    }

    setScope(function->getContent());
    for(auto stmtCtx : ctx->statement()){
        visit(stmtCtx);
    }
    unScope();

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFctBlock" << endl;
    #endif
    return function->getContent();
}

antlrcpp::Any cmmInterpreter::visitFctBrace(cmmParser::FctBraceContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitFctBrace : scope( "<< getScopeList() <<" )" << endl;
    #endif

    vector<cmmVar*> params;

    for(cmmParser::DefinitionParameterContext *paramCtx : ctx->definitionParameter()){
        cmmVar* param = visit(paramCtx);
        params.push_back(param);
    }


    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFctBrace" << endl;
    #endif
    return params;
}

antlrcpp::Any cmmInterpreter::visitFctDefinition(cmmParser::FctDefinitionContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitFctDefinition : scope( "<< getScopeList() <<" )" << endl;
    #endif


    Type type;
    string name;

    if(ctx->type() != nullptr){
        type = visit(ctx->type());
    } else {
        type = VOID;
    }

    name = ctx->VarName()->getText();

    vector<cmmVar*> params = visit(ctx->fctBrace());

    Function* function = new Function(program, type, name,params, ctx);

    if(program->getDefLocal(function->getName()) != nullptr){
        throw cmmRuntimeException(string("[cmmInterpreter::visitFctDefinition] functionName alredy use : ") + function->getName() );
    }
    
    program->addFunction(function);

    setScope(dynamic_cast<cmmScope*>(function));
    visit(ctx->fctBlock());
    unScope();



    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFctDefinition" << endl;
    #endif
    return function;
}

antlrcpp::Any cmmInterpreter::visitStatementBlock(cmmParser::StatementBlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementBlock : scope( "<< getScopeList() <<" )" << endl;
    #endif
    StmtBlock* block = new StmtBlock(currentScope);
    setScope(block);

    cmmBaseVisitor::visitStatementBlock(ctx);

    unScope();

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementBlock" << endl;
    #endif
    return block;
}

antlrcpp::Any cmmInterpreter::visitStatementIf(cmmParser::StatementIfContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementIf : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Expression* expression = visit(ctx->brace());

    auto statmentIfCtx = ctx->statement(0);
    auto statmentElseCtx = ctx->statement(1);

    Statement* statmentIf = visit(statmentIfCtx);

    StmtIf* stmtIf;

    if(statmentElseCtx == nullptr){ // NO ELSE

        stmtIf = new StmtIf(currentScope, expression, statmentIf);

    }else{

        Statement* statmentElse = visit(statmentElseCtx);

        stmtIf = new StmtIf(currentScope, expression, statmentIf, statmentElse);

    }

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementIf" << endl;
    #endif
    return stmtIf;
}

antlrcpp::Any cmmInterpreter::visitStatementWhile(cmmParser::StatementWhileContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementWhile : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Statement* stmt = visit(ctx->statement());
    Expression* test = visit(ctx->brace());

    StmtWhile* res = new StmtWhile(currentScope, test, stmt);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementWhile" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementReturn(cmmParser::StatementReturnContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementReturn : scope( "<< getScopeList() <<" )" << endl;
    #endif



    StmtReturn* res;

    if(ctx->expr() != nullptr){
        Expression* exp = visit(ctx->expr());
        res = new StmtReturn(currentScope ,exp);
    }else{
        res = new StmtReturn(currentScope);
    }

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementReturn" << endl;
    #endif
    return res;
}

antlrcpp::Any
cmmInterpreter::visitStatementExpr(cmmParser::StatementExprContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementExpr : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Expression* res = visit(ctx->expr());

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementExpr" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitVarCall(cmmParser::VarCallContext *ctx){
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitVarCall : scope( "<< getScopeList() <<" )" << endl;
    #endif

    string varName = ctx->VarName()->getText();

    cmmDef* def = currentScope->getDef(varName);


    if(def == nullptr){
        throw cmmRuntimeException(string("[cmmInterpreter::visitExprVariable] Unknow var name ") + varName + string(" scope( ") + getScopeList() + string(" )"));
    }

    ExprVariable* expVar;

    if(ctx->expr() != nullptr){ // Array
        if(typeid(*def) != typeid(cmmArray)){
            throw cmmRuntimeException(string("[cmmInterpreter::visitExprVariable] Var name ") + varName + string(" is not an array scope( ") + getScopeList() + string(" )"));
        }

        cmmArray* array = dynamic_cast<cmmArray *>(def);

        Expression* ex = visit(ctx->expr());

        expVar = new ExprArray(currentScope,array,ex);


    }else{ // Not Array
        if(typeid(*def) != typeid(cmmVar)){
            throw cmmRuntimeException(string("[cmmInterpreter::visitExprVariable] Var name ") + varName + string(" is not var( ") + getScopeList() + string(" )"));
        }

        cmmVar* var = dynamic_cast<cmmVar *>(def);

        expVar = new ExprVariable(currentScope,var);

    }

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitVarCall" << endl;
    #endif
    return expVar;
}

antlrcpp::Any cmmInterpreter::visitExprParen(cmmParser::ExprParenContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprParen : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = visit(ctx->expr());

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprParen" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprValue(cmmParser::ExprValueContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprValue : scope( "<< getScopeList() <<" )" << endl;
    #endif

    /*auto res = cmmBaseVisitor::visitExprValue(ctx);*/

    ExprValue *res = nullptr;

    long value = stol(ctx->getText());

    if(value<INT_MAX)
        res = new ExprValue(currentScope, INT32_T, value);
    else if (value<LONG_MAX)
        res = new ExprValue(currentScope, INT64_T, value);
    else
        throw cmmRuntimeException(string("[cmmInterpreter::visitExprValue] Outside range: ") + to_string(value));

#ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprValue" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprNot(cmmParser::ExprNotContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprNot : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Expression * expr = visit(ctx->expr());
    ExprUnary * res = new ExprUnary(currentScope, expr, NOT);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprNot" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprVariable(cmmParser::ExprVariableContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprVariable : scope( "<< getScopeList() <<" )" << endl;
    #endif

    ExprVariable* res = visit(ctx->varCall());

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprVariable" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAppelFonc(cmmParser::ExprAppelFoncContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAppelFonc : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprAppelFonc(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAppelFonc" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprMinus(cmmParser::ExprMinusContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprMinus : scope( "<< getScopeList() <<" )" << endl;
    #endif

    Expression * expr = visit(ctx->expr());
    ExprUnary * res = new ExprUnary(currentScope, expr, MINUS);


#ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprMinus" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprIncPost(cmmParser::ExprIncPostContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprIncPost : scope( "<< getScopeList() <<" )" << endl;
    #endif

    ExprVariable *var = visit(ctx->varCall());

    ExprBinary *exprBi = nullptr;

    Type t = var->getType();

    if(type::isBasicType(t)){
        ExprValue *one = new ExprValue(currentScope, var->getType(), 1);
        if(ctx->MinusMinus()!= nullptr)
            exprBi = new ExprBinary(currentScope, var, one, Minus);
        if(ctx->PlusPlus()!= nullptr)
            exprBi = new ExprBinary(currentScope, var, one, Plus);
    }

    ExprAssignment *res = new ExprAssignment(currentScope, var->getVar(), exprBi, false);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprIncPost" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprChar(cmmParser::ExprCharContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprChar : scope( "<< getScopeList() <<" )" << endl;
    #endif

    char c = ctx->getText()[1];
    ExprValue* res = new ExprValue(currentScope, CHAR, c);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprChar" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementAssiggnment : scope( "<< getScopeList() <<" )" << endl;
    #endif

//    auto res = cmmBaseVisitor::visitStatementAssiggnment(ctx);

    ExprVariable * gauche = visit(ctx->varCall());

    Expression * droite = visit(ctx->expr());

    ExprAssignment * res = nullptr;

    if(gauche->getType()==droite->getType())
        res = new ExprAssignment(currentScope, gauche->getVar(), droite);
    else
        throw cmmRuntimeException("[cmmInterpreter:visitStatementAssiggnment()] Error cast from " + type::toString(droite->getType()) + "to " + type::toString(gauche->getType()));

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementAssiggnment" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprIncPre(cmmParser::ExprIncPreContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprIncPre : scope( "<< getScopeList() <<" )" << endl;
    #endif

    ExprVariable *var = visit(ctx->varCall());

    ExprBinary *exprBi = nullptr;

    Type t = var->getType();

    if(type::isBasicType(t)){
        ExprValue *one = new ExprValue(currentScope, var->getType(), 1);
        if(ctx->MinusMinus()!= nullptr)
            exprBi = new ExprBinary(currentScope, var, one, Minus);
        if(ctx->PlusPlus()!= nullptr)
            exprBi = new ExprBinary(currentScope, var, one, Plus);
    }

    ExprAssignment *res = new ExprAssignment(currentScope, var->getVar(), exprBi, true);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprIncPre" << endl;
    #endif
    return res;
}

//expr op expr
antlrcpp::Any cmmInterpreter::visitExprBinaire(cmmParser::ExprBinaireContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprBinaire : scope( "<< getScopeList() <<" )" << endl;
    #endif

    /*auto res = cmmBaseVisitor::visitExprBinaire(ctx);*/

    Expression * expr0 = visit(ctx->expr(0));
    Expression * expr1 = visit(ctx->expr(1));

    BinaryOperator oB = visit(ctx->operatorBinaire());

    Expression * res = new ExprBinary(currentScope,expr0,expr1,oB);

#ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprBinaire" << endl;
    #endif
    return res;
}

//expr *|% expr
antlrcpp::Any cmmInterpreter::visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprMultiDivMod : scope( "<< getScopeList() <<" )" << endl;
    #endif

    BinaryOperator res = Div;

    if(ctx->Div()!= nullptr)
        res = Div;
    else if(ctx->Mod()!= nullptr)
        res = Mod;
    else if(ctx->Star()!= nullptr)
        res = Star;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprMultiDivMod" << endl;
    #endif
    return res;
}

//expr +- expr
antlrcpp::Any cmmInterpreter::visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprPlusMinus : scope( "<< getScopeList() <<" )" << endl;
    #endif

    BinaryOperator res = Plus;

    if(ctx->Plus()!= nullptr)
        res = Plus;
    else if(ctx->Minus()!= nullptr)
        res = Minus;


#ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprPlusMinus" << endl;
    #endif
    return res;
}

//expr >><< expr
antlrcpp::Any cmmInterpreter::visitExprShift(cmmParser::ExprShiftContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprShift : scope( "<< getScopeList() <<" )" << endl;
    #endif

    BinaryOperator res = LeftShift;

    if(ctx->LeftShift()!= nullptr)
        res = LeftShift;
    else if(ctx->RightShift()!= nullptr)
        res = RightShift;


#ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprShift" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprComparative(cmmParser::ExprComparativeContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprComparative : scope( "<< getScopeList() <<" )" << endl;
    #endif

    BinaryOperator res = Less;

    if(ctx->Greater()!= nullptr)
        res = Greater;
    else if(ctx->GreaterEqual()!= nullptr)
        res = GreaterEqual;
    else if(ctx->Less()!= nullptr)
        res = Less;
    else if(ctx->LessEqual()!= nullptr)
        res = LessEqual;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprComparative" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprEqualNotEqual : scope( "<< getScopeList() <<" )" << endl;
    #endif

    BinaryOperator res = Equal;

    if(ctx->Equal()!= nullptr)
        res = Equal;
    else if(ctx->NotEqual()!= nullptr)
        res = NotEqual;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprEqualNotEqual" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAnd(cmmParser::ExprAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAnd : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = And;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAnd" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprCaret(cmmParser::ExprCaretContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprCaret : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = Caret;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprCaret" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprOr(cmmParser::ExprOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprOr : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = Or;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprOr" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAndAnd(cmmParser::ExprAndAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAndAnd : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = AndAnd;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAndAnd" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprOrOr(cmmParser::ExprOrOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprOrOr : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = OrOr;

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprOrOr" << endl;
    #endif
    return res;
}

    antlrcpp::Any cmmInterpreter::visitExprList(cmmParser::ExprListContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprList : scope( "<< getScopeList() <<" )" << endl;
    #endif

    vector<Expression*> res;

    for(auto exprCtx: ctx->expr()){
        Expression* expr = visit(exprCtx);
        res.push_back(expr);
    }

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprList" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitType(cmmParser::TypeContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitType : scope( "<< getScopeList() <<" )" << endl;
    #endif
        antlr4::tree::TerminalNode* a = dynamic_cast<antlr4::tree::TerminalNode *>(ctx->children.at(0));

        Type res;

        switch (a->getSymbol()->getType()){
            case cmmParser::Int32_t :
                res = INT32_T;
                break;
            case cmmParser::Int64_t :
                res =  INT64_T;
                break;
            case cmmParser::Char :
                res =  CHAR;
                break;
            default:
                throw cmmRuntimeException("[cmmInterpreter:visitType()] Unknow type");
        }

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitType" << endl;
    #endif
    return res;
}


string cmmInterpreter::getScopeList() {
    cmmScope* scope = currentScope;
    string res;
    while(scope != nullptr){
        if(res != "") res += string(" >> ");
        res +=  scope->getScopeName();
        scope = scope->getParent();
    }
    return res;
}

void cmmInterpreter::setScope(cmmScope *scope) {
    this->currentScope = scope;
}

void cmmInterpreter::unScope() {
    currentScope = currentScope->getParent();
}

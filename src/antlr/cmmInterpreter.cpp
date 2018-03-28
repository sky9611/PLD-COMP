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
#include "../structure/Statements/Expressions/ExprAssignment.h"
#include "../structure/Statements/Expressions/ExprFuncCall.h"
#include "../structure/Statements/Expressions/ExprValue.h"
#include "../structure/Statements/Expressions/ExprVariable.h"

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
        var->setType(t);

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

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitDecVarSimple" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitDecArray(cmmParser::DecArrayContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitDecArray : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitDecArray(ctx);

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

    auto res = cmmBaseVisitor::visitBrace(ctx);

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

    auto res = cmmBaseVisitor::visitFctBlock(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFctBlock" << endl;
    #endif
    return res;
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

    auto res = cmmBaseVisitor::visitStatementBlock(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementBlock" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementIf(cmmParser::StatementIfContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementIf : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementIf(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementIf" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementWhile(cmmParser::StatementWhileContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementWhile : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementWhile(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementWhile" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementReturn(cmmParser::StatementReturnContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementReturn : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementReturn(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementReturn" << endl;
    #endif
    return res;
}

antlrcpp::Any
cmmInterpreter::visitStatementAppelFoncSansAttribut(cmmParser::StatementAppelFoncSansAttributContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementAppelFoncSansAttribut : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementAppelFoncSansAttribut(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementAppelFoncSansAttribut" << endl;
    #endif
    return res;
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

    auto res = cmmBaseVisitor::visitExprValue(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprValue" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprNot(cmmParser::ExprNotContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprNot : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprNot(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprNot" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprVariable(cmmParser::ExprVariableContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprVariable : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprVariable(ctx);

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

    auto res = cmmBaseVisitor::visitExprMinus(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprMinus" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprIncPost(cmmParser::ExprIncPostContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprIncPost : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprIncPost(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprIncPost" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprChar(cmmParser::ExprCharContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprChar : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprChar(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprChar" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementAssiggnment : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementAssiggnment(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementAssiggnment" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprIncPre(cmmParser::ExprIncPreContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprIncPre : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprIncPre(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprIncPre" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprBinaire(cmmParser::ExprBinaireContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprBinaire : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprBinaire(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprBinaire" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprMultiDivMod : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprMultiDivMod(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprMultiDivMod" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprPlusMinus : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprPlusMinus(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprPlusMinus" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprShift(cmmParser::ExprShiftContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprShift : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprShift(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprShift" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprComparative(cmmParser::ExprComparativeContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprComparative : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprComparative(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprComparative" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprEqualNotEqual : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprEqualNotEqual(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprEqualNotEqual" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAnd(cmmParser::ExprAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAnd : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprAnd(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAnd" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprCaret(cmmParser::ExprCaretContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprCaret : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprCaret(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprCaret" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprOr(cmmParser::ExprOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprOr : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprOr(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprOr" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAndAnd(cmmParser::ExprAndAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAndAnd : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprAndAnd(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAndAnd" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprOrOr(cmmParser::ExprOrOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprOrOr : scope( "<< getScopeList() <<" )" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprOrOr(ctx);

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

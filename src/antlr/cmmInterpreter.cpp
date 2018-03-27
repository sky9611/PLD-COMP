//
// Created by Zifan YAO on 26/03/2018.
//

#include "cmmInterpreter.h"
#define VIEW_VISITOR_COUT

#include "../structure/Function.h"

using namespace std;

antlrcpp::Any cmmInterpreter::visitFile(cmmParser::FileContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitFile : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    this->program = new Program();

    setScope(program);
    cout << "[cmmInterpreter] + visite programe start ..." << endl;
    auto res = visit(ctx->programme());
    cout << "[cmmInterpreter] - visite programe finish ..." << endl;


    return res;
}

antlrcpp::Any cmmInterpreter::visitFunctionDefinition(cmmParser::FunctionDefinitionContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitFunctionDefinition : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    Type type;
    string name;

    if(ctx->fctDefinition()->type() != nullptr){
        type = visit(ctx->fctDefinition()->type());
    } else {
        type = VOID;
    }

    name = ctx->fctDefinition()->VarName()->getText();

    //vector<cmmVar*> params = visit(ctx->fctDefinition()->fctBrace());
    vector<cmmVar*> params ={};

    Function* function = new Function(program, type, name,params, ctx->fctDefinition());
    program->addFunction(function);

    setScope(dynamic_cast<cmmScope*>(function));
    visit(ctx->fctDefinition()->fctBlock());
    unScope();


    auto res = visit(ctx->fctDefinition());

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitVarDeclaration" << endl;
    #endif
    return function;
}

antlrcpp::Any cmmInterpreter::visitVarDeclaration(cmmParser::VarDeclarationContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitVarDeclaration : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitVarDeclaration(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitVarDeclaration" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitEof(cmmParser::EofContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitEof : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitEof(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitEof" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitVarDeclarationList(cmmParser::VarDeclarationListContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitVarDeclarationList : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitVarDeclarationList(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitVarDeclarationList" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitDecVarSimple(cmmParser::DecVarSimpleContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitDecVarSimple : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitDecVarSimple(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitDecVarSimple" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitDecArray(cmmParser::DecArrayContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitDecArray : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitDecArray(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitDecArray" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitDefinitionParameter(cmmParser::DefinitionParameterContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitDefinitionAttributs : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitDefinitionParameter(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitDefinitionAttributs" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitArrayDef(cmmParser::ArrayDefContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitArrayDef : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitArrayDef(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitArrayDef" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitArrayDecl(cmmParser::ArrayDeclContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitArrayDecl : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitArrayDecl(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitArrayDecl" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitBlock(cmmParser::BlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitBlock : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitBlock(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitBlock" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitBrace(cmmParser::BraceContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitBrace : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitBrace(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitBrace" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitFctBlock(cmmParser::FctBlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitFctBlock : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitFctBlock(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFctBlock" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitFctBrace(cmmParser::FctBraceContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitFctBrace : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitFctBrace(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFctBrace" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitFctDefinition(cmmParser::FctDefinitionContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitFctDefinition : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitFctDefinition(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitFctDefinition" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementBlock(cmmParser::StatementBlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementBlock : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementBlock(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementBlock" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementIf(cmmParser::StatementIfContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementIf : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementIf(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementIf" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementWhile(cmmParser::StatementWhileContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementWhile : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementWhile(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementWhile" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementReturn(cmmParser::StatementReturnContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementReturn : scope(";
        printScopeList();
        cout << ")" << endl;
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
        cout << "[cmmInterpreter] + visitStatementAppelFoncSansAttribut : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementAppelFoncSansAttribut(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementAppelFoncSansAttribut" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprParen(cmmParser::ExprParenContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprParen : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprParen(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprParen" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprValue(cmmParser::ExprValueContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprValue : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprValue(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprValue" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprNot(cmmParser::ExprNotContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprNot : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprNot(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprNot" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprVariable(cmmParser::ExprVariableContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprVariable : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprVariable(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprVariable" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAppelFonc(cmmParser::ExprAppelFoncContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAppelFonc : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprAppelFonc(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAppelFonc" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprMinus(cmmParser::ExprMinusContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprMinus : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprMinus(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprMinus" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprIncPost(cmmParser::ExprIncPostContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprIncPost : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprIncPost(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprIncPost" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprChar(cmmParser::ExprCharContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprChar : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprChar(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprChar" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitStatementAssiggnment : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitStatementAssiggnment(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitStatementAssiggnment" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprIncPre(cmmParser::ExprIncPreContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprIncPre : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprIncPre(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprIncPre" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprBinaire(cmmParser::ExprBinaireContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprBinaire : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprBinaire(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprBinaire" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprMultiDivMod : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprMultiDivMod(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprMultiDivMod" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprPlusMinus : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprPlusMinus(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprPlusMinus" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprShift(cmmParser::ExprShiftContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprShift : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprShift(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprShift" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprComparative(cmmParser::ExprComparativeContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprComparative : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprComparative(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprComparative" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprEqualNotEqual : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprEqualNotEqual(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprEqualNotEqual" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAnd(cmmParser::ExprAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAnd : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprAnd(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAnd" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprCaret(cmmParser::ExprCaretContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprCaret : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprCaret(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprCaret" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprOr(cmmParser::ExprOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprOr : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprOr(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprOr" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprAndAnd(cmmParser::ExprAndAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprAndAnd : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprAndAnd(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprAndAnd" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprOrOr(cmmParser::ExprOrOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprOrOr : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprOrOr(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprOrOr" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitExprList(cmmParser::ExprListContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitExprList : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif

    auto res = cmmBaseVisitor::visitExprList(ctx);

    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] - visitExprList" << endl;
    #endif
    return res;
}

antlrcpp::Any cmmInterpreter::visitType(cmmParser::TypeContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] + visitType : scope(";
        printScopeList();
        cout << ")" << endl;
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


void cmmInterpreter::printScopeList() {
    cmmScope* scope = currentScope;
    while(scope != nullptr){
        cout << scope->getScopeName() << " >> " ;
        scope = scope->getParent();
    }
}

void cmmInterpreter::setScope(cmmScope *scope) {
    this->currentScope = scope;
}

void cmmInterpreter::unScope() {
    currentScope = currentScope->getParent();
}

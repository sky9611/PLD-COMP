//
// Created by Zifan YAO on 26/03/2018.
//

#include "cmmInterpreter.h"
#define VIEW_VISITOR_COUT


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
        cout << "[cmmInterpreter] visitFunctionDefinition : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    visit(ctx->fctDefinition());
    return visit(ctx->programme());
}

antlrcpp::Any cmmInterpreter::visitVarDeclaration(cmmParser::VarDeclarationContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitVarDeclaration : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitVarDeclaration(ctx);
}

antlrcpp::Any cmmInterpreter::visitEof(cmmParser::EofContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitEof : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitEof(ctx);
}

antlrcpp::Any cmmInterpreter::visitVarDeclarationList(cmmParser::VarDeclarationListContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitVarDeclarationList : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitVarDeclarationList(ctx);
}

antlrcpp::Any cmmInterpreter::visitDecVarSimple(cmmParser::DecVarSimpleContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitDecVarSimple : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitDecVarSimple(ctx);
}

antlrcpp::Any cmmInterpreter::visitDecArray(cmmParser::DecArrayContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitDecArray : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitDecArray(ctx);
}

antlrcpp::Any cmmInterpreter::visitDefinitionAttributs(cmmParser::DefinitionAttributsContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitDefinitionAttributs : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitDefinitionAttributs(ctx);
}

antlrcpp::Any cmmInterpreter::visitArrayDef(cmmParser::ArrayDefContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitArrayDef : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitArrayDef(ctx);
}

antlrcpp::Any cmmInterpreter::visitArrayDecl(cmmParser::ArrayDeclContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitArrayDecl : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitArrayDecl(ctx);
}

antlrcpp::Any cmmInterpreter::visitBlock(cmmParser::BlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitBlock : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitBrace(cmmParser::BraceContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitBrace : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitBrace(ctx);
}

antlrcpp::Any cmmInterpreter::visitFctBlock(cmmParser::FctBlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitFctBlock : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitFctBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitFctBrace(cmmParser::FctBraceContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitFctBrace : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitFctBrace(ctx);
}

antlrcpp::Any cmmInterpreter::visitFctDefinition(cmmParser::FctDefinitionContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitFctDefinition : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitFctDefinition(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementBlock(cmmParser::StatementBlockContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitStatementBlock : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitStatementBlock(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementIf(cmmParser::StatementIfContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitStatementIf : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitStatementIf(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementWhile(cmmParser::StatementWhileContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitStatementWhile : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitStatementWhile(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementReturn(cmmParser::StatementReturnContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitStatementReturn : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitStatementReturn(ctx);
}

antlrcpp::Any
cmmInterpreter::visitStatementAppelFoncSansAttribut(cmmParser::StatementAppelFoncSansAttributContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitStatementAppelFoncSansAttribut : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitStatementAppelFoncSansAttribut(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprParen(cmmParser::ExprParenContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprParen : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprParen(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprValue(cmmParser::ExprValueContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprValue : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprValue(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprNot(cmmParser::ExprNotContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprNot : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprNot(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprVariable(cmmParser::ExprVariableContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprVariable : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprVariable(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprAppelFonc(cmmParser::ExprAppelFoncContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprAppelFonc : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprAppelFonc(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprMinus(cmmParser::ExprMinusContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprMinus : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprMinus(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprIncPost(cmmParser::ExprIncPostContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprIncPost : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprIncPost(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprChar(cmmParser::ExprCharContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprChar : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprChar(ctx);
}

antlrcpp::Any cmmInterpreter::visitStatementAssiggnment(cmmParser::StatementAssiggnmentContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitStatementAssiggnment : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitStatementAssiggnment(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprIncPre(cmmParser::ExprIncPreContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprIncPre : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprIncPre(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprBinaire(cmmParser::ExprBinaireContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprBinaire : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprBinaire(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprMultiDivMod(cmmParser::ExprMultiDivModContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprMultiDivMod : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprMultiDivMod(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprPlusMinus(cmmParser::ExprPlusMinusContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprPlusMinus : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprPlusMinus(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprShift(cmmParser::ExprShiftContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprShift : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprShift(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprComparative(cmmParser::ExprComparativeContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprComparative : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprComparative(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprEqualNotEqual(cmmParser::ExprEqualNotEqualContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprEqualNotEqual : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprEqualNotEqual(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprAnd(cmmParser::ExprAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprAnd : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprAnd(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprCaret(cmmParser::ExprCaretContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprCaret : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprCaret(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprOr(cmmParser::ExprOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprOr : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprOr(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprAndAnd(cmmParser::ExprAndAndContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprAndAnd : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprAndAnd(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprOrOr(cmmParser::ExprOrOrContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprOrOr : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprOrOr(ctx);
}

antlrcpp::Any cmmInterpreter::visitExprList(cmmParser::ExprListContext *ctx) {
    #ifdef  VIEW_VISITOR_COUT
        cout << "[cmmInterpreter] visitExprList : scope(";
        printScopeList();
        cout << ")" << endl;
    #endif
    return cmmBaseVisitor::visitExprList(ctx);
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

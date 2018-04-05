
// Generated from cmm.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmParser.h"


/**
 * This class defines an abstract visitor for a parse tree
 * produced by cmmParser.
 */
class cmmVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

    /**
     * Visit parse trees produced by cmmParser.
     */
    virtual antlrcpp::Any visitFile( cmmParser::FileContext *context ) = 0;

    virtual antlrcpp::Any visitProgramme( cmmParser::ProgrammeContext *context ) = 0;

    virtual antlrcpp::Any visitVarDeclarationList( cmmParser::VarDeclarationListContext *context ) = 0;

    virtual antlrcpp::Any visitDecVarSimple( cmmParser::DecVarSimpleContext *context ) = 0;

    virtual antlrcpp::Any visitArrayDef( cmmParser::ArrayDefContext *context ) = 0;

    virtual antlrcpp::Any visitArrayDecl( cmmParser::ArrayDeclContext *context ) = 0;

    virtual antlrcpp::Any visitDefinitionParameter( cmmParser::DefinitionParameterContext *context ) = 0;

    virtual antlrcpp::Any visitBlock( cmmParser::BlockContext *context ) = 0;

    virtual antlrcpp::Any visitBrace( cmmParser::BraceContext *context ) = 0;

    virtual antlrcpp::Any visitFctBlock( cmmParser::FctBlockContext *context ) = 0;

    virtual antlrcpp::Any visitFctBrace( cmmParser::FctBraceContext *context ) = 0;

    virtual antlrcpp::Any visitFctDefinition( cmmParser::FctDefinitionContext *context ) = 0;

    virtual antlrcpp::Any visitStatementBlock( cmmParser::StatementBlockContext *context ) = 0;

    virtual antlrcpp::Any visitStatementIf( cmmParser::StatementIfContext *context ) = 0;

    virtual antlrcpp::Any visitStatementWhile( cmmParser::StatementWhileContext *context ) = 0;

    virtual antlrcpp::Any visitStatementReturn( cmmParser::StatementReturnContext *context ) = 0;

    virtual antlrcpp::Any visitStatementExpr( cmmParser::StatementExprContext *context ) = 0;

    virtual antlrcpp::Any visitVarCall( cmmParser::VarCallContext *context ) = 0;

    virtual antlrcpp::Any visitExprParen( cmmParser::ExprParenContext *context ) = 0;

    virtual antlrcpp::Any visitExprValue( cmmParser::ExprValueContext *context ) = 0;

    virtual antlrcpp::Any visitExprNot( cmmParser::ExprNotContext *context ) = 0;

    virtual antlrcpp::Any visitExprVariable( cmmParser::ExprVariableContext *context ) = 0;

    virtual antlrcpp::Any visitExprAppelFonc( cmmParser::ExprAppelFoncContext *context ) = 0;

    virtual antlrcpp::Any visitExprMinus( cmmParser::ExprMinusContext *context ) = 0;

    virtual antlrcpp::Any visitExprLongValue( cmmParser::ExprLongValueContext *context ) = 0;

    virtual antlrcpp::Any visitExprIncPost( cmmParser::ExprIncPostContext *context ) = 0;

    virtual antlrcpp::Any visitExprChar( cmmParser::ExprCharContext *context ) = 0;

    virtual antlrcpp::Any visitExprIncPre( cmmParser::ExprIncPreContext *context ) = 0;

    virtual antlrcpp::Any visitStatementAssiggnment( cmmParser::StatementAssiggnmentContext *context ) = 0;

    virtual antlrcpp::Any visitExprBinaire( cmmParser::ExprBinaireContext *context ) = 0;

    virtual antlrcpp::Any visitExprMultiDivMod( cmmParser::ExprMultiDivModContext *context ) = 0;

    virtual antlrcpp::Any visitExprPlusMinus( cmmParser::ExprPlusMinusContext *context ) = 0;

    virtual antlrcpp::Any visitExprShift( cmmParser::ExprShiftContext *context ) = 0;

    virtual antlrcpp::Any visitExprComparative( cmmParser::ExprComparativeContext *context ) = 0;

    virtual antlrcpp::Any visitExprEqualNotEqual( cmmParser::ExprEqualNotEqualContext *context ) = 0;

    virtual antlrcpp::Any visitExprAnd( cmmParser::ExprAndContext *context ) = 0;

    virtual antlrcpp::Any visitExprCaret( cmmParser::ExprCaretContext *context ) = 0;

    virtual antlrcpp::Any visitExprOr( cmmParser::ExprOrContext *context ) = 0;

    virtual antlrcpp::Any visitExprAndAnd( cmmParser::ExprAndAndContext *context ) = 0;

    virtual antlrcpp::Any visitExprOrOr( cmmParser::ExprOrOrContext *context ) = 0;

    virtual antlrcpp::Any visitExprList( cmmParser::ExprListContext *context ) = 0;

    virtual antlrcpp::Any visitType( cmmParser::TypeContext *context ) = 0;


};


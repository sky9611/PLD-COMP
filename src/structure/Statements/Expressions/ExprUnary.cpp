//
// Created by zuodu on 25/03/2018.
//

#include "ExprUnary.h"

ExprUnary::ExprUnary(cmmScope *scope, Expression *expr, UnaryOperator op) : Expression(scope),
                                                                                       expr(expr), op(op)
{}

ExprUnary::~ExprUnary()
{
    delete expr;
}

Expression *ExprUnary::getExpr() const
{
    return expr;
}

void ExprUnary::setExpr(Expression *expr)
{
    ExprUnary::expr = expr;
}

UnaryOperator ExprUnary::getOp() const
{
    return op;
}

void ExprUnary::setOp(UnaryOperator op)
{
    ExprUnary::op = op;
}

Type ExprUnary::getType()const{
    return expr->getType();
}

string ExprUnary::buildIR(CFG* cfg)const{
    string tmpVarexp = expr->buildIR(cfg);
    string tmpVarRES = cfg->create_new_tempvar(getType());
//TODO    cfg->current_bb->add_IRInstr(getIRInstOperation(),getType(),vector<string>({tmpVarRES, tmpVarexp}));
}

IRInstr::Operation ExprUnary::getIRInstOperation()const{


    switch (op){
        //case NOT: return IRInstr::Operation:: ;
        //case MINUS: return IRInstr::Operation:: ;
        default: throw cmmRuntimeException("[ExprBinary::getIRInstOperation]" );
    }
}

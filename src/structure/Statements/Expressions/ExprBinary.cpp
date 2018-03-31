//
// Created by zuodu on 25/03/2018.
//

#include "ExprBinary.h"

ExprBinary::ExprBinary(cmmScope *scope, Expression *expr1, Expression *expr2, BinaryOperator op)
        : Expression(scope), expr1(expr1), expr2(expr2), op(op)
{}

ExprBinary::~ExprBinary(){
    delete expr1;
    delete expr2;
}

Expression *ExprBinary::getExpr1() const
{
    return expr1;
}

void ExprBinary::setExpr1(Expression *expr1)
{
    ExprBinary::expr1 = expr1;
}

Expression *ExprBinary::getExpr2() const
{
    return expr2;
}

void ExprBinary::setExpr2(Expression *expr2)
{
    ExprBinary::expr2 = expr2;
}

BinaryOperator ExprBinary::getOp() const
{
    return op;
}

void ExprBinary::setOp(BinaryOperator op)
{
    ExprBinary::op = op;
}

Type ExprBinary::getType()const{
    return  expr1->getType(); // TODO Verifier les 2 expr pour conaitre le vrais type
}

IRInstr::Operation ExprBinary::getIRInstOperation()const{
    switch (op){
        case Star: return IRInstr::Operation::mul ;
        case Div: return IRInstr::Operation::div ;
        //case Mod: return IRInstr::Operation:: ;
        case Plus: return IRInstr::Operation::add ;
        case Minus: return IRInstr::Operation::sub ;
        //case LeftShift: return IRInstr::Operation:: ;
        //case RightShift: return IRInstr::Operation:: ;
        case Less: return IRInstr::Operation::cmp_le ;
        //case LessEqual: return IRInstr::Operation:: ;
        case Greater: return IRInstr::Operation::cmp_lt ;
        //case GreaterEqual: return IRInstr::Operation:: ;
        case Equal: return IRInstr::Operation::cmp_eq ;
        //case NotEqual: return IRInstr::Operation:: ;
        //case And: return IRInstr::Operation:: ;
        //case Caret: return IRInstr::Operation:: ;
        //case Or: return IRInstr::Operation:: ;
        //case AndAnd: return IRInstr::Operation:: ;
        //case OrOr: return IRInstr::Operation:: ;
        default: throw cmmRuntimeException("[ExprBinary::getIRInstOperation]" );
    }
}

string ExprBinary::buildIR(CFG* cfg)const{
    string tmpVar1 = expr1->buildIR(cfg);
    string tmpVar2 = expr2->buildIR(cfg);
    string tmpVarRES = cfg->create_new_tempvar(getType());
    cfg->current_bb->add_IRInstr(getIRInstOperation(),getType(),vector<string>({tmpVarRES, tmpVar1,tmpVar2}));


}

//
// Created by zuodu on 25/03/2018.
//

#include "ExprAssignment.h"

ExprAssignment::ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr):
        ExprAssignment(scope, var, expr, true) {

}

ExprAssignment::ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr, bool postReturn):
        Expression(scope), var(var), expr(expr), postReturn(postReturn) {

}

ExprAssignment::~ExprAssignment(){
    delete expr;
}

cmmVar *ExprAssignment::getVar() const{
    return var;
}

Expression *ExprAssignment::getExpr() const{
    return expr;
}

Type ExprAssignment::getType()const{
    return var->getType();
}

string ExprAssignment::buildIR(CFG* cfg)const{

}

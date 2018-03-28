//
// Created by zuodu on 25/03/2018.
//

#include "ExprAssignment.h"

ExprAssignment::ExprAssignment(cmmScope *scope, cmmVar *var, Expression *expr):
        Expression(scope), var(var), expr(expr) {

}

ExprAssignment::~ExprAssignment(){
    delete expr;
}

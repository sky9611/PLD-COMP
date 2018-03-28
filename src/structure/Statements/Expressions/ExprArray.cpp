//
// Created by hvogel on 28/03/18.
//

#include "ExprArray.h"


ExprArray::ExprArray(cmmScope *scope, cmmVar *var, Expression *expression)
        : ExprVariable(scope,var), expression(expression) {

}

ExprArray::~ExprArray(){
    delete expression;
}

Expression *ExprArray::getExpression() const {
    return expression;
}
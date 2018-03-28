//
// Created by hvogel on 28/03/18.
//

#include "ExprArray.h"


ExprArray::ExprArray(cmmScope *scope, cmmArray *array, Expression *expression)
        : ExprVariable(scope,array), expression(expression) {

}

ExprArray::~ExprArray(){
    delete expression;
}

Expression *ExprArray::getExpression() const {
    return expression;
}

Type ExprArray::getType() const {
    return type::arrayToBasicType(var->getType());
}

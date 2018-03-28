//
// Created by zuodu on 25/03/2018.
//

#include "ExprFuncCall.h"

ExprFuncCall::ExprFuncCall(cmmScope* scope, Function *function, const vector<Expression*> &params ):Expression(scope), function(function), params(params){

}

ExprFuncCall::~ExprFuncCall(){
    for(Expression* param : params) delete param;
}

Function *ExprFuncCall::getFunction() const {
    return function;
}

vector<Expression*> ExprFuncCall::getParams()const{
    return params;
}

Type ExprFuncCall::getType()const{
    return function->getType();
}
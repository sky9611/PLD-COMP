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

string ExprFuncCall::buildIR(CFG* cfg)const{
    vector<string> paramsVar;
    paramsVar.push_back(cfg->create_new_tempvar(getType()));
    for(Expression* paramExpr: params){
        paramsVar.push_back(paramExpr->buildIR(cfg));
    }
    cfg->current_bb->add_IRInstr(IRInstr::call,getType(),paramsVar);
}

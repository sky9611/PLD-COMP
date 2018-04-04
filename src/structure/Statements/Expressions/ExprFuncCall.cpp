//
// Created by zuodu on 25/03/2018.
//

#include "ExprFuncCall.h"
#include "../../../ir/irInstr/IRInstrCall.h"

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
    for(Expression* paramExpr: params){
        paramsVar.push_back(paramExpr->buildIR(cfg));
    }

    string returnVar  = (getType() == VOID ? "" : cfg->create_new_tempvar(getType()));

    IRInstrCall * inst = new IRInstrCall(cfg->current_bb, getType(), returnVar, function->getName(), paramsVar);
    cfg->current_bb->add_IRInstr(inst);

    return returnVar;

}

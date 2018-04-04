//
// Created by hvogel on 28/03/18.
//

#include <src/ir/irInstr/IRInstrArray.h>
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

string ExprArray::buildIR(CFG* cfg)const{ // only for Read ( write in assignment)
    string arrayAccessValue = expression->buildIR(cfg);
    string tmpVar = cfg->create_new_tempvar(getType());
    IRInstrArray * instr = new IRInstrArray(cfg->current_bb,getType(),tmpVar,string("var_") + var->getName(),arrayAccessValue);
    cfg->current_bb->add_IRInstr(instr);

    return tmpVar;
}

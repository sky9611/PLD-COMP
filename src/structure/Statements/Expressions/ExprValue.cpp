//
// Created by zuodu on 25/03/2018.
//

#include "ExprValue.h"
#include "../../../ir/irInstr/IRInstrValue.h"

ExprValue::~ExprValue() = default;

ExprValue::ExprValue(cmmScope *scope, Type type, Any value) : Expression(scope), type(type), value(value)
{

}

Type ExprValue::getType()const{
    return type;
}

Any ExprValue::getValue()const{
    return value;
}
string ExprValue::getStringValue() const{
    Any cpValue = value;
    switch (getType()){
        case CHAR:
            return to_string((short)cpValue.as<char>());
        case INT32_T:
            return to_string(cpValue.as<int32_t>());
        case INT64_T:
            return to_string(cpValue.as<int64_t>());
    }
}
string ExprValue::buildIR(CFG* cfg)const{
    string tmpVar = cfg->create_new_tempvar(getType());
    IRInstrValue *instruction;
    Any cp = value;

    switch(type){
        case INT32_T:
            instruction = new IRInstrValue(cfg->current_bb, getType(), tmpVar, (int)cp);
            break;
        case INT64_T:
            instruction = new IRInstrValue(cfg->current_bb, getType(), tmpVar, (long)cp);
            break;
        case CHAR:
            instruction = new IRInstrValue(cfg->current_bb, getType(), tmpVar, (char)cp);
            break;
    }
    cfg->current_bb->add_IRInstr(instruction);

    return tmpVar;
}

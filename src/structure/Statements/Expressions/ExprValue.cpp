//
// Created by zuodu on 25/03/2018.
//

#include "ExprValue.h"

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

string ExprValue::buildIR(CFG* cfg)const{

}

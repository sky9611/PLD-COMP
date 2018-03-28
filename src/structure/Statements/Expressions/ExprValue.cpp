//
// Created by zuodu on 25/03/2018.
//

#include "ExprValue.h"

ExprValue::~ExprValue() = default;

ExprValue::ExprValue(cmmScope *scope, Type type, Any value) : Expression(scope), type(type), value(value)
{

}

Type ExprValue::getType(){
    return type;
}

Any ExprValue::getValue(){
    return value;
}
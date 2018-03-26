//
// Created by wth on 2018/3/24.
//

#include "cmmVar.h"

cmmVar::cmmVar ( std::string name, std::string type, bool isStack ) {
    this->name = name;
    this->stackType = isStack;

    if ( type == "int32_t " ) {
        this->type = INT32_T;
        this->setValue ( 0 );
    } else if ( type == "int64_t " ) {
        this->type = INT64_T;
        this->setValue ( 0L );
    } else if ( type == "char " ) {
        this->type = CHAR;
        this->setValue('\0');
    }
}

Type cmmVar::getType() {
    return this->type;
}

std::string cmmVar::getName() {
    return this->name;
}

antlrcpp::Any cmmVar::getValue() {
    return this->value;
}

void cmmVar::setValue ( antlrcpp::Any value, int index ) {
    if ( this->type != cmmOperator::getType ( value ) ) {
        throw cmmRuntimeException ( "Invalid value conversion for '" + this->name + "'." );
    }

    if ( !this->stackType ) {
        throw cmmRuntimeException ( "Invalid reference to a non-stack cmmVariable as stack: '" + this->name + "'." );
    }

    if ( this->type == INT32_T ) {
        this->stack[index] = value.as<int>();
    }
    if ( this->type == INT64_T ) {
        this->stack[index] = value.as<long>();
    }
    if ( this->type == CHAR ) {
        this->stack[index] = value.as<char>();
    }
}

void cmmVar::setValue ( antlrcpp::Any value ) {
    if ( this->type != cmmOperator::getType ( value ) ) {
        throw cmmRuntimeException ( "Invalid value conversion for '" + this->name + "'." );
    }

    if ( this->type == INT32_T ) {
        this->value= value.as<int>();
    }
    if ( this->type == INT64_T ) {
        this->value= value.as<long>();
    }
    if ( this->type == CHAR ) {
        this->value= value.as<char>();
    }
}

bool cmmVar::isStack() {
    return this->stackType;
}

antlrcpp::Any cmmVar::getValue ( int index ) {

    try {
        if ( !this->stackType ) {
            throw cmmRuntimeException("Error: variable "+this->getName()+" is not an array");
        }

        return this->stack.at ( index );
    } catch ( std::exception e ) {
        return this->value;
    }
}

std::string cmmVar::toString() {
    std::string stringOfVal, stringOfType;
    if ( this->type == INT32_T ) {
        stringOfType = "int";
        stringOfVal = std::to_string ( this->value.as<int>() );
    } else if ( this->type == INT64_T ) {
        stringOfType = "long";
        stringOfVal = this->value.as<long>();
    } else if ( this->type == CHAR ) {
        stringOfType = "char";
        stringOfVal = std::to_string(this->value.as<char>());

        return "cmmVar[ name=" + this->name + ", type=" + stringOfType + ", value=" + stringOfVal + "]";
    }
}
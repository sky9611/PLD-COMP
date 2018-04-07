//
// Created by hvogel on 26/03/18.
//

#include "cmmArray.h"

cmmArray::cmmArray( Type type, const string &name ) : cmmArray( type, name, -1 ) {}

cmmArray::cmmArray( Type type, const string &name, int size ) : cmmVar( type, name ), size( size ) {}

cmmArray::~cmmArray() {}

int cmmArray::getSize() {
    return size;
}

bool cmmArray::hasSize() {
    return size == -1;
}

string cmmArray::toString() {
    string stringOfVal, stringOfType;
    if ( this->type == INT32_T ) {
        stringOfType = "int";
        //stringOfVal = std::to_string ( this->value.as<int>() );
    }
    else if ( this->type == INT64_T ) {
        stringOfType = "long";
        //stringOfVal = this->value.as<long>();
    }
    else if ( this->type == CHAR ) {
        stringOfType = "char";
        //stringOfVal = std::to_string(this->value.as<char>());

    }
    return "cmmVar[ name=" + this->name + ", type=" + stringOfType + ", value=" + stringOfVal + "]";
}



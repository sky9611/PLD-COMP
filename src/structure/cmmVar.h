//
// Created by wth on 2018/3/24.
//

#ifndef CMM_CMMVAR_H
#define CMM_CMMVAR_H


#include "../../libraries/antlr4-runtime/antlr4-runtime.h"
#include <string>
#include "Type.h"
#include <bitset>
#include "cmmOperator.h"
#include "../Exception/cmmRuntimeException.h"
/*#include "cmmDef.h"*/

class cmmVar
{
private:
    string name;
    Type type;
    antlrcpp::Any value;
    std::map<int, antlrcpp::Any> stack;
    bool stackType;

public:
    cmmVar(string name, std::string type, bool isStack);

    Type getType();

    void setValue(antlrcpp::Any value);

    void setValue(antlrcpp::Any value, int index);

    std::string getName();

    antlrcpp::Any getValue();

    antlrcpp::Any getValue(int index);

    std::string toString();

    bool isStack();

};


#endif //CMM_CMMVAR_H

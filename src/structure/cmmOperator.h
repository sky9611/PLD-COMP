//
// Created by wth on 2018/3/24.
//

#ifndef CMM_CMMOPERATOR_H
#define CMM_CMMOPERATOR_H

#include <antlr4-runtime.h>
#include "Type.h"
#include "cmmRuntimeException.h"
#include <math.h>

using namespace std;

namespace cmmOperator
{
    bool isIntString(string s);

    antlrcpp::Any operate(antlrcpp::Any val1, antlrcpp::Any val2, string op);

    bool cOperate(antlrcpp::Any val1, antlrcpp::Any val2, string op);

    Type getType(antlrcpp::Any v);

    bool getBool(antlrcpp::Any v);

    void trimStr(string &s);
};


#endif //CMM_CMMOPERATOR_H

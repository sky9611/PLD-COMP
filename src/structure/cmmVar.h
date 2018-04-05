//
// Created by wth on 2018/3/24.
//

#ifndef CMM_CMMVAR_H
#define CMM_CMMVAR_H

class cmmVar;

#include "../../libraries/antlr4-runtime/antlr4-runtime.h"
#include <string>
#include "Type.h"
#include <bitset>
#include "cmmOperator.h"
#include "../Exception/cmmRuntimeException.h"
#include "cmmDef.h"

using namespace antlrcpp;
using namespace std;

class cmmVar : public cmmDef{

private:
    std::map<int, antlrcpp::Any> stack;

public:
    cmmVar(Type type, string name);
    /*
    void setValue(Any value);
    void setValue(Any value, int index);
    Any getValue();
    Any getValue(int index);
     */
    virtual std::string toString();

    virtual void setType(Type type);
};


#endif //CMM_CMMVAR_H

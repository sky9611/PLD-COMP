//
// Created by wth on 2018/3/24.
//

#ifndef CMM_FUNCTION_H
#define CMM_FUNCTION_H

class Function;

#include <antlr4-runtime.h>
#include <bitset>
#include "../antlr/cmmParser.h"
#include "../Exception/cmmRuntimeException.h"
#include "cmmOperator.h"
#include "cmmDef.h"
#include "Program.h"
#include "cmmScope.h"

using namespace std;
using namespace antlrcpp;

class Function : public cmmDef, public cmmScope
{
private:

    Program* program;
    Any returnValue;
    bool hasReturnValue;

    cmmContext localContext;
    vector<cmmVar*> params;
public:
    const cmmContext &getLocalContext() const;

public:

    Function(Program* program, Type type, const string &name,const vector<cmmVar*> &params, cmmParser::FctDefinitionContext *ctx);
    virtual ~Function();

    Any getReturnValue();
    void setReturnValue ( Any returnValue );
    bool getHasReturnValue();
    void setHasReturnValue ( bool hasReturnValue );
    vector<cmmVar*> getParams();

    virtual Program* getParent();
    virtual Function* getFunctionScope();

    std::string toString();
};


#endif //CMM_FUNCTION_H

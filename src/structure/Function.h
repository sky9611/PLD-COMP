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
#include "ParamsDefinition.h"
#include "Program.h"
#include "cmmScope.h"

using namespace std;
using namespace antlrcpp;

class Function : public cmmDef, cmmScope
{
private:

    Program* program;
    Any returnValue;
    ParamsDefinition* params;
    bool hasReturnValue;
    cmmContext localContext;
public:
    const cmmContext &getLocalContext() const;

public:

    Function(Program* program, Type type, string name, cmmParser::FctDefinitionContext *ctx, cmmContext& globalContext);
    virtual ~Function();

    Any getReturnValue();
    void setReturnValue ( Any returnValue );
    bool getHasReturnValue();
    void setHasReturnValue ( bool hasReturnValue );
    ParamsDefinition* getParams();

    virtual Program* getParent();
    virtual Function* getFunctionScope();

    std::string toString();
};


#endif //CMM_FUNCTION_H

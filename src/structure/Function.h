//
// Created by wth on 2018/3/24.
//

#ifndef CMM_FUNCTION_H
#define CMM_FUNCTION_H

class Function;

#include <antlr4-runtime.h>
#include "../Exception/cmmRuntimeException.h"
#include "Statements/StmtBlock.h"
#include "cmmDef.h"
#include "Program.h"
#include "cmmScope.h"

using namespace std;
using namespace antlrcpp;

class Function : public cmmDef, public cmmScope
{
private:

    Program* program;
    bool hasReturnValue;

    cmmContext localContext;
    vector<cmmVar*> params;
    StmtBlock* content;
public:
    const cmmContext &getLocalContext() const;

public:

    Function(Program* program, Type type, const string &name,const vector<cmmVar*> &params);
    virtual ~Function();

    Any getReturnValue();
    void setReturnValue ( Any returnValue );
    bool getHasReturnValue();
    void setHasReturnValue ( bool hasReturnValue );
    vector<cmmVar*> getParams();

    virtual void addVar(cmmVar* var);
    virtual void addStatement(Statement* statment);
    virtual cmmDef* getDefLocal(string varName);

    virtual StmtBlock* getContent();

    virtual Program* getParent();
    virtual Function* getFunctionScope();

    std::string toString();
};


#endif //CMM_FUNCTION_H

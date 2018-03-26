//
// Created by wth on 2018/3/24.
//

#ifndef CMM_FUNCTION_H
#define CMM_FUNCTION_H

#include "../antlr/cmmParser.h"
#include <vector>
#include "cmmOperator.h"
#include "../Exception/cmmRuntimeException.h"
/*#include "cmmDef.h"*/
#include "../../libraries/antlr4-runtime/antlr4-runtime.h"
#include "cmmVar.h"


class Function
{
private:
    string name;
    Type type;
    cmmParser::FctDefinitionContext *context;
    antlrcpp::Any returnValue;
    std::vector<antlrcpp::Any> paramValues;
    std::vector<std::string> paramIDs;
    bool hasReturnValue;
    map<string, cmmVar*> varReferences;

public:
    virtual ~Function();

    void addVariable(cmmVar *var);

    map<string, cmmVar*> getVarReferenceTable();

    bool isVarDeclared(string ref);

    Function(string name, const std::string &type,
             cmmParser::FctDefinitionContext *ctx);
    Function ( std::string name, Type type, cmmParser::FctDefinitionContext* ctx );
    Type getType();
    void setContext ( cmmParser::FctDefinitionContext *ctx );
    std::string getName();
    antlrcpp::Any getReturnValue();
    void setReturnValue ( antlrcpp::Any returnValue );
    cmmParser::FctDefinitionContext *getContext();
    Function* clone();
    std::string toString();
    bool getHasReturnValue();
    void setHasReturnValue ( bool hasReturnValue );
    std::vector<antlrcpp::Any> getParamValues();
    void addParamValue(antlrcpp::Any v);
    void addParamID(std::string s);
    std::vector<std::string> getParamIDs();
};


#endif //CMM_FUNCTION_H

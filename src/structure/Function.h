//
// Created by wth on 2018/3/24.
//

#ifndef CMM_FUNCTION_H
#define CMM_FUNCTION_H

#include "../antlr/cmmParser.h"
#include <bitset>
#include "cmmOperator.h"
#include "../Exception/cmmRuntimeException.h"

class Function
{
private:
    std::string name;
    Type type;
    cmmParser::FctDefinitionContext *context;
    antlrcpp::Any returnValue;
    std::vector<antlrcpp::Any> paramValues;
    std::vector<std::string> paramIDs;
    bool hasReturnValue;

public:
    Function ( std::string name, std::string type, cmmParser::FctDefinitionContext* ctx );
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

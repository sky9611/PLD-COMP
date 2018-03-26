//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_PARAMSDEFINITION_H
#define PLD_COMP_PARAMSDEFINITION_H


#include "cmmVar.h"
#include "../antlr/cmmParser.h"

class cmmDefinition;

class ParamsDefinition {
protected:
    vector<cmmVar*> params;

public:
    ParamsDefinition(cmmParser::FctBraceContext* attrsFc, cmmContext& contextGlob, cmmContext& contextFct);
    virtual ~ParamsDefinition();
};


#endif //PLD_COMP_PARAMSDEFINITION_H

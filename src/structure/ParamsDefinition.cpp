//
// Created by zuodu on 25/03/2018.
//

#include "ParamsDefinition.h"
#include "Type.h"

ParamsDefinition::ParamsDefinition(cmmParser::FctBraceContext* attrsFc, cmmContext &contextGlob, cmmContext &contextFct) {

    for(auto attrs : attrsFc->definitionAttributs()){


        string name = attrs->VarName()->getText();

        if(contextFct.find(name) == contextFct.end()){
            throw cmmRuntimeException("Param alredy defined " + name);
        }

        // TOTO Create Array

        contextFct[name] = new cmmVar(type::getType(attrs->Type()),name);

    }
}

ParamsDefinition::~ParamsDefinition(){}

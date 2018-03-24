//
// Created by wth on 2018/3/24.
//

#include "ReferenceTable.h"

ReferenceTable::ReferenceTable() {
    cycle = false;
}

bool ReferenceTable::isCycle() {
    return cycle;
}

void ReferenceTable::setCycle ( bool isCycle ) {
    this->cycle = isCycle;
}

bool ReferenceTable::isVarDeclared ( std::string ref ) {
    if ( cmmVarReferences.find ( ref ) == cmmVarReferences.end() ) {
        return false;
    }
    return true;
}

bool ReferenceTable::isFunctionDeclared ( std::string ref ) {
    if ( functionReferences.find ( ref ) == functionReferences.end() ) {
        return false;
    }
    return true;
}

cmmVar* ReferenceTable::getVar ( std::string ref ) {
    return cmmVarReferences.at ( ref );
}

Function* ReferenceTable::getFunction ( std::string ref ) {
    return functionReferences.at ( ref );
}

void ReferenceTable::addcmmVar ( std::string ref, cmmVar* cmmVar ) {
    cmmVarReferences.insert ( std::pair<std::string, cmmVar*> ( ref, cmmVar ) );
}

void ReferenceTable::addFunction ( std::string ref, Function* func ) {
    functionReferences[ref] = func;
}

std::map<std::string, cmmVar*> ReferenceTable::getVarReferences() {
    return this->cmmVarReferences;
}

std::map<std::string, Function*> ReferenceTable::getFunctionReferences() {
    return this->functionReferences;
}
//
// Created by hvogel on 27/03/18.
//

#include "cmmScope.h"

cmmDef *cmmScope::getDef(string varName) {
    cmmDef* res = getDefLocal(varName);
    if(res != nullptr) return res;
    if(getParent() == nullptr) return nullptr;
    return getParent()->getDef(varName);
}

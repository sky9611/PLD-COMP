//
// Created by wth on 2018/3/26.
//

#ifndef PLD_COMP_CMMDEF_H
#define PLD_COMP_CMMDEF_H

#include <string>
#include "Type.h"

using namespace std;
class cmmDef
{
public:
    cmmDef();

    virtual ~cmmDef();

protected:
    string name;
    Type type;
};


#endif //PLD_COMP_CMMDEF_H

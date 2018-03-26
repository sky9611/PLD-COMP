//
// Created by wth on 2018/3/24.
//

#ifndef CMM_TYPE_H
#define CMM_TYPE_H

enum Type
{
    VOID, INT32_T, INT64_T, CHAR
};

#include <antlr4-runtime.h>
#include "../Exception/cmmRuntimeException.h"

using namespace antlr4::tree;
using namespace std;

namespace type{
    Type getType(TerminalNode* node);
}


#endif //CMM_TYPE_H

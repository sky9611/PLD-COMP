//
// Created by wth on 2018/3/24.
//

#ifndef CMM_TYPE_H
#define CMM_TYPE_H

enum Type
{
    BADTYPE, VOID, INT32_T, INT64_T, CHAR, INT32_T_ARRAY, INT64_T_ARRAY, CHAR_ARRAY
};

namespace type{
    static Type basicToArrayType(Type t){
        switch (t){
            case INT32_T: return INT32_T_ARRAY;
            case INT64_T: return INT64_T_ARRAY;
            case CHAR: return CHAR_ARRAY;
            default: return BADTYPE;
        }
    }
    static Type arrayToBasicType(Type t){
        switch (t){
            case INT32_T_ARRAY: return INT32_T;
            case INT64_T_ARRAY: return INT64_T;
            case CHAR_ARRAY: return CHAR;
            default: return BADTYPE;
        }
    }
    static bool isBasicType(Type t){
        return basicToArrayType(t) != BADTYPE;
    }
    static bool isArrayType(Type t){
        return arrayToBasicType(t) != BADTYPE;
    }
    static std::string toString(Type t){
        switch (t){
            case VOID : return "VOID";
            case INT32_T : return "INT32_T";
            case INT64_T : return "INT64_T";
            case CHAR : return "CHAR";
            case INT32_T_ARRAY : return "INT32_T_ARRAY";
            case INT64_T_ARRAY : return "INT64_T_ARRAY";
            case CHAR_ARRAY : return "CHAR_ARRAY";
            default: return "Unknown type";
        }
    }
}

#endif //CMM_TYPE_H

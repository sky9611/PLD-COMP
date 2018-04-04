//
// Created by wth on 2018/3/24.
//

#include "cmmOperator.h"

bool cmmOperator::isIntString(string s)
{
    if (s.find_first_not_of("-0123456789") != string::npos || (s.find("-") != string::npos && s[0] != '-')) {
        return false;
    }
    return true;
}

antlrcpp::Any cmmOperator::operate(antlrcpp::Any val1, antlrcpp::Any val2, string op)
{

    if (getType(val1) != getType(val2)) {
        throw cmmRuntimeException("operation error: Only the same types can be used with binary operands");
    }

    antlrcpp::Any temp, retVal;

    //INT OPERANDS
    if (getType(val1) == INT32_T) {
        int v1 = val1.as<int>(), v2 = val2.as<int>(), v3;

        if (op == "+") {
            v3 = v1 + v2;
        } else if (op == "-") {
            v3 = v1 - v2;
        } else if (op == "*") {
            v3 = v1 * v2;
        } else if (op == "/") {
            v3 = v1 / v2;
        } else if (op == "**") {
            v3 = pow(v1, v2);
        } else if (op == "%") {
            v3 = v1 % v2;
        } else if (op == "&") {
            v3 = v1 & v2;
        } else if (op == "|") {
            v3 = v1 | v2;
        } else if (op == "^") {
            v3 = v1 ^ v2;
        } else if (op==">>"){
            v3 = v1>>v2;
        } else if (op=="<<"){
            v3 = v1<<v2;
        } else{
            throw cmmRuntimeException("ERROR: Invalid operator: '" + op + "'.");
        }

        temp = v3;
        retVal = temp.as<int>();
    } else if (getType(val1) == INT64_T) {
        int v1 = val1.as<long>(), v2 = val2.as<long>(), v3;

        if (op == "+") {
            v3 = v1 + v2;
        } else if (op == "-") {
            v3 = v1 - v2;
        } else if (op == "*") {
            v3 = v1 * v2;
        } else if (op == "/") {
            v3 = v1 / v2;
        } else if (op == "**") {
            v3 = pow(v1, v2);
        } else if (op == "%") {
            v3 = v1 % v2;
        } else if (op == "&") {
            v3 = v1 & v2;
        } else if (op == "|") {
            v3 = v1 | v2;
        } else if (op == "^") {
            v3 = v1 ^ v2;
        } else if (op==">>"){
            v3 = v1>>v2;
        } else if (op=="<<"){
            v3 = v1<<v2;
        } else{
            throw cmmRuntimeException("ERROR: Invalid operator: '" + op + "'.");
        }

        temp = v3;
        retVal = temp.as<int>();
    } else{
        throw cmmRuntimeException("ERROR: only operations between int are allowed");
    }

    return retVal;
}

bool cmmOperator::cOperate(antlrcpp::Any val1, antlrcpp::Any val2, string op)
{
    if (getType(val1) == INT32_T||getType(val1) == INT64_T|getType(val1) != getType(val2)) {
        int v1 = val1.as<int>(), v2 = val2.as<int>();

        if (op == "<") {
            return v1 < v2;
        }
        if (op == ">") {
            return v1 > v2;
        }
        if (op == ">=") {
            return v1 >= v2;
        }
        if (op == "<=") {
            return v1 <= v2;
        }
        if (op == "==") {
            return v1 == v2;
        }
        if (op == "!=") {
            return v1 != v2;
        }

        throw cmmRuntimeException("Runtime Exception: unrecognized compare operation: '" + op + "'.");
    }

    if (getType(val1) == CHAR) {
        int v1 = val1.as<char>(), v2 = val2.as<char>();

        if (op == "<") {
            return v1 < v2;
        }
        if (op == ">") {
            return v1 > v2;
        }
        if (op == ">=") {
            return v1 >= v2;
        }
        if (op == "<=") {
            return v1 <= v2;
        }
        if (op == "==") {
            return v1 == v2;
        }
        if (op == "!=") {
            return v1 != v2;
        }

        throw cmmRuntimeException("Runtime Exception: unrecognized compare operation: '" + op + "'.");
    }

    throw cmmRuntimeException("Runtime Exception: unrecognized value type at comparison.");
}

Type cmmOperator::getType(antlrcpp::Any v)
{

    if (v.is<int>()) {
        return INT32_T;
    }
    if (v.is<long>()) {
        return INT64_T;
    }
    if (v.is<char>()) {
        return CHAR;
    }

    throw cmmRuntimeException("ERROR: cannot determine the TYPE of value");
}

bool cmmOperator::getBool(antlrcpp::Any v)
{

    Type t = getType(v);

    if (t == INT32_T||t==INT64_T) {
        int i = v.as<int>();

        if (i == 0) {
            return false;
        } else {
            return true;
        }
    }

    if (t == CHAR) {
        char c = v.as<char>();

        if (c == '\0') {
            return false;
        } else {
            return true;
        }
    }

    throw cmmRuntimeException("Unexpected error while converting value to bool.");
}

void cmmOperator::trimStr(string &s)
{
    if (((s[0] = '\'' && s[s.length() - 1] == '\'') || (s[0] = '\"' && s[s.length() - 1] == '\"')) && (s.length() > 1)) {
        s = s.substr(1, s.length() - 2);
    }
}
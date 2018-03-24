//
// Created by wth on 2018/3/24.
//

#ifndef CMM_CMMRUNTIMEEXCEPTION_H
#define CMM_CMMRUNTIMEEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class cmmRuntimeException : public std::exception
{

private:
    string msg;

public:
    cmmRuntimeException(string msg)
    {
        this->msg = msg;
    }

    string getMsg()
    {
        return this->msg;
    }

};


#endif //CMM_CMMRUNTIMEEXCEPTION_H

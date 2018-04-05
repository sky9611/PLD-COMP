//
// Created by wth on 2018/3/24.
//

#ifndef CMM_CMMRUNTIMEEXCEPTION_H
#define CMM_CMMRUNTIMEEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class cmmRuntimeException : public std::runtime_error {

private:
    string msg;

public:
    cmmRuntimeException( string msg ) : runtime_error( msg ) {
        this->msg = msg;
    }

    string getMsg() {
        return this->msg;
    }

};


#endif //CMM_CMMRUNTIMEEXCEPTION_H

//
// Created by hvogel on 26/03/18.
//

#ifndef PLD_COMP_CMMARRAY_H
#define PLD_COMP_CMMARRAY_H

#include "cmmVar.h"

using namespace std;

class cmmArray: public cmmVar {
protected:

    int size;

public:

    cmmArray(Type type, const string &name, int size);

    virtual ~cmmArray();

    int getSize();

    virtual string toString();
};


#endif //PLD_COMP_CMMARRAY_H

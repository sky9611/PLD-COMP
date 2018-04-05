//
// Created by hvogel on 26/03/18.
//

#ifndef PLD_COMP_CMMARRAY_H
#define PLD_COMP_CMMARRAY_H

#include "cmmVar.h"

using namespace std;

class cmmArray : public cmmVar {
protected:

    int size;// -1 if size is not defined

public:

    cmmArray( Type type, const string &name, int size );

    cmmArray( Type type, const string &name );

    virtual ~cmmArray();

    int getSize();

    bool hasSize();

    virtual string toString();
};


#endif //PLD_COMP_CMMARRAY_H

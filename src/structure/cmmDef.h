//
// Created by wth on 2018/3/26.
//

#ifndef PLD_COMP_CMMDEF_H
#define PLD_COMP_CMMDEF_H

class cmmDef;

#include <string>
#include <map>
#include "Type.h"

using namespace std;

class cmmDef
{
protected:
    string name;
    Type type;

public:
    cmmDef(Type type, string name);
    cmmDef();
    virtual ~cmmDef();

    virtual string getName(){return name;}
    virtual Type getType(){return type;}

};




class cmmContext: public map<string,cmmDef*> {
public:
    cmmContext(){};
    virtual ~cmmContext(){
        for(auto def : *this){
            delete def.second;
        }
    }
};



#endif //PLD_COMP_CMMDEF_H

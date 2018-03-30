//
// Created by zuodu on 25/03/2018.
//

#include "StmtWhile.h"

StmtWhile::~StmtWhile()
{
    delete test;
    delete block;
}

string StmtWhile::buildIR(CFG* cfg)const{

}

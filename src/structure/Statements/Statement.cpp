//
// Created by zuodu on 25/03/2018.
//

#include "Statement.h"

Statement::Statement()
{}

Statement::~Statement()
{

}

void Statement::setParent(cmmScope * _parent)
{
    this->parent = _parent;
}

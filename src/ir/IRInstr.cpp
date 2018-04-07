//
// Created by hvogel on 30/03/18.
//

#include "IRInstr.h"
#include "BasicBlock.h"

IRInstr::IRInstr( BasicBlock *bb, Type t ) : bb( bb ), t( t ) {

}
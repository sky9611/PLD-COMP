//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRVARIABLE_H
#define PLD_COMP_EXPRVARIABLE_H

class ExprVariable;

#include "Expression.h"
#include <map>

class ExprVariable : public Expression {
protected:
    cmmVar *var;
public:

    ExprVariable( cmmScope *scope, cmmVar *var );

    virtual ~ExprVariable();

    virtual Type getType() const override;

    cmmVar *getVar() const;

    void setVar( cmmVar *var );

    virtual string buildIR( CFG *cfg ) const override;

    vector<cmmVar *> CheckVariablesAffectes( vector<cmmVar *> varAffectPrec ) override;

    void CheckVariablesDeclares( map<cmmVar *, bool> &varDeclares ) override;
};


#endif //PLD_COMP_EXPRVARIABLE_H

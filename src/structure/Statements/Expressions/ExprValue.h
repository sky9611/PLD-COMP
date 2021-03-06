//
// Created by zuodu on 25/03/2018.
//

#ifndef PLD_COMP_EXPRVALUE_H
#define PLD_COMP_EXPRVALUE_H

class ExprValue;

#include "Expression.h"

using namespace antlrcpp;

class ExprValue : public Expression {
protected:
    Any value;
    Type type;
public:

    ExprValue( cmmScope *scope, Type type, Any value );

    virtual ~ExprValue();

    virtual Type getType() const override;

    virtual Any getValue() const;

    virtual string buildIR( CFG *cfg ) const override;

    string getStringValue() const;

    vector<cmmVar *> CheckVariablesAffectes( vector<cmmVar *> varAffectPrec ) override;

    void CheckVariablesDeclares( map<cmmVar *, bool> &varDeclares ) override {};

};


#endif //PLD_COMP_EXPRVALUE_H

//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_BEVERAGEDECORATOR_H
#define LEE_BEVERAGEDECORATOR_H

#include "Beverage.h"
class BeverageDecorator:public Beverage{
private:
    Beverage* beverage_;
public:
    BeverageDecorator(Beverage* beverage):beverage_(beverage){}

    virtual ~BeverageDecorator(){
        delete beverage_;
    }

    virtual void BeverageAction(){
        beverage_->BeverageAction();
    }

    virtual float cost(){
        beverage_->cost();
    }
};

#endif //LEE_BEVERAGEDECORATOR_H

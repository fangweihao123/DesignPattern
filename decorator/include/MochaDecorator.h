//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_MOCHADECORATOR_H
#define LEE_MOCHADECORATOR_H

#include "BeverageDecorator.h"
#include <iostream>
class MochaDecorator:public BeverageDecorator{
public:
    MochaDecorator(Beverage* beverage):BeverageDecorator(beverage){}

    void BeverageAction() override {
        BeverageDecorator::BeverageAction();
        std::cout<<"Adding Mocha"<<std::endl;
    }

    float cost() override {
        return 0.2 + BeverageDecorator::cost();
    }
};

#endif //LEE_MOCHADECORATOR_H

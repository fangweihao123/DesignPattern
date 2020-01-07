//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_SUGARDECORATOR_H
#define LEE_SUGARDECORATOR_H

#include "BeverageDecorator.h"
#include <iostream>

class SugarDecorator:public BeverageDecorator{
public:
    SugarDecorator(Beverage* beverage):BeverageDecorator(beverage){}

    void BeverageAction() override {
        BeverageDecorator::BeverageAction();
        std::cout<<"Adding Sugar"<<std::endl;
    }

    float cost() override {
        return 0.1 + BeverageDecorator::cost();
    }
};


#endif //LEE_SUGARDECORATOR_H

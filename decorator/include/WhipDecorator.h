//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_WHIPDECORATOR_H
#define LEE_WHIPDECORATOR_H

#include "BeverageDecorator.h"
#include <iostream>
class WhipDecorator:public BeverageDecorator{
public:
    WhipDecorator(Beverage* beverage):BeverageDecorator(beverage){}

    void BeverageAction() override {
        BeverageDecorator::BeverageAction();
        std::cout<<"Adding Whip"<<std::endl;
    }

    float cost() override {
        return 1.0 + BeverageDecorator::cost();
    }
};


#endif //LEE_WHIPDECORATOR_H

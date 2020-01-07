//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_ICEDECORATOR_H
#define LEE_ICEDECORATOR_H


#include "BeverageDecorator.h"
#include <iostream>

class IceDecorator:public BeverageDecorator{
public:
    IceDecorator(Beverage* beverage):BeverageDecorator(beverage){}

    void BeverageAction() override {
        BeverageDecorator::BeverageAction();
        std::cout<<"Adding Ice"<<std::endl;
    }

    float cost() override {
        return 0 + BeverageDecorator::cost();
    }
};


#endif //LEE_ICEDECORATOR_H

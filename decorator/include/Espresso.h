//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_ESPRESSO_H
#define LEE_ESPRESSO_H

#include "Beverage.h"
#include <iostream>

class Espresso:public Beverage{
public:
    void BeverageAction() override {
        std::cout<<"add Espresso"<<std::endl;
    }

    float cost() override {
        return 2.0;
    }
};

#endif //LEE_ESPRESSO_H

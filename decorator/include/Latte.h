//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_LATTE_H
#define LEE_LATTE_H

#include "Beverage.h"
#include <iostream>

class Latte:public Beverage{
public:
    void BeverageAction() override {

        std::cout<<"Adding Latte"<<std::endl;
    }

    float cost() override {
        return 3.0;
    }
};

#endif //LEE_LATTE_H

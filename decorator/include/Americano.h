//
// Created by simulation on 2020/1/7.
//

#ifndef LEE_AMERICANO_H
#define LEE_AMERICANO_H

#include "Beverage.h"
#include <iostream>

class Americano:public Beverage{
public:
    ~Americano(){
        std::cout<<"~Americano()"<<std::endl;
    }
    void BeverageAction() override {
        std::cout<<"Adding Americano"<<std::endl;
    }

    float cost() override {
        return 1.0;
    }
};

#endif //LEE_AMERICANO_H

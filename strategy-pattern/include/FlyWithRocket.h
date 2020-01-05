//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_FLYWITHROCKET_H
#define LEE_FLYWITHROCKET_H

#include <iostream>
#include "FlyBehavior.h"

class FlyWithRocket:public FlyBehavior{
public:
    FlyWithRocket(){};
    virtual void fly(){
        std::cout<<"flying with rocket!"<<std::endl;
    }
};

#endif //LEE_FLYWITHROCKET_H

//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_FLYWITHWING_H
#define LEE_FLYWITHWING_H

#include <iostream>
#include "FlyBehavior.h"

class FlyWithWing:public FlyBehavior{
public:
    FlyWithWing(){};
    virtual void fly(){
        std::cout<<"flying!"<<std::endl;
    }
};

#endif //LEE_FLYWITHWING_H

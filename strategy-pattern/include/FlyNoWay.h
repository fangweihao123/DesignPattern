//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_FLYNOWAY_H
#define LEE_FLYNOWAY_H

#include <iostream>

#include "FlyBehavior.h"
class FlyNoWay:public FlyBehavior{
public:
    FlyNoWay(){};
    virtual void fly(){
        std::cout<<"I can not fly!"<<std::endl;
    }
};

#endif //LEE_FLYNOWAY_H

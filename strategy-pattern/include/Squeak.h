//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_SQUEAK_H
#define LEE_SQUEAK_H

#include <iostream>
#include "QuakeBehavior.h"

class Squeak:public QuakeBehavior{
public:
    Squeak(){}
    virtual void quake(){
        std::cout<<"squeak"<<std::endl;
    }
};

#endif //LEE_SQUEAK_H

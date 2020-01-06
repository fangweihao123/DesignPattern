//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_QUAKE_H
#define LEE_QUAKE_H

#include <iostream>
#include "QuakeBehavior.h"

class Quake:public QuakeBehavior{
public:
    Quake(){};
    ~Quake(){
        std::cout<<"~Quake() is called"<<std::endl;
    }
    virtual void quake(){
        std::cout<<"quake"<<std::endl;
    }
};

#endif //LEE_QUAKE_H

//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_DUCK_H
#define LEE_DUCK_H

#include <iostream>
#include "FlyBehavior.h"
#include "QuakeBehavior.h"

class Duck{
private:
    FlyBehavior* fb_;
    QuakeBehavior* qb_;
public:
    Duck(){};
    virtual ~Duck(){};
    void performFly();
    void performQuake();
    void swim();
    void setFlyBehavior(FlyBehavior* fb);
    void setQuakeBehavior(QuakeBehavior* qb);
};

#endif //LEE_DUCK_H

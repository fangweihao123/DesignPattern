//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_QUAKEBEHAVIOR_H
#define LEE_QUAKEBEHAVIOR_H

#include <iostream>

class QuakeBehavior{
public:
    virtual ~QuakeBehavior() = 0;
    virtual void quake() = 0;
};

#endif //LEE_QUAKEBEHAVIOR_H

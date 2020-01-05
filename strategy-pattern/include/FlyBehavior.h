//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_FLYBEHAVIOR_H
#define LEE_FLYBEHAVIOR_H

class FlyBehavior{
public:
    FlyBehavior(){}
    virtual ~FlyBehavior(){}
    virtual void fly() = 0;
};

#endif //LEE_FLYBEHAVIOR_H

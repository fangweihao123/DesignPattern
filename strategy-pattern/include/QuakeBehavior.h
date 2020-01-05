//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_QUAKEBEHAVIOR_H
#define LEE_QUAKEBEHAVIOR_H

class QuakeBehavior{
public:
    QuakeBehavior(){}
    virtual ~QuakeBehavior(){}
    virtual void quake() = 0;
};

#endif //LEE_QUAKEBEHAVIOR_H

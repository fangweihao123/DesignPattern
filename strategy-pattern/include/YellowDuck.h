//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_YELLOWDUCK_H
#define LEE_YELLOWDUCK_H

#include "Duck.h"
#include "Quake.h"
#include "FlyWithWing.h"
class YellowDuck:public Duck{
public:
    YellowDuck(){
        this->setQuakeBehavior(new Quake());
        this->setFlyBehavior(new FlyWithWing());
    }
};

#endif //LEE_YELLOWDUCK_H

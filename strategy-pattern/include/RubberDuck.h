//
// Created by simulation on 2020/1/5.
//

#ifndef LEE_RUBBERDUCK_H
#define LEE_RUBBERDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "Squeak.h"

class RubberDuck:public Duck{
public:
    RubberDuck(){
        this->setFlyBehavior(new FlyNoWay());
        this->setQuakeBehavior(new Squeak());
    }

};

#endif //LEE_RUBBERDUCK_H

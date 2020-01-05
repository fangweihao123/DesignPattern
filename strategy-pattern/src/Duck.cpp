//
// Created by simulation on 2020/1/5.
//
#include "../include/Duck.h"

void Duck::performFly() {
    fb_->fly();
}

void Duck::swim() {
    std::cout<<"I am swimming!"<<std::endl;
}

void Duck::performQuake() {
    qb_->quake();
}

void Duck::setFlyBehavior(FlyBehavior* fb) {
    fb_ = fb;
}

void Duck::setQuakeBehavior(QuakeBehavior* qb) {
    qb_ = qb;
}

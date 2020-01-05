//
// Created by simulation on 2020/1/5.
//

#include <iostream>
#include "include/YellowDuck.h"
#include "include/RubberDuck.h"
#include "include/Duck.h"
#include "include/FlyWithRocket.h"
using namespace std;

int main(){
    //base point can use function of base class
    Duck* rubber_duck = new RubberDuck();
    Duck* yellow_duck = new YellowDuck();
    rubber_duck->performQuake();
    rubber_duck->performFly();
    yellow_duck->performQuake();
    yellow_duck->performFly();
    rubber_duck->setFlyBehavior(new FlyWithRocket());
    rubber_duck->performFly();
    return 0;
}

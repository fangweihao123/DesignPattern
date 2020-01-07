//
// Created by simulation on 2020/1/7.
//

#include "include/Americano.h"
#include "include/Latte.h"
#include "include/Espresso.h"
#include "include/MochaDecorator.h"
#include "include/SugarDecorator.h"
#include "include/IceDecorator.h"
#include "include/WhipDecorator.h"
#include <iostream>


int main(){
    //pointer will not be released
    Espresso eRef;
    Latte lRef;
    Americano aRef;
    MochaDecorator mochaDecorator(&aRef);
    SugarDecorator sugarDecorator(&mochaDecorator);
    sugarDecorator.BeverageAction();
    std::cout<<sugarDecorator.cost()<<std::endl;
    std::cout<<"---------------"<<std::endl;
    IceDecorator iceDecorator(&lRef);
    WhipDecorator whipDecorator(&iceDecorator);
    whipDecorator.BeverageAction();
    std::cout<<whipDecorator.cost()<<std::endl;
    std::cout<<"---------------"<<std::endl;
    return 0;
}
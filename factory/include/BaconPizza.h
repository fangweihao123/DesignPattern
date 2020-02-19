#ifndef BACONPIZZA
#define BACONPIZZA
#include "Pizza.h"

class BaconPizza:public Pizza{
public:
    BaconPizza(){
        name = "BaconPizza";
    }
    void prepare(){
        std::cout<<"prepare the dough and sauce and Bacon"<<std::endl;
    }

    void bake(){
        std::cout<<"add the Bacon bake 20-30 min 200 oc"<<std::endl;
    }

    void cut(){
        std::cout<<"cut into 4 pieces"<<std::endl;
    }

    void box(){
        std::cout<<"box with a circle box"<<std::endl;
    }
};
#endif
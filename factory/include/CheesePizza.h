#ifndef CHEESEPIZZA
#define CHEESEPIZZA
#include "Pizza.h"
class CheesePizza:public Pizza{
public:
    CheesePizza(){
        name = "CheesePizza";
        dough = "CheeseDough";
    }
    void prepare(){
        std::cout<<"prepare the dough and sauce and ultra cheese"<<std::endl;
    }

    void bake(){
        std::cout<<"add the calm bake 35 min 200 oc"<<std::endl;
    }

    void cut(){
        std::cout<<"cut into 6 pieces"<<std::endl;
    }

    void box(){
        std::cout<<"box with a circle box"<<std::endl;
    }
};
#endif
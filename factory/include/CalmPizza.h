#ifndef CALMPIZZA
#define CALMPIZZA
#include "Pizza.h"

class CalmPizza:public Pizza{
public:
    CalmPizza(){
        name = "CalmPizza";
    }
    void prepare(){
        std::cout<<"prepare the dough and sauce and calm"<<std::endl;
    }

    void bake(){
        std::cout<<"add the calm bake 20-30 min 200 oc"<<std::endl;
    }

    void cut(){
        std::cout<<"cut into 4 pieces"<<std::endl;
    }

    void box(){
        std::cout<<"box with a circle box"<<std::endl;
    }
};
#endif
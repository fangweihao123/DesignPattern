#ifndef NYDOUGH
#define NYDOUGH
#include "Dough.h"
#include <iostream>
class NYDough:public Dough{
public:
    NYDough(){
        std::cout<<"I am a new york dough"<<std::endl;
    }
};
#endif
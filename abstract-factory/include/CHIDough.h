#ifndef CHIDOUGH
#define CHIDOUGH
#include "Dough.h"
#include <iostream>
class CHIDough:public Dough{
public:
    CHIDough(){
        std::cout<<"I am a chicago dough"<<std::endl;
    }
};
#endif
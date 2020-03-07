#ifndef CHICHEESE
#define CHICHEESE
#include "Cheese.h"
#include <iostream>
class CHICheese:public Cheese{
public:
    CHICheese(){
        std::cout<<"I am a chicago cheese"<<std::endl;
    }
};
#endif

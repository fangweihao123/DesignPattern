#ifndef NYCHEESE
#define NYCHEESE
#include "Cheese.h"
#include <iostream>
class NYCheese:public Cheese{
public:
    NYCheese(){
        std::cout<<"I am a new york cheese"<<std::endl;
    }
};
#endif

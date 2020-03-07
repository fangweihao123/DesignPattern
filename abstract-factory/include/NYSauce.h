#ifndef NYSAUCE
#define NYSAUCE
#include"Sauce.h"
#include <iostream>
class NYSauce:public Sauce{
public:
    NYSauce(){
        std::cout<<"I am a new york sauce"<<std::endl;
    }
};
#endif
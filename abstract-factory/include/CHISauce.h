#ifndef CHISAUCE
#define CHISAUCE
#include"Sauce.h"
#include <iostream>
class CHISauce:public Sauce{
public:
    CHISauce(){
        std::cout<<"I am a chicago sauce"<<std::endl;
    }
};
#endif
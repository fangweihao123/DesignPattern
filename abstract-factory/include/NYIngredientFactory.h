#ifndef NYINGREDIENTFACTORY
#define NYINGREDIENTFACTORY
#include"AbstractIngredientFactory.h"
#include"NYCheese.h"
#include"NYDough.h"
#include"NYSauce.h"
class NYIngredientFactory:public AbstractIngredientFactory{
public:
    NYIngredientFactory(){
        
    }

    Cheese* createCheese(){
        return new NYCheese();
    }
    Dough* createDough(){
        return new NYDough();
    }
    Sauce* createSauce(){
        return new NYSauce();
    }
    
};
#endif
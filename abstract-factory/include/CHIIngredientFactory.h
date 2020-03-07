#ifndef CHIINGREDIENTFACTORY
#define CHIINGREDIENTFACTORY
#include"AbstractIngredientFactory.h"
#include"CHICheese.h"
#include"CHIDough.h"
#include"CHISauce.h"
class CHIIngredientFactory:public AbstractIngredientFactory{
public:
    CHIIngredientFactory(){
        
    }

    Cheese* createCheese(){
        return new CHICheese();
    }
    Dough* createDough(){
        return new CHIDough();
    }
    Sauce* createSauce(){
        return new CHISauce();
    }
    
};
#endif
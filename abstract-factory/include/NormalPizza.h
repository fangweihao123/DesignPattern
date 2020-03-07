#ifndef NORMALPIZZA
#define NORMALPIZZA
#include"iostream"
#include"Pizza.h"
#include"AbstractIngredientFactory.h"
class NormalPizza:public Pizza{
private:
    AbstractIngredientFactory aIngredientFactory;
public:
    NormalPizza(AbstractIngredientFactory _a){
        aIngredientFactory = _a;
    }

    void prepare(){
        dough = aIngredientFactory.createDough();
        sauce = aIngredientFactory.createSauce();
    }
    void bake(){
        std::cout<<"bake for 20 min"<<std::endl;
    }

    void cut(){
        std::cout<<"do not cut"<<std::endl;
    }

    void box(){
        std::cout<<"do not box"<<std::endl;
    }
};
#endif
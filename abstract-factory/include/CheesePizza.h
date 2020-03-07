#ifndef CHEESEPIZZA
#define CHEESEPIZZA
#include"iostream"
#include"Pizza.h"
#include"AbstractIngredientFactory.h"
class CheesePizza:public Pizza{
private:
    AbstractIngredientFactory aIngredientFactory;
public:
    CheesePizza(AbstractIngredientFactory _a){
        aIngredientFactory = _a;
    }

    void prepare(){
        cheese = aIngredientFactory.createCheese();
        dough = aIngredientFactory.createDough();
        sauce = aIngredientFactory.createSauce();
    }
    void bake(){
        std::cout<<"bake for 30 min"<<std::endl;
    }

    void cut(){
        std::cout<<"cut for 4 pieces"<<std::endl;
    }

    void box(){
        std::cout<<"box with red material"<<std::endl;
    }
};
#endif
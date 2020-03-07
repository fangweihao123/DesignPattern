#ifndef NYPIZZASTORE
#define NYPIZZASTORE
#include"PizzaStore.h"
#include"AbstractIngredientFactory.h"
#include"NYIngredientFactory.h"
#include"CheesePizza.h"
#include"NormalPizza.h"

class NYPizzaStore:public PizzaStore{
private:
    AbstractIngredientFactory _a;
public:
    NYPizzaStore(){}

    Pizza* createPizza(std::string name){
        if(name == "cheese"){
            return new CheesePizza(_a);
        }else{
            return new NormalPizza(_a);
        }
    }
};
#endif
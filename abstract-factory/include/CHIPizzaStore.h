#ifndef CHIPIZZASTORE
#define CHIPIZZASTORE
#include"PizzaStore.h"
#include"AbstractIngredientFactory.h"
#include"CHIIngredientFactory.h"
#include"CheesePizza.h"
#include"NormalPizza.h"

class CHIPizzaStore:public PizzaStore{
private:
    AbstractIngredientFactory _a;
public:
    CHIPizzaStore(){
        _a = CHIIngredientFactory();
    }

    Pizza* createPizza(std::string name){
        if(name == "cheese"){
            return new CheesePizza(_a);
        }else{
            return new NormalPizza(_a);
        }
    }
};
#endif
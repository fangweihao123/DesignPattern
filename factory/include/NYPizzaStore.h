#ifndef NYPIZZASTORE
#define NYPIZZASTORE
#include "Pizza.h"
#include "CalmPizza.h"
#include "CheesePizza.h"
#include "PizzaStore.h"

class NYPizzaStore:public PizzaStore{
public:
    Pizza* createPizza(PizzaType type){
        if(type == CALM){
            return new CalmPizza();
        }else if(type == CHEESE){
            return new CheesePizza();
        }else{
            return NULL;
        }
    }
};

#endif
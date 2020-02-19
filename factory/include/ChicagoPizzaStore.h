#ifndef CHICAGOPIZZASTORE
#define CHICAGOPIZZASTORE
#include "Pizza.h"
#include "BaconPizza.h"
#include "PizzaStore.h"

class ChicagoPizza:public PizzaStore{
public:
    Pizza* createPizza(PizzaType type){
        if(type == BACON){
            return new BaconPizza();
        }else{
            return NULL;
        }
    }
};
#endif
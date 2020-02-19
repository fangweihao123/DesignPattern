#ifndef PIZZASTORE
#define PIZZASTORE
#include"Pizza.h"
#include<string>

class PizzaStore{
public:
    virtual Pizza* createPizza(PizzaType type);
    Pizza* orderPizza(PizzaType type){
        Pizza* p = createPizza(type);
        if(p==NULL)
            return NULL;
        p->prepare();
        p->bake();
        p->cut();
        p->box();
        return p;
    }
};

#endif

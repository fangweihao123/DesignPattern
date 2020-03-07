#ifndef PIZZASTORE
#define PIZZASTORE
#include"Pizza.h"
#include<string>

class PizzaStore{
private:

public:
    PizzaStore(){

    }

    virtual Pizza* createPizza(std::string name);

    Pizza* orderPizza(std::string name){
        Pizza* p = createPizza(name);
        p->prepare();
        p->bake();
        p->cut();
        p->box();
        return p;
    }
};
#endif
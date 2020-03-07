#ifndef PIZZA
#define PIZZA

#include"Cheese.h"
#include"Dough.h"
#include"Sauce.h"

class Pizza{
protected:
    Cheese* cheese;
    Dough* dough;
    Sauce* sauce;
public:
    Pizza(){}
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
};
#endif
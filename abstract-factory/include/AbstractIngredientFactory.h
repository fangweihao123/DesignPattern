#ifndef ABSTRACTINGREDIENTFACTORY
#define ABSTRACTINGREDIENTFACTORY
#include "Cheese.h"
#include "Dough.h"
#include "Sauce.h"
class AbstractIngredientFactory{
public:
    virtual Cheese* createCheese();
    virtual Dough* createDough();
    virtual Sauce* createSauce();
};
#endif
#include"include/CheesePizza.h"
#include"include/NYIngredientFactory.h"
#include"include/NYPizzaStore.h"
#include"include/CHIPizzaStore.h"
#include"include/Pizza.h"

int main(){
    NYPizzaStore ns;
    Pizza* p1 = ns.orderPizza("cheese");
    CHIPizzaStore cs;
    Pizza* p2 = cs.orderPizza("cheese");
    return 0;
}
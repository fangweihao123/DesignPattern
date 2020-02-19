#include<iostream>
#include"include/Pizza.h"
#include"include/NYPizzaStore.h"
#include"include/ChicagoPizzaStore.h"
using namespace std;

int main(){
    NYPizzaStore ny;
    Pizza* p1 = ny.orderPizza(CALM);    
    ChicagoPizza cc;
    Pizza* p2 = cc.orderPizza(BACON);
    return 0;
}
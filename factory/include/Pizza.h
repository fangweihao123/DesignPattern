#ifndef PIZZA
#define PIZZA
#include<iostream>
#include<string>

enum PizzaType{
    CALM,CHEESE,BACON
};

class Pizza{
// the overall procedure
protected:
    std::string name;
    std::string dough;
    std::string sauce;
public:
    Pizza(){
        name = "pizza";
        dough = "normal dough";
        sauce = "tomato sauce";
    }
    ~Pizza(){

    }
    virtual void prepare(){
        std::cout<<"prepare the dough and sauce"<<std::endl;
    }

    virtual void bake(){
        std::cout<<"bake 20-30 min 200 oc"<<std::endl;
    }

    virtual void cut(){
        std::cout<<"cut into 4 pieces"<<std::endl;
    }

    virtual void box(){
        std::cout<<"box with a square box"<<std::endl;
    }
};

#endif
//
// Created by simulation on 2020/1/6.
//

#ifndef LEE_BEVERAGE_H
#define LEE_BEVERAGE_H

//base class
class Beverage{
public:
    virtual ~Beverage(){}
    virtual void BeverageAction(){}
    virtual float cost(){}
};

#endif //LEE_BEVERAGE_H

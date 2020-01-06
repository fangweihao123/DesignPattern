//
// Created by simulation on 2020/1/6.
//

#ifndef LEE_REGULARDISPLAYMENT_H
#define LEE_REGULARDISPLAYMENT_H

#include "Observer.h"
#include "Displayment.h"
#include "Subject.h"
#include "WeatherData.h"
#include <iostream>

class RegularDisplayment:public Observer,public Displayment{
private:
    float t_ = 0.0;
    float h_ = 0.0;
    float p_ = 0.0;
    WeatherData* weatherData_;
public:
    RegularDisplayment(WeatherData* weatherData){
        weatherData_ = weatherData;
        weatherData_->registerObserver(this);
    }

    ~RegularDisplayment(){
        delete(weatherData_);
    }

    void update(float t,float h,float p) override{
        t_ = t;
        h_ = h;
        p_ = p;
        display();
    }

    void display() override {
        std::cout<<"temperature: "<<t_<<" humidity: "<<
                    h_<<" pressure: "<<p_<<std::endl;
    }
};

#endif //LEE_REGULARDISPLAYMENT_H

//
// Created by simulation on 2020/1/6.
//

#ifndef LEE_EXTREMEDISPLAYMENT_H
#define LEE_EXTREMEDISPLAYMENT_H

#include "Observer.h"
#include "Displayment.h"
#include "Subject.h"
#include "WeatherData.h"
#include <iostream>

class ExtremeDisplayment:public Observer,public Displayment{
private:
    float minimal_t = 10000.0;
    float minimal_h = 10000.0;
    float minimal_p = 10000.0;
    WeatherData* weatherData_;
public:
    ExtremeDisplayment(WeatherData* weatherData){
        weatherData_ = weatherData;
        weatherData_->registerObserver(this);
    }

    ~ExtremeDisplayment(){
        delete(weatherData_);
    }

    void update(float t,float h,float p) override{
        if(t<minimal_t)
            minimal_t = t;
        if(h<minimal_h)
            minimal_h = h;
        if(p<minimal_p)
            minimal_p = p;
        display();
    }

    void display() override {
        std::cout<<"minimal temperature: "<<minimal_t<<" minimal_humidity: "<<
                 minimal_h<<" minimal pressure: "<<minimal_p<<std::endl;
    }
};

#endif //LEE_EXTREMEDISPLAYMENT_H

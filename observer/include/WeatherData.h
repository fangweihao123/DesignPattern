//
// Created by simulation on 2020/1/6.
//

#ifndef LEE_WEATHERDATA_H
#define LEE_WEATHERDATA_H

#include "Subject.h"
#include <vector>

class WeatherData:public Subject{
private:
    float temperature_ = 0.0;
    float humidity_ = 0.0;
    float pressure_ = 0.0;
    bool changed = false;
    std::vector<Observer*> observerList;

public:
    //modify the logics of this function can control update frequency
    void setChanged(){
        // set the freqency to 0.1s not too fast
        changed = true;
    }



    //override need virtual keywords
    void registerObserver(Observer *o) override {
        observerList.push_back(o);
    }

    void removeObserver(Observer *o) override {
        for(int i=0;i<observerList.size();i++){
            if(observerList[i] == o){
                observerList.erase(observerList.begin()+i);
            }
        }
    }

    void notifyAll() override {
        if(changed){
            for(int i=0;i<observerList.size();i++){
                observerList[i]->update(temperature_,humidity_,pressure_);
            }
            changed = false;
        }
    }

    void setMeasurementChanged(float temperature,float humidity,float pressure){
        temperature_ = temperature;
        humidity_ = humidity;;
        pressure_ = pressure;
        setChanged();
        notifyAll();
    }
};

#endif //LEE_WEATHERDATA_H

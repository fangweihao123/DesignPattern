//
// Created by simulation on 2020/1/6.
//

#include "include/ExtremeDisplayment.h"
#include "include/RegularDisplayment.h"
#include "include/WeatherData.h"

int main(){
    //
    WeatherData* s = new WeatherData();
    RegularDisplayment* o1 = new RegularDisplayment(s);
    ExtremeDisplayment* o2 = new ExtremeDisplayment(s);
    s->setMeasurementChanged(10,10,10);
    s->removeObserver(o2);
    s->setMeasurementChanged(5,15,20);
    return 0;
}
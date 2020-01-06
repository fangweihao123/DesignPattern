//
// Created by simulation on 2020/1/6.
//

#ifndef LEE_SUBJECT_H
#define LEE_SUBJECT_H

#include "Observer.h"

class Subject{
public:
    virtual ~Subject()=0;
    //must define virtual funciton
    virtual void registerObserver(Observer* o)=0;
    virtual void removeObserver(Observer* o)=0;
    virtual void notifyAll()=0;
};

#endif //LEE_SUBJECT_H

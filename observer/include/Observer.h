//
// Created by simulation on 2020/1/6.
//

#ifndef LEE_OBSERVER_H
#define LEE_OBSERVER_H

class Observer{
public:
    // virtual deconstructor
    virtual ~Observer()=0;
    virtual void update(float t,float h,float p) =0;
};

#endif //LEE_OBSERVER_H

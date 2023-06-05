#ifndef Time_h
#define Time_h

#include <iostream>
using namespace std;

class Time{

    private:
    int hour, minute;

    public:
    Time();
    Time(int hour, int minute);

    int getHour(){return hour;}
    int getMinute(){return minute;}
    //int elapsedTime(Time);

    void setHour(int h){hour = h;}
    void setMinute(int m){minute = m;}
    void print();
    
};

#endif
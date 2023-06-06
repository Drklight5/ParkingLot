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

        //Getters and setters
        int getHour(){return hour;}
        void setHour(int h){hour = h;}
        
        int getMinute(){return minute;}
        void setMinute(int m){minute = m;}

        //Methods
        int elapsedTime(Time);
        void print();
    
};

#endif
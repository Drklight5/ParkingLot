#ifndef Time_h
#define Time_h

#include <iostream>
using namespace std;

class Time{

    private:
        int hour, minute;

    public:
        Time();
        Time(int h, int m);

        //Getters and setters
        int getHour(){return hour;}
        void setHour(int h){hour = h;}
        
        int getMinute(){return minute;}
        void setMinute(int m){minute = m;}

        //Methods
        int elapsedTime(Time);
        bool operator > (Time);
        void print();
    
};

Time::Time(){
    /*TODO*/
}

Time::Time(int h, int m){
    /*TODO*/
}

int Time::elapsedTime(Time time){
    //TODO
    return 0;
}

bool Time::operator>(Time time){
    //TODO
    return false;
}

void Time::print(){
    //TODO
}


#endif
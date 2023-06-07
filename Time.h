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
        void setHour(int h);
        
        int getMinute(){return minute;}
        void setMinute(int m);

        //Methods
        int elapsedTime(Time);
        bool operator > (Time);
        void print();
    
};

Time::Time(){
    setHour(0); 
    setMinute(0);
}

Time::Time(int h, int m){
    setHour(h);
    setMinute(m);
}

void Time::setHour(int h){

    if (h <= 22 && h >= 8){
        hour = h;
    }
}

void Time::setMinute(int m){
    if (hour == 22 && m == 0){
        minute = m;
    }
    else if (m <= 59 && m >= 0){
        minute = m;
    }
}
int Time::elapsedTime(Time time){
    //
    int m1,m2, result;
    if (*this > time){
        m2 = hour * 60 + minute;
        m1 = time.getHour() * 60 + minute;  
    }
    else{
        m1 = hour * 60 + minute;
        m2 = time.getHour() * 60 + minute;  
    }

    result = (m2 - m1) / 60; 

    if (m2 % m1 != 0){
        result ++;
    }
    
    return result;
}

bool Time::operator >(Time time){
    //TODO
    int hour2 = time.getHour();
    if ( hour > hour2){
        return true;
    }
    else if (hour2 == hour){
        if (minute > time.getMinute()){
            return true;
        }
        else {
            return false;
        }    
    }  
    else{
        return false;
    }
    //TODO it can be shorter 
}

void Time::print(){
    cout  << hour << ":";
    if (minute < 10){
        cout << "0" << minute<< endl;
    }else{
        cout << minute<< endl;
    }
    //TODO it can be shorter
    
}


#endif
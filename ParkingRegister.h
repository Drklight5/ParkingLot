#ifndef ParkingRegister_h
#define ParkingRegister_h

#include <iostream>

using namespace std;

#include "Time.h"


class ParkingRegister{
    private:
        int cardId;
        Time entryTime;

    public:
        ParkingRegister(); 

};
#endif
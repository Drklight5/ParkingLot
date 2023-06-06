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
        ParkingRegister(int, Time);

        //Getters and setters

        int getCardId() {return cardId;}
        void setCardId(int id) {cardId = id;}

        Time getEntryTime(){ return entryTime;}
        void setEntryTime(Time time) {entryTime = time;}

        //Methods

        void print();

};

ParkingRegister::ParkingRegister(){
    //TODO
}

ParkingRegister::ParkingRegister(int id, Time time){
    //TODO
}

void ParkingRegister::print(){
    //TODO
}
#endif
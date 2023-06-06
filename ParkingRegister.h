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
        ParkingRegister(int id, Time time);

        //Getters and setters

        int getCardId() {return cardId;}
        void setCardId(int id) {cardId = id;}

        Time getEntryTime(){ return entryTime;}
        void setEntryTime(Time time) {entryTime = time;}

        //Methods

        void print();

};

ParkingRegister::ParkingRegister(){
    cardId = 123;
    //entryTime = 
}

ParkingRegister::ParkingRegister(int id, Time time){
    cardId = id;
    entryTime = time;
}

void ParkingRegister::print(){
    cout << "La cardID es: " << cardID << "entro a las: " << entryTime << endl; 
}
#endif
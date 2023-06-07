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
    cardId = 1;
    Time time(15,18);
    entryTime = time;
}

ParkingRegister::ParkingRegister(int id, Time time){
    cardId = id;
    entryTime = time;
}

void ParkingRegister::print(){
    cout << "La cardID es: " << cardId << "entro a las: ";
    entryTime.print();
    cout << endl; 
}
#endif
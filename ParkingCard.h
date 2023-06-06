#ifndef ParkingCard_h
#define ParkingCard_h

#include <iostream>
#include <string>
using namespace std;
#include "Time.h"

class ParkingCard{

    protected:
        int cardId;
        string personName;

    public:
        //Constructor
        ParkingCard();
        ParkingCard(int id, string name);

        //Getters and setters    
        int getCardId(){return cardId;}
        void setCardId(int Id){cardId = Id;}

        string getPersonName(){return personName;}
        void setPersonName(string name){personName = name;}

        //Methods
        double calculatePayment(Time, Time, double);
        
        virtual int calculateHoursToPay(Time, Time) = 0;
        virtual void print() = 0;
};


ParkingCard::ParkingCard(){
    //TODO
}

ParkingCard::ParkingCard(int id, string name){
    //TODO
}

double ParkingCard::calculatePayment(Time start, Time end, double fee){
    //TODO
    return 0;
}


#endif
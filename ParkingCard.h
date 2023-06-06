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
        ParkingCard(int, string);

        //Getters and setters    
        int getCardId();
        void setCardId(int);

        string getPersonName();
        void setPersonName(string);

        //Methods
        double calculatePayment(Time, Time, double);
        
        virtual int calculateHoursToPay(Time, Time) = 0;
        virtual void print() = 0;
};
#endif
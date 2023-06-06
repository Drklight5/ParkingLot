#ifndef EmployeeParkingCard_h
#define EmployeeParkingCard_h

#include <iostream> 

using namespace std;

#include "ParkingCard.h"

class EmployeeParkingCard : public ParkingCard{
    private:
        string storeName;

    public:
        EmployeeParkingCard();
        EmployeeParkingCard(int cardId, string personName, string storeName);

        string getStoreName(){return storeName;}

        void setStoreName(string store){storeName = store;}
        int calculateHoursToPay(Time, Time);
        void print();
};

#endif
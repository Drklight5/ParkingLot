#ifndef SupplierParkingCard_h
#define SupplierParkingCard_h

#include <iostream>

using namespace std;

#include "ParkingCard.h"

class SupplierParkingCard : public ParkingCard {
    private:
    string company;
    
    public:
    SupplierParkingCard();
    SupplierParkingCard(int cardId, string personName, string company);

    string getCompany(){return company;}

    void setCompany(string com){company = com;}
    void calculateHoursToPay(Time, Time);
    void print();
};

#endif
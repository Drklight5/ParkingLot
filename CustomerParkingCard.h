#ifndef CustomerParkingCard_h
#define CustomerParkingCard_h

#include <iostream>

using namespace std;

#include "ParkingCard.h"

class CustomerParkingCard : public ParkingCard{
    private:

    public:
    CustomerParkingCard();
    CustomerParkingCard(int cardId, string personName);

    int calculateHoursToPay(Time, Time)
    void print();
};

#endif 
#ifndef ParkingCard_h
#define ParkingCard_h

#include <iostream>
#include <string>
using namespace std;

class ParkingCard{
    protected:
        int cardId;
        string personName;
    public:

        ParkingCard();
        ParkingCard(int, string);

        int getCard();
        void setCard(int);
};
#endif
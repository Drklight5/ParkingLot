#ifndef CustomerParkingCard_h
#define CustomerParkingCard_h

#include <iostream>

using namespace std;

#include "ParkingCard.h"

class CustomerParkingCard : public ParkingCard{
    private:

    public:
        CustomerParkingCard();
        CustomerParkingCard(int id, string name);

        int calculateHoursToPay(Time, Time);
        void print();
};

CustomerParkingCard::CustomerParkingCard():ParkingCard(){
}

CustomerParkingCard::CustomerParkingCard(int id, string name):ParkingCard(id,name){
    //TODO
}

int CustomerParkingCard::calculateHoursToPay(Time start, Time end){
    //TODO
    int hours = start.elapsedTime(end);
    return hours;
}

void CustomerParkingCard::print(){
    cout << "CardId: \t" << cardId << "Name:\t" << personName << endl;
    //TODO
}
#endif 
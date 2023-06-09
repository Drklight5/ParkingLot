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
    SupplierParkingCard(int id, string name, string com);

    string getCompany(){return company;}
    void setCompany(string com){company = com;}

    int calculateHoursToPay(Time, Time);
    void print();
};

SupplierParkingCard::SupplierParkingCard():ParkingCard(){
    company = "";
        // Esto es para tenerlo listo la definicion se hara posteriormente 
}

SupplierParkingCard::SupplierParkingCard(int id, string name, string com):ParkingCard(id, name){
    company = com;
    // Esto es para tenerlo listo la definicion se hara posteriormente 

}

int SupplierParkingCard::calculateHoursToPay(Time start, Time end){
    int time = start.elapsedTime(end);
    int hours;
    if (time % 60 != 0){
        time += 60;
    }
    hours = time / 60;
    // Este return 0 es solamente para que no me marque error la definicion correcta se hara posteriormente 
    return hours - 1;
}

void SupplierParkingCard::print(){
    cout << "CardId: " << cardId << "\t Name: " << personName << "\t Company: " << company << endl;
    // La definicion de hara posteriormente 
}
#endif
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
    // Esto es para tenerlo listo la definicion se hara posteriormente 
}

SupplierParkingCard::SupplierParkingCard(int id, string name, string com):ParkingCard(id, name){
    // Esto es para tenerlo listo la definicion se hara posteriormente 

}

int SupplierParkingCard::calculateHoursToPay(Time, Time){
    // Este return 0 es solamente para que no me marque error la definicion correcta se hara posteriormente 
    return 0;
}

void SupplierParkingCard::print(){
    // La definicion de hara posteriormente 
}
#endif
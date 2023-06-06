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
    EmployeeParkingCard(int id, string name, string store);

        string getStoreName(){return storeName;}

        void setStoreName(string store){storeName = store;}
        int calculateHoursToPay(Time, Time);
        void print();
};

EmployeeParkingCard::EmployeeParkingCard():ParkingCard(){
    storeName = "";
    // Por hacer 

}

EmployeeParkingCard::EmployeeParkingCard(int id, string name, string store):ParkingCard(id, name){
    storeName = store;
    // Por hacer 

}

int EmployeeParkingCard::calculateHoursToPay(Time, Time){
    // Por hacer, este metodo es para calcular las horas a pagar, la definicion completa se hara despues
    return 0;
}

void EmployeeParkingCard::print(){
    // Por hacer, aqui ira el metodo de impresion, su definicion completa se hara despues
    cout << "CardId: " << cardId << " \tName:" << personName << "\tStore:" << storeName <<endl;
}
#endif
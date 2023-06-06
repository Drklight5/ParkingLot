#include <iostream>
#include <string>
using namespace std;

#include "CustomerParkingCard.h"
#include "EmployeeParkingCard.h"
#include "SupplierParkingCard.h"
#include "Time.h"
#include "ParkingRegister.h"

int main(){

    ParkingCard *parkings[3];

    parkings[0] = new CustomerParkingCard();
    parkings[1] = new EmployeeParkingCard();
    parkings[2] = new SupplierParkingCard();
    
    Time time = Time(12, 30);
    Time time2 = Time(19,50);
    ParkingRegister regis = ParkingRegister();


    parkings[0]->print();
    parkings[1]->print();
    parkings[2]->print();

    parkings[1]->calculateHoursToPay(time, time);

    time.print();
    regis.print();

    cout << time.elapsedTime(time2);

    return 0;
};
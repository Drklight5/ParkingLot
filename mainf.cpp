#include <iostream>
#include <string>
#include<fstream>
using namespace std;

#include "CustomerParkingCard.h"
#include "EmployeeParkingCard.h"
#include "SupplierParkingCard.h"
#include "Time.h"
#include "ParkingRegister.h"

void readFromFile(ParkingCard cards[50], int &numSlots ){
    char card;
    int id;
    string name, store, company;
    ifstream inputFile;

    inputFile.open("Parkingcards.txt");
    numCards = 0;   

    while(inputFile >> card && numSlots <= 20) {
        inputFile >> id >> name >> store >> company ;
        if (card == 'E') {
            cards[numSlots] = new EmployeeParkingCard(id, name, store);
            numSlots++;   
        }
        else if (card == 'S'){
            cards[numSlots] = new SupplierParkingCard(id, name, company);
            numSlots++;   // count the person added to the array
        }
        else if (card == 'C'){
            cards[numSlots] = new SupplierParkingCard(id, name);
            numSlots++;   
        }
    }
    inputFile.close();
}


void readInfoFromKeyboard(ParkingCard *cards[50], int &numSlots) {
    char cardChoice;
    int id;
    string name, store, company;
    cout << "Number of Slots ";
    cin >> numSlots;
    for (int c = 0; c < numSlots; c++) {
        cout << "Is the person a Customer? (y/n)" << endl;
        cin >> cardChoice;
        if (cardChoice == 'y') {
            cout << "Department? ";
            cin >> depart;
            Teacher *teach = new Teacher(name, date, depart);
            personsList[c] = teach;
        }
        
        else {
            personsList[c] = new Person(name, date);
        }
    }
}

int main(){
    ParkingCard *cards[50]
    int numCards;
    char menuOption; 
    int arrive, exit, hours, minutes;
do
    {
        cout << "Options " << endl;
        cout << endl;
        cout << "a) Register entrance " << endl;
        cout << "b) Register exit " << endl;
        cout << "c) Display Parking Lot info " << endl;
        cout << "d) Display Parking Cards info"
        cout << "option -> " << endl;
        cin >> menuOption;
        switch (menuOption) {
            case 'a':  {
                
            }
            case 'b':  {
                
            }
            case 'c':  {
                
            }
            case 'd':  {
                
            }
        }
    } while ((hours <= 22 && hours >= 8 ) && (minutes <= 59 && minutes >= 0));  // c is the option to finish
    return 0;
}

}
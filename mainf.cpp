#include <iostream>
#include <string>
#include<fstream>
using namespace std;

#include "CustomerParkingCard.h"
#include "EmployeeParkingCard.h"
#include "SupplierParkingCard.h"
#include "Time.h"
#include "ParkingRegister.h"

void readFromFile(ParkingCard cards[50], int &numCards ){
    char card;
    int id;
    string name, store, company;
    ifstream inputFile;

    inputFile.open("Parkingcards.txt");
    numCards = 0;   

    while(inputFile >> card) {
        inputFile >> id >> name >> store >> company ;
        Date date(dd,mm,yy);
        if (card == 'E') {
            personsList[numberOfPersons] = new Person(name, date);
            numberOfPersons++;   // count the person added to the array
        }
        else {
            inputFile >> dept;
            personsList[numberOfPersons] = new Teacher(name, date, dept);
            numberOfPersons++;   // count the person added to the array
        }
    }
    inputFile.close();
}
}

void readInfoFromKeyboard(ParkingCard *cards[50], int &numCards) {
    char cardChoice;
    int id;
    string name, store, company;
    cout << "Number of persons? ";
    cin >> numberOfPersons;
    for (int c = 0; c < numberOfPersons; c++) {
        cout << "Is the person a teacher? (y/n)" << endl;
        cin >> personChoice;
        cout << "Name? ";
        cin >> name;
        cout << "Birth Date? type dd mm yy ";
        cin >> dd >> mm >> yy;
        Date date(dd,mm,yy);
        if (personChoice == 'y') {
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
    int arrive, exit;


}
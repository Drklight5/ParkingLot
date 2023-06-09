#include <iostream>
#include <string>
#include<fstream>
using namespace std;

#include "CustomerParkingCard.h"
#include "EmployeeParkingCard.h"
#include "SupplierParkingCard.h"
#include "Time.h"
#include "ParkingRegister.h"

void readFromFile(ParkingCard *cards[50], int &numSlots ){
    char card;
    int id;
    string name, store, company;
    ifstream inputFile;

    inputFile.open("Parkingcards.txt");

    numSlots = 0;   
    while(inputFile >> card ) {
        inputFile >> id >> name ;
        if (card == 'E') {
            inputFile >> store;
            cards[numSlots] = new EmployeeParkingCard(id, name, store);
            numSlots++;   
        }
        else if (card == 'S'){
            inputFile >> company;
            cards[numSlots] = new SupplierParkingCard(id, name, company);
            numSlots++;   
        }
        else if (card == 'C'){
            cards[numSlots] = new CustomerParkingCard(id, name);
            numSlots++;   
        }
    }
    inputFile.close();
}


int main(){
    ParkingCard *cards[50];
    ParkingRegister list[20];
    int numSlots, id ;
    char menuOption; 
    int  hours, minutes; 
    int numreg = 0;
    Time arrive, exit;

    readFromFile(cards,numSlots);
do
    {
        cout << "Options " << endl;
        cout << endl;
        cout << "a) Register entrance " << endl;
        cout << "b) Register exit " << endl;
        cout << "c) Display Parking Lot info " << endl;
        cout << "d) Display Parking Cards info" << endl;
        cout << "t) Finish program" << endl;
        cout << "option -> " << endl;
        cin >> menuOption;
        switch (menuOption) {
            case 'a':  {
                cout << "Ingrese el id: " << endl;
                cin >> id;
                for(int g = 0; g < numSlots; g++){
                    if (id == cards[g]->getCardId())
                    {   
                        cout << "Adelante " << endl;
                        //if (id != cards[g]->getCardId()){
                            //cout << "Te equivocaste, vuelvelo a intentar " << endl;
                            //cout << endl;
                        //}
                        cout << endl << "Ingrese la hora" << endl; 
                        cin >> hours;
                        while (hours > 22 || hours < 8){
                            cout << "Hora no valida" << endl; 
                            cout << endl << "Ingrese la hora" << endl; 
                            cin >> hours;
                            cout << endl;
                        }
                        if (hours <= 22 && hours >= 8){
                            cout << endl << "Ingrese los minutos" << endl;
                            cin >> minutes;
                            while (minutes > 59 || minutes < 0){
                                cout << "Minutos no valido " << endl; 
                                cout << endl;
                                cout << endl << "Ingrese los minutos" << endl;
                                cin >> minutes;
                                }
                            }
                        Time tiempo (hours, minutes);
                        arrive = tiempo;
                        ParkingRegister registro(id, arrive);
                        list[numreg] = registro;
                        numreg ++;
                        cout << "Listo, te has registrado" << endl;
                        cout << endl;
                        
                    }
                    
                }
                
            }
            break;
            
            case 'b':  {
                // cout << "Ingresa el id"
                // cin >> id;
                // for(int g = 0; g < numreg; g++){
                //     if (id == cards[g]->getCardId()){
                //         cout << "Continue" << endl;
                //         cout << endl << "Ingrese la hora de salida"
                //     }
                // }
                
            }
            case 'c':  {
                for(int g = 0; g < numreg; g++){
                    for(int h = 0; h < numSlots; h++ ){
                        if (list[g].getCardId() == cards[h] -> getCardId()){
                            cards[h]->print();
                            list[g].print();
                        } 
                    }
                } 
                break;
            }
            case 'd':  {
                for(int g = 0; g < numSlots; g++){
                    cards[g] -> print();  
                }
                
            }
        }
    } while (menuOption != 't');  
    return 0;
}


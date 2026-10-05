#include <iostream>
#include <string>

using namespace std;

class Car{
    public:
        string brand;
        string model;
};

class EV: public Car{
    public:
        int batterySize;

        void displayDetails(){
            cout << "\nEV Car Details" << endl;
            cout << "Name: " << brand << " " << model << endl;
            cout << "Battery Size: " << batterySize << " kWh" << endl; 
        }
};

class Gasoline: public Car{
    public:
        string fuelType;
        int capacity;

        void displayDetails(){
            cout << "\nGasoline Car Details" << endl;
            cout << "Name: " << brand << " " << model << endl;
            cout << "Fuel Type: " << fuelType << endl; 
            cout << "Capacity: " << capacity << " L" << endl;
        }
};


int main() {
    EV evCar;
    evCar.brand = "Tesla";
    evCar.model = "S";
    evCar.batterySize = 80;
    evCar.displayDetails();

    Gasoline gasCar;
    gasCar.brand = "Mahindra";
    gasCar.model = "Bolero";
    gasCar.fuelType = "Diesel";
    gasCar.capacity = 55;
    gasCar.displayDetails();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
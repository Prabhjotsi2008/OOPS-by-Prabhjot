#include <iostream>
#include <string>

using namespace std;

class Car{
    string brand;
    string model;

    public:
        Car(){
            brand = model = "N/A";
            cout << "Default Constructor Called for " << brand << " " << model << endl;
        }

        Car(string b, string m){
            brand = b;
            model = m;
            cout << "\nParameterized Constructor Called for " << brand << " " << model << endl;
        }

        ~Car(){
            cout << "\nDestructor Called for " << brand << " " << model << endl;
        }
};

int main() {
    {
        Car c1;
        Car c2("Toyota","Fortuner");
    } // destructor will be called here

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
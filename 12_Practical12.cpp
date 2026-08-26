#include <iostream>
#include <string>
using namespace std;

class Car {
    static int count;
    string model;

    public:
        // Static member function
        static void showCount() {
            cout << "\nCar Count: " << count << endl;
        }

        void getData() {
            cout << "Enter car model: ";
            getline(cin, model);
            count++;
        }
};

int Car::count = 0;

int main() {
    Car car1,car2,car3;

    car1.getData();
    Car::showCount();

    car2.getData();
    Car::showCount();

    car3.getData();
    Car::showCount();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;

    return 0;
}
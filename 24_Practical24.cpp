#include <iostream>

using namespace std;

class Employee{
    public:
        string name;

        void display(){
            cout << name << " is an Employee" << endl;
        }
};

class Developer: public Employee{
    public:
        void display(){
            cout << name << " is a Developer" << endl;
        }
};

int main() {
    Developer d;
    d.name = "Prabhjot Singh";

    d.Employee::display();
    d.display();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
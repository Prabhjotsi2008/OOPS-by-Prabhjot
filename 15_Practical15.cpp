#include <iostream>
#include <string>

using namespace std;

class Employee{
    string name;
    float salary;
    public:
        Employee(string n, float sal){ // Parameterized constructor
            name = n;
            salary = sal;
        }
        void display(){
            cout << "\nEmployee's Details" << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};
int main() {
    Employee e1("Karan", 50000.0); // Parameterized constructor called 
    e1.display();

    Employee e2("Arjun", 35000.0);
    e2.display();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;

    return 0;
}
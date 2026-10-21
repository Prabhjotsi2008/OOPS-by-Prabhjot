#include <iostream>
#include <string>

using namespace std;

class Employee{
    string name;
    double salary;

    public:
        Employee(string name, double salary){ // using this pointer to resolve shadowed variable ambiguity
            this->name = name;
            this->salary = salary;
        }
        Employee& incrementSalary(double amt){
            salary += amt;
            return *this; // returning reference to current instance to allow method chaining
        }

        void display(){
            cout << "\nEmployee Details" << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Employee e1("Prabh",25000);

    e1.display();

    e1.incrementSalary(5000).display(); // possible by returning *this
    
    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;

    return 0;
}
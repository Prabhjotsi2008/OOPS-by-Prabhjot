#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Faculty: public Person{
    public:
        double salary;
};

class Professor: public Faculty{
    public:
        string subject;
        void displayDetails(){
            cout << "\nProfessor Details" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Salary: " << salary << endl;
            cout << "Subject: " << subject << endl;
        }
};


int main() {
    Professor p;
    p.name = "Ranjit Singh";
    p.age = 32;
    p.salary = 55000;
    p.subject = "Physics";

    p.displayDetails();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
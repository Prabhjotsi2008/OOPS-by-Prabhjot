// To illustrate the use of class and object

#include <iostream>
#include <string>

using namespace std;

class Student{ // class 
    public:
        string name;
        int rollNo;
        string branch;
        char section;

        void displayDetails(){
            cout << "\n----- STUDENT-DETAILS -----" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Branch: " << branch << endl;
            cout << "Section: " << section << endl;
            cout << "---------------------------" << endl;

        }
};

int main() {
    Student s1; // object

    s1.name = "Prabhjot Singh";
    s1.rollNo = 2514143;
    s1.branch = "CSE";
    s1.section = 'E';

    s1.displayDetails();
    return 0;
}
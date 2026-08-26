// Program to show the working of static data members in a class
#include <iostream>
#include <string>
using namespace std;

class Student{
    static int count; // static member variable to keep track of the number of Student objects created

    string name;
    int rollNo;

    public:
        void getData(){
            cout << "\nEnter Name: ";
            cin >> name;
            cout << "Enter Roll No: ";
            cin >> rollNo;
            count++; // increment the count whenever a new Student object is created
        }

        void getCount(){
            cout << "\nTotal Students: " << count << endl;
        }
};

int Student::count; // initialize static member variable // by default initialised to 0 whenever an object is created

int main() {
    Student s1, s2, s3; // create three Student objects
    s1.getData();

    s1.getCount(); // 1

    s2.getData();

    s1.getCount(); // 2

    s3.getData();

    s1.getCount(); // 3

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
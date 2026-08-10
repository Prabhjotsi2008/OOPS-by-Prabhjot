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
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Roll No: ";
            cin >> rollNo;
            count++; // increment the count whenever a new Student object is created
        }

        void getCount(){
            cout << "Total Students: " << count << endl;
        }
};

int Student::count = 0; // initialize static member variable

int main() {
    Student s1, s2, s3; // create three Student objects
    s1.getData();

    s1.getCount(); // 1

    s2.getData();

    s1.getCount(); // 2

    s3.getData();

    s1.getCount(); // 3
    return 0;
}
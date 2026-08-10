// Program to illustrate the concept of nesting of member functions.
#include <iostream>
#include <string>

using namespace std;

class Student{
    string name;
    int rollNo;
    float marks[3];

    float calcPercentage(){
        float sum = 0;
        for(int i=0; i<3; i++){
            sum += marks[i];
        }
        float percent = (sum / (3 * 100)) * 100;
        return percent;
    }

    public:
        void getData(){
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Roll No: ";
            cin >> rollNo;
            for(int i=0; i<3; i++){
                cout << "Enter Subject " << i+1 << " Marks: ";
                cin >> marks[i];
            }
        }

        void displayData(){
            cout << "\nStudent's Details" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Percentage: " << calcPercentage() << "%" << endl; // use of nested member function
        }
};

int main() {
    Student s1;
    s1.getData();
    s1.displayData();
    return 0;
}
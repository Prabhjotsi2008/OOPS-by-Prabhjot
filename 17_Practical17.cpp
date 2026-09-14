#include <iostream>
#include <cstring>

using namespace std;

// class String{
//     char* name;
//     int length;
    
//     public:
//         String(){
//             length = 0;
//             name = new char[length+1];
//         }

//         String(const char* str){
//             length = strlen(str);
//             name = new char[length+1];
//             strcpy(name,str);
//         }

//         void display(){
//             cout << "Name: " << name << endl;
//         }
// };

class Employee{
    double* salary;

    public:

        Employee(double s){
            salary = new double(s);
            cout << "\nDynamic Constructor Called" << endl;
        }

        void display(){
            cout << "Salary: Rs. " << *salary << endl; 
        }

        ~Employee(){
            delete salary;
        }
};

int main() {
    Employee e1(55000);
    e1.display();

    Employee e2(40000);
    e2.display();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
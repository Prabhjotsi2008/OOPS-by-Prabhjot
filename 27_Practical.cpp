#include <iostream>
#include <cmath>
using namespace std;

class Cube{
    int* num;
    public:
        void allocate(){
            num = new int;
            cout << "\nMemory allocated at location: " << num << endl;
        }

        void getNum(){
            cout << "Enter a Number: ";
            cin >> *num; 
        }

        void display(){
            cout << "Cube of Number: " <<  pow(*num,3) << endl;
        }

        void deallocate(){
            delete num;
            cout << "Deallocated Memory!!!" << endl;
        }
};

int main() {
    Cube c;
    c.allocate();
    c.getNum();
    c.display();
    c.deallocate();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;

    return 0;
}
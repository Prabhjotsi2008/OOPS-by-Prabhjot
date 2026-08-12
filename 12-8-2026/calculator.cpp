#include <iostream>

using namespace std;

class Calculator{
    int num1,num2;

    public:
        void setData(){
            cout << "Enter Number 1: ";
            cin >> num1;
            cout << "Enter Number 2: ";
            cin >> num2;
        }

        void addition(){
            cout <<  num1 << " + " << num2 << " = " << num1 + num2 << endl;
        }
        void subtraction(){
            cout <<  num1 << " - " << num2 << " = " << num1 - num2 << endl;
        }
        void multiplication(){
            cout <<  num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        void division(){
            cout <<  num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }

};

int main() {
    int choice;
    Calculator c;
    c.setData();

    cout << "MENU" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            c.addition();
            break;
        case 2:
            c.subtraction();
            break;
        case 3:
            c.multiplication();
            break;
        case 4:
            c.division();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
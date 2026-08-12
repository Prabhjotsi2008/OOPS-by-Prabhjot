#include <iostream>

using namespace std;

class Calculator {
private:
    int num1, num2, choice;

public:
    void takeInput() {
        cout << "Enter Number 1: ";
        cin >> num1;

        cout << "Enter Number 2: ";
        cin >> num2;

        cout << "MENU" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    void calculate(){
        switch (choice) {
        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Division by zero is not allowed!" << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
};

int main() {
    Calculator c;
    c.takeInput();
    c.calculate();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}

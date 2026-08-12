#include <iostream>

using namespace std;

class Number{
    int num1, num2, num3;

    public:
        void setData(){
            cout << "Enter Number 1: ";
            cin >> num1;
            cout << "Enter Number 2: ";
            cin >> num2;
            cout << "Enter Number 3: ";
            cin >> num3;
        }

        void getGreatest(){
            if (num1 >= num2 && num1 >= num3){
                cout << "Greatest Number: " << num1 << endl;
            }
            else if (num2 >= num1 && num2 >= num3){
                cout << "Greatest Number: " << num2 << endl;
            }
            else{
            cout << "Greatest Number: " << num3 << endl;
            }
        }
};

int main() {
    Number n;
    n.setData();
    n.getGreatest();
    return 0;
}
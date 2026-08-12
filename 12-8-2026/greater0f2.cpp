#include <iostream>

using namespace std;

class Number{
    int num1, num2;

    public:
        void setData(){
            cout << "Enter Number 1: ";
            cin >> num1;
            cout << "Enter Number 2: ";
            cin >> num2;
        }

        void getGreatest(){
            if (num1 >= num2){
                cout << "Greater Number: " << num1 << endl;
            }
            else{
                cout << "Greater Number: " << num2 << endl;
            }
        }
};

int main() {
    Number n;
    n.setData();
    n.getGreatest();
    return 0;
}
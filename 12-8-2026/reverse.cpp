#include <iostream>

using namespace std;

class Number{
    int num;

    public:
        void setNum(){
            cout << "Enter a number: ";
            cin >> num;
        }

        void reverseNum(){
            if (!num) {
                cout << "Enter a number first";
                return;
            }
            
            int temp = num,rev = 0;
            while (temp > 0){
                rev = (rev*10) + (temp%10);
                temp /= 10;
            }

            cout << "Reverse of " << num << " = " << rev << endl;
        }

};
int main() {
    Number n1;
    n1.setNum();
    n1.reverseNum();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
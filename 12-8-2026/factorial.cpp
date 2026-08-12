#include <iostream>

using namespace std;

class Factorial{
    int num;

    public:
        void setNum(){
            cout << "Enter a number: ";
            cin >> num;
        }

        void getFactorial(){
            int fact = 1;
            int i = 1;
            do{
                fact *= i;
                i++;
            }while(i <= num);

            cout << "Factorial of " << num << " = " << fact << endl;
        }

};

int main() {
    Factorial f;
    f.setNum();
    f.getFactorial();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
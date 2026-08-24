#include <iostream>

using namespace std;

class Swap{
    public:
        void swapper(int &p, int &q){
            int r = p;
            p = q;
            q = r;
        }  
};

int main() {
    int num1,num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    cout << "\nBefore Swapping" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    
    Swap s;
    s.swapper(num1,num2);
    cout << "\nAfter Swapping" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    
    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
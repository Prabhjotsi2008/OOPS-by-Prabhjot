#include <iostream>

using namespace std;

class SumNatural{
    int num;

    public:
        void setNum(){
            cout << "Enter a number: ";
            cin >> num;
        }

        void getSum(){ 
            int sum = 0;
            for(int i=1; i<=num; i++){
                sum += i;
            }

            cout << "Sum of first " << num << " numbers: " << sum << endl;
        }
};
int main() {
    SumNatural s;
    s.setNum();
    s.getSum();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
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
            int sum;
            for(int i=1; i<=num; i++){
                sum += num;
            }

            cout << "Sum of first " << num << "numbers: " << sum << endl;
        }
};
int main() {
    
    return 0;
}
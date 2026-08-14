#include <iostream>

using namespace std;

class Pattern{
    int num;

    public:
        void setNum(){
            cout << "Enter a number: ";
            cin >> num;
        }

        void getPattern(){
            cout << "\nPyramid Pattern: " << endl;
            for(int i=1; i<=num; i++){
                for(int k=i; k<num; k++){
                    cout << " ";
                }
                for(int j=1; j<=(2*i-1); j++){
                    cout << "*";
                }
                cout << endl;
            }
        }
};

int main() {
    Pattern p;
    p.setNum();
    p.getPattern();
    
    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
#include <iostream>
using namespace std;

class Array{
    int* data;
    int length;

    public:
        Array(int l){
            length = l;
            data = new int[length];
            for(int i=0; i<l; i++){
                cout << "Enter Value: ";
                cin >> data[i];
            }
        }

        void display(){
            cout << "\nArray: ";
            for(int i=0; i<length;i++){
                cout << data[i] << " ";
            }
            cout << endl;
        }

        ~Array(){
            delete[] data;
        }
};

int main() {
    Array a1(3);
    a1.display();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
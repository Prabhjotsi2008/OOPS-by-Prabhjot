#include <iostream>
#include <string>

using namespace std;

class Tea{
    string name;
    public:
        Tea(){
            name = "XYZ";
            cout << "Default Constructor Called" << endl;
        }
        Tea(string n){
            name = n;
            cout << "Parameterized Constructor Called" << endl;
        }
        Tea(Tea &t){
            name = t.name;
            cout << "Copy Constructor Called" << endl;
        }

        void display(){
            cout << "Tea Name: " << name  << " Tea" << endl;
        }
};

int main() {
    Tea t1("Green");
    t1.display();

    Tea t2(t1);
    t2.display();

    Tea t3 = t1;
    t3.display();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
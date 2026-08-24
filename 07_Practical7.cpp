#include <iostream>

using namespace std;

class College{
    public:
    class CSE{
        int rollNo;
        public:
            void getRollNo(){
                cout << "Enter Roll No: ";
                cin >> rollNo;
            }
            void display(){
                cout << "\nRoll No: " << rollNo << endl;
            }
    };
};

int main() {
    College::CSE cse;
    cse.getRollNo();
    cse.display();
    
    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
#include <iostream>

using namespace std;

class Windows{
    public:
        void display(){
            cout << "This system can run Windows" << endl;
        }
};

class Linux{
    public:
        void display(){
            cout << "This system can run Linux" << endl;
        }
};

class DualBoot: public Windows, public Linux{
    public:
        void display(){
            cout << "This system can run both Windows and Linux" << endl;
        }
};

int main() {
    DualBoot db;
    db.Windows::display();
    db.Linux::display();
    db.display();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
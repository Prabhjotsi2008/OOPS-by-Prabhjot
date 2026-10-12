#include <iostream>

using namespace std;

class Cricketer{
    protected:
        string name;

    public:
        void getName(){
            cout << "Enter Cricketer Name: ";
            getline(cin,name);
        }

        void displayCricketer(){
            cout << name << " plays Cricket" << endl;
        }
};

class Batter: virtual public Cricketer{
    public:
        void displayBatter(){
            cout << name << " can Bat" << endl;
        }
};

class Bowler: virtual public Cricketer{
    public:
        void displayBowler(){
            cout << name << " can Bowl" << endl;
        }
};

class AllRounder: public Batter, public Bowler{
    public:
        void displayAllRounder(){
            cout << name << " is an All-Rounder" << endl;
        }
};

int main() {
    AllRounder ar;
    ar.getName();
    ar.displayCricketer();
    ar.displayBatter();
    ar.displayBowler();
    ar.displayAllRounder();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
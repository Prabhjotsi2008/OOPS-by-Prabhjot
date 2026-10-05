#include <iostream>
#include <string>

using namespace std;

class Cricketer{
    protected:
        string name;

    public:
        void getName(){
            cout << "Enter Cricketer Name: ";
            getline(cin,name);
        }
};

class Batter: public Cricketer{
    protected:
        string battingStyle;
    public:
        void getBatter(){
            cout << "Enter Batting Style: ";
            getline(cin,battingStyle);
        }
};

class Bowler: public Cricketer{
    protected:
        string bowlingStyle;
    public:
        void getBowler(){
            cout << "Enter Bowling Style: ";
            getline(cin,bowlingStyle);
        }
};

class AllRounder: public Batter, public Bowler{
    public:
        void displayAllRounder(){
            cout << "\nAll-Rounder Details" << endl;
            cout << "Name: " << Batter::name << endl;
            cout << "Batting Style: " << battingStyle << endl;
            cout << "Bowling Style: " << bowlingStyle << endl;
        }
};

int main() {
    AllRounder ar;
    ar.Batter::getName();
    ar.getBatter();
    ar.getBowler();
    ar.displayAllRounder();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
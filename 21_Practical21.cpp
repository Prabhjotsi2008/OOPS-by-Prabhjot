#include <iostream>

using namespace std;

class Internal{
    protected:
        float interMarks;
    public:
        void getInternal(){
            cout << "Enter Internal Marks: ";
            cin >> interMarks;
        }
};

class External{
    protected:
        float exterMarks;
    public:
        void getExternal(){
            cout << "Enter External Marks: ";
            cin >> exterMarks;
        }
};

class Result: public Internal, public External{
    float totalMarks;
    public:
        void calcMarks(){
            totalMarks = interMarks + exterMarks;
        }
        void display(){
            cout << "\nResult Details" << endl;
            cout << "Internal Marks: " << interMarks << endl;
            cout << "External Marks: " << exterMarks << endl;
            cout << "Total Marks: " << totalMarks << endl;
        }
};

int main() {
    Result r;
    r.getInternal();
    r.getExternal();
    r.calcMarks();
    r.display();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
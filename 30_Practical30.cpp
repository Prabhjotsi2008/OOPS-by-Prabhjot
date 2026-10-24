#include <iostream>

using namespace std;

class Space{
    int x;
    int y;
    int z;

    public:
        Space(int x, int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void operator-(){
            x = -x;
            y = -y;
            z = -z;
        }

        void display(){
            cout << "\nVector Space: (" << x << ", " << y << ", " << z << ")" << endl;
        }
};

int main() {
    Space s1(2,-5,10);
    s1.display();

    -s1; // internally => s1.operator-();
    s1.display();
    
    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int  marks[7] = {98,97,56,45,79,81,65};
    int* ptr = marks;

    cout << "First Value: " << *ptr << " at location " << ptr << endl;

    ptr++;
    cout << "After Incrementing pointer, Value: " << *ptr << " at location " << ptr << endl;

    ptr = ptr + 3;
    cout << "Moving 3 elements forward, Value: " << *ptr << " at location " << ptr << endl;

    ptr--;
    cout << "After Decrementing pointer, Value: " << *ptr << " at location " << ptr << endl;

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;

    return 0;
}
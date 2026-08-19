#include <iostream>
#include <string>

using namespace std;

class Student{
    string name;
    float marks;
    public:
        void getData(){
            cout << "\nEnter Name: ";
            cin >> name;
            cout << "Enter Marks obtained: ";
            cin >> marks;
        }
        
        void displayData(){
            cout << "\nStudent's Details" << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }

        friend void compareMarks(Student s1, Student s2);
};

void compareMarks(Student s1, Student s2){
    if(s1.marks > s2.marks) cout << s1.name << " obtained more marks than " << s2.name << endl; 
    else if(s2.marks > s1.marks) cout << s2.name << " obtained more marks than " << s1.name << endl;
    else cout << "Both " << s1.name << " and " << s2.name << " obtained same marks" << endl;  
}

int main() {
    Student s1;
    s1.getData();
    s1.displayData();

    Student s2;
    s2.getData();
    s2.displayData();

    cout << "\n";
    compareMarks(s1,s2);

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    return 0;
}
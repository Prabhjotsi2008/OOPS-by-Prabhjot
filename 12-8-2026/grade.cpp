#include <iostream>

using namespace std;

class Grade{
    float marks;

    public:
        void setMarks(){
            cout << "Enter Marks: ";
            cin >> marks;
        }

        void getGrade(){
            if (marks < 0 or marks > 100){
                cout << "Invalid Marks (Must be between 0-100)" << endl;
                return;
            }

            if (marks >= 90){
                cout << "Grade: A" << endl;
            }
            else if(marks >= 75){
                cout << "Grade: B" << endl;
            }
            else if(marks >= 60){
                cout << "Grade: C" << endl;
            }
            else if(marks >= 40){
                cout << "Grade: D" << endl;
            }
            else{
                cout << "Grade: F" << endl;
            }
        }

};

int main() {
    Grade grade;
    grade.setMarks();
    grade.getGrade();

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;
    
    return 0;
}
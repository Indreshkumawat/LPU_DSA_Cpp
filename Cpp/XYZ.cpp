#include <iostream>
using namespace std;

union StudentID {
    int rollNo;
    char grade;
    float percentage;
};

int main() {
    StudentID s;

    s.rollNo = 101;
    cout << "Roll No: " << s.rollNo << endl;

    s.grade = 'A';
    cout << "Grade: " << s.grade << endl;
cout << "Roll No: " << s.rollNo << endl;
    s.percentage = 85.5;
    cout << "Percentage: " << s.percentage << endl;

    return 0;
}
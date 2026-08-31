#include <iostream>
using namespace std;
class Student
{
    int rollNO;
    string name;

public:
    Student(int r, string n)
    {
        rollNO = r;
        name = n;
    }
    void display()
    {
        cout << rollNO << " " << name;
    }
};
int main()
{

    Student s1(101, "Indresh");
    s1.display();
}
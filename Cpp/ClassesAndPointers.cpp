#include <iostream>
using namespace std;
class Student{

    public:
    int *marks;
    
    Student(int m){
      marks = new int(m);
    }
};
int main()
{
    Student s1(100);

    cout<<*(s1.marks);

    // int x = 90;

    // s1.marks = 100;

    // s1.ptr = &x;
    // cout<<&x<<endl;
    // cout<<s1.ptr<<endl;
    // cout<<*(s1.ptr)<<endl;
}
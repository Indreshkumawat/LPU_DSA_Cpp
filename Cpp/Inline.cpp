#include <iostream>
using namespace std;
inline int cube(int a){
    return a*a*a;
}
class Student{
    public:
    int id;
    void display();
};

void Student::display(){
    cout<<id;
}

int main(){
   // int num = 23;
    // cout<<cube(num)<<endl;
    // cout<<cube(20)<<endl;
    // cout<<cube(34)<<endl;
    Student s;
    s.id = 101;
    s.display();
}
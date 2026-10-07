#include<iostream>
using namespace std;
class Student{
    int marks;
    int age;
    public:
    Student(int marks,int age){
        this->marks = marks;
        this->age = age;
    }
    bool operator ==(Student s){
        bool marksCheck = (marks == s.marks);
        bool ageCheck = (age == s.age);
        return marksCheck && ageCheck;
    }

};
int main(){
    Student s1(50,20);
    Student s2(50,20);

    if(s1 == s2){
        cout<<"Both studentare having equal marks and age"<<endl;
    }else{
        cout<<"Marks or age are unequal of both the students"<<endl;
    }
}
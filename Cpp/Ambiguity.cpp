#include<iostream>
using namespace std;
class Father{
    public: 
    void show(){
        cout<<"Father"<<endl;
    } 
};
class Mother{
    public: 
    void show(){
        cout<<"Mother"<<endl;
    } 
};

class Child: public Father, public Mother{

};
class A {
public:
    int x = 10;
};

class B {
public:
    int x = 20;
};

class C : public A, public B {

};





// Diamond probem-->>

class Person {
    public:
    int age = 25;
};
// virtual case classes 
class Student : virtual public Person {

};

class Employee : virtual public Person {

};


class Manager: public Student, public Employee{

};


int main(){

    Manager m;

    cout<<m.age;

    // cout<<m.Student::age;
    // cout<<m.Employee::age;

    // Child c;
    // c.Father::show();
    // c.Mother::show();

    // C f;

    // cout<<f.A::x;
    // cout<<f.B::x;

}

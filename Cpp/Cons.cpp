#include <iostream>
using namespace std;
class Student
{
    int marks;
    int rollNo;
    // string name;
    public:
    Student(){
        // default values ....
        marks = 1;
        rollNo = 100;
        cout<<"Default constructor";
    }
    Student(int rollNo,int marks = 0){
        this->marks = marks;
        this->rollNo = rollNo;
    }
    // Student(int rollNo,string name){
    //     this->rollNo = rollNo;
    //     this->name = name;
    // }
    void display(){
        cout<<marks<<" "<<rollNo;
    }

};
class A{
    int x;
    public:
    A(){
        cout<<"Default"<<endl;
    }
    A(int x = 10){
        cout<<"para"<<endl;
    }

};

class Employee{
    int id;
    string name;
    string dept;
    int salary;

    public:
    //default cons
    Employee(){
        id = 0;
        name = "XYZ";
        dept = "YY";
        salary = 1;
    }
    // fully para..
    Employee(int id,string name,string dept,int salary){
        cout<<"Fully"<<endl;
        this->id = id;
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }
    // overloaded constructor 
    Employee(string name,string dept){
          cout<<"overloaded 1"<<endl;
        this->name = name;
        this->id = id;
    }
     // overloaded constructor 
    Employee(int id,int salary){
          cout<<"overloaded 2"<<endl;
        this->dept = dept;
        this->salary = salary;
    }

    void display(){
        cout<<name<<id<<salary<<dept<<endl;
    }


};

int main(){

    Employee e1;
    Employee e2(101,"Indresh","CSE",100);
    Employee e3("Shyam","IT");
    Employee e4(101,200);

    e1.display();
    e2.display();
    e3.display();
    e4.display();

    // ambiguity 
 //   A a1();
    // Student s(10);
    // s.display();
    //  Student s2(101,200);
    //  Student s3(101,"Indresh");
    // s.display();
    // s2.display();
    // s3.display();
}
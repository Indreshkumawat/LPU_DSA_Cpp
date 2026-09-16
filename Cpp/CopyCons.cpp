#include <iostream>
using namespace std;
// class Student
// {
//      public:
//     int marks;
//     int rollNo;
   
//     Student(int marks,int rollNo){
//         this->marks = marks;
//         this->rollNo = rollNo;
//     }

//     Student(const Student& st){
//         marks = st.marks;
//         rollNo = st.rollNo;
//         cout<<"Hello"<<endl;
//     }
//     void display(){
//         cout<<"Marks: "<<marks<<" "<<"RollNo: "<<rollNo;
//     }

// };

class Rectangle{
    int lenght;
    int breadth;
    const float pie;

    public:
    // initializer list
    Rectangle(int l,int b,int pi):lenght(l),breadth(b),pie(pi){
        cout<<"Constructor executed!!!"<<endl;
    }

    void area(){
        cout<<"area: "<<pie*lenght*breadth;
    }

};

int main(){
//     Student s1(95,101);
//    // Student s2 = s1;
//    Student s2(s1);
//     s1.display();
//     s2.display();

    // s2.marks = 150;
    // s2.display();

    Rectangle r1(10,20,3.14);
    r1.area();
}

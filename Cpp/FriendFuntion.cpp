#include<iostream>
using namespace std;
// class student{
//   int x = 10;
//   int y = 20; 
//  friend void display(student s1);
// };
// void display(student s1){
//     cout<<s1.x;
//     cout<<s1.y;
// }

class student{
    int marks;

    public:
    void setMarks(int m){
        marks = m;
    }
    friend void compareMarks(student s1,student s2);
    friend class Teacher;
};

void compareMarks(student s1,student s2){
    if(s1.marks > s2.marks){
        cout<<"Student 1 wins";
    }else{
        cout<<"Student 2 wins";
    }
        
}

class Teacher{
    public:
    void showMarks(student s1){
        cout<<s1.marks;
    }
};
int main(){
    student  s1;
  //  student s2;
    s1.setMarks(30);
    // s2.setMarks(55);
    // compareMarks(s1,s2);

    Teacher t1;
    t1.showMarks(s1);



} 
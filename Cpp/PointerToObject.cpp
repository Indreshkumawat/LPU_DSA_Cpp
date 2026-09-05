#include <iostream>
using namespace std;
class intrest{
    public:
    int rate;
    intrest(int rate){
        this -> rate = rate;
    }
    void printRate(int x){
        this -> rate *= rate;
    }
    void display(){
        cout << this -> rate;
    }
};
class student{
    public:
    int marks;
    student(int marks){
        this->marks = marks;
    }
    void increaseMarks(int x){
        this -> marks += x;
    }
    // void greet(){
    //     cout << "Happy teachers day!!";
    // }
    void display(){
        cout << this->marks; // this pointer
    }

};

int main(){
    // student s1(28);   // static obj.
    // student *p = &s1;
    // // cout << s1.marks<<endl;
    // // cout << (*p).marks<<endl; // we can do like this 
    // // cout << (p)->marks<<endl;  // we can do like this also 
    // student *s2 = new student(45); // dynamic obj.
    // // cout << s2-> marks<<endl;
    // // s2->greet();
    // s2 ->increaseMarks(30);
    // s2->display();
    intrest *i1 = new intrest(4);
    cout << i1->rate<<endl;
    i1->printRate(45);
    i1-> display();
}
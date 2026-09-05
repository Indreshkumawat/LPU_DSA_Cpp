#include <iostream>
using namespace std;

class student{
    public:
    int marks;
    student(){}
    student(int marks){
        this -> marks = marks;
    }
    void display(){
        cout << this -> marks << endl;
    }
};
int main(){
    student arr[5];
    for(int i = 0; i<5;i++){
        int marks;
        cin>> marks;
        student s(marks);
        arr[i] = s;
    }
    for(int i = 0;i<5;i++){
        arr[i].display();
    }
}
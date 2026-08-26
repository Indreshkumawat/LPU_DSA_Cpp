#include <iostream>
using namespace std;

class Student{
    public:
    int id;
    static int count;
    void increaseCount(){
        count++;
    }
    void displayCount(){
        cout<<count;
    }
};

int Student::count = 8;
int main(){
    // Student s1;
    // s1.increaseCount();
    // Student s2;
    // s2.increaseCount();
    // s2.increaseCount();
    // Student s3;
    // s3.increaseCount();
    // Student s4;
    // s4.increaseCount();

    // s2.displayCount();
    // s3.displayCount();

   // s4.displayCount();

   cout<<Student::count;


}

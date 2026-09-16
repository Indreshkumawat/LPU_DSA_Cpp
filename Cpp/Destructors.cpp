#include <iostream>
using namespace std;
class Student{
    int *arr;
    public:
    Student(){
        arr = new int[5];
        cout<<"Constructor called"<<endl;
    }
    ~Student(){
        delete[] arr;
        cout<<"Destructor called"<<endl;
    }
    void show(){
        cout<<"In show function"<<endl;
       
    }
};
int main(){
    Student s1;
    cout<<"IN the main function..."<<endl;
    s1.show();
}

#include<iostream>
using namespace std;

class Student{
    public:
    int marks;
};
int main(){
//     string s = "i love c++ programming";

//   int pos =  s.find("c++");
//  //  cout<<pos;
//   // cout<<s.substr(pos,4);

//    s.insert(7,"Java,");
//    cout<<s;

Student arr[3];

arr[0].marks = 10;
arr[1].marks = 20;
arr[2].marks = 30;

//cout<<arr[0].marks;

Student *p = arr;
cout<<(*p).marks<<endl;
cout<<(p+1)->marks<<endl;


}
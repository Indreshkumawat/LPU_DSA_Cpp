#include<iostream>
using namespace std;
class Number{
    int val;
    public:
    Number(int val){
        this->val = val;
    }

    operator int(){
        return val;
    }
    void display(){
        cout<<"Val = "<<val<<endl;
    }
};
class Time{
    int hours;
    public:
    Time(int h){
       hours = h;
    }

    operator int(){
        return hours*60;
    }

    void display(){
        cout<<"hours = "<<hours<<endl;
    }

};

class Distance{
    int m;
    public:
    Distance(){

    }
    Distance(int m){
        this->m = m;
    }
    Distance operator +(Distance d){
        Distance temp;
        temp.m = m + d.m;
        return temp;
    }

     operator int(){
        return m;
    }


    void display(){
        cout<<m<<endl;
    }
};
int main(){

    Distance d1(10);
    Distance d2(30);

    Distance d3 = d1 + d2;

    int dist = d3;

    cout<<dist;

   // d3.display();
    //  int a = 10;
    // Number n1 = a;

    // n1.display();

    // int b = n1;
    // cout<<b;

    // Number n = a;

    // int b =  20;

    // n = b;

    // n = 500;

    // n1.display();

    // Time t(2);
    // t.display();
    // int minutes = t;
    // cout<<minutes;
}
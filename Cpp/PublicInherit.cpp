#include<iostream>
using namespace std;
class Parent{
    public:
    int publicData = 10;
};
class Child: public Parent{
    public:
    void show(){
        //publicData = 50;
        cout<<publicData<<endl;
    }
};
// class Random{
//     public:
//     void display(){
//         Parent::publicData = 50;
//     }
// };

int main(){
    Child c;
    c.show();
    c.publicData = 100;
    c.show();
}

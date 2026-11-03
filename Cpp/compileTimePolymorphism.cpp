#include<iostream>
using namespace std;
class Car{
    public:
   virtual void company(){
        cout<<"Car: "<<endl;
    }
};
class BMW: public Car{
    public:
    void company(){
        cout<<"BMW "<<endl;
    }
};
int main(){
    Car *c = new BMW();
    c->company();
}
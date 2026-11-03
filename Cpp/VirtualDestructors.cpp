#include<iostream>
using namespace std;
class Parent{
    public:
    virtual ~Parent(){
        cout<<"Parent class destructor"<<endl;
    }
};
class child: public Parent{
    public:
     ~child(){
        cout<<"Child class destructor"<<endl;
     }

};
int main(){
    Parent *c = new child();
    delete c;
}

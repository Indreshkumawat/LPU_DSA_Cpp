#include <iostream>
using namespace std;
int main(){
    int a = 50;
    cout<<a<<endl;

    int b = a;

    int &ref = a;
    cout<<ref<<endl;

    ref = 60;
    cout<<a<<endl;
    cout<<b<<endl;

    b = 100;

    cout<<a<<endl;
    cout<<b<<endl;


    cout<<"Address of a : "<<&a<<endl;
    cout<<"Address of res : "<<&ref<<endl;


    int x = 30;
    int z = 40;
    int &y = x;

    y = z;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

    
}
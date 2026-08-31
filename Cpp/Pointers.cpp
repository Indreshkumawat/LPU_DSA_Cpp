#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int *p = &a;

    *p = b;

    p = &b;

    cout << *p;
    cout << a;
    cout << b; 

    // cout <<a<<endl;  //10 right
    // cout << &a << endl; //100  right
    // cout << *p << endl;  //10  right
    // cout << p << endl; //  100  right
    // cout << &p << endl; // 100  //wrong
}
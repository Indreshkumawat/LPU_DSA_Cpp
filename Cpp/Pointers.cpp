#include <iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int b = 20;
    // int *p = &a;

    // *p = b;

    // p = &b;

    // cout << *p;
    // cout << a;
    // cout << b; 

    // cout <<a<<endl;  //10 right
    // cout << &a << endl; //100  right
    // cout << *p << endl;  //10  right
    // cout << p << endl; //  100  right
    // cout << &p << endl; // 100  //wrong

    int arr[] = {2,5,8,92,6};

    int *p = &arr[0];

   // cout<<p<<endl;

    // cout<<p+1<<endl;
    // cout<<p+2<<endl;

    // cout<<*p+1;

    cout<<*(p+2);


    //  int *q = &arr[4];

    // cout<<q-p;
    


    // cout<<p+1;

    // cout<<arr;
}
#include <iostream>
using namespace std;
int main()
{
    // int x = 10;
    // int *p = &x;
    // int *q = &x;

    // *p = 20;
    // *q = 30;
    // cout<<x;

    int arr[] = {10,20,30};

    int *p = arr;

    cout<<(*p)++<<endl;

    cout<<*p;

    cout<<arr[0];


}
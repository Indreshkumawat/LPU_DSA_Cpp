#include<iostream>
using namespace std;

int main(){
    int *a = new int;
    int *b = new int(100);

    *a = 100;

    cout<<*a;
    cout<<*b;
}
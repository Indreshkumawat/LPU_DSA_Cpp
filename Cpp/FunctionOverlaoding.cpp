#include <iostream>
#include<iomanip>
using namespace std;

int x = 25;

int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int sum(int a,int b,int c,int d){
    return a+b+c+d;
}
double sum(double a,double b){
    return a + b;
}


int area(int side){
    return side*side;
}
int area(int l,int b){
    return l*b;
}
double area(double radius){
    return 3.14*radius*radius;
}
void fn(){
    x = 20;
    cout<<x;
}

void fn2(){
    cout<<x;
    // cout<<y;
}


int main(){
    // int a = 10;
    // int b = 20;
    // int c = 24;
    // int d = 36;

    // cout<<sum(a,b);
    // cout<<sum(12.11,13.99);

    // cout<<area(20);
    // cout<<area(23,56);
    // cout<<area(2.3);

    fn();
    fn2();

}
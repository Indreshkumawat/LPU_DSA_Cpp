#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(int r = 0,int i = 0){
        real = r;
        imag = i;
    }

    // standard way to add two objects --> 
    // Complex add(Complex c){
    //     Complex ans;
    //     ans.real = real + c.real;
    //     ans.imag = imag + c.imag;

    //     return ans;
    // }

    // operator overloading --->

    Complex operator +(Complex c){
         Complex ans;
        ans.real = real + c.real;
        ans.imag = imag + c.imag;

        return ans;
    }
    Complex operator -(Complex c){
         Complex ans;
        ans.real = real - c.real;
        ans.imag = imag - c.imag;

        return ans;
    }
    
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    
};
int main(){
    Complex c1(3,4);
    Complex c2(5,8);
    c1.display();
    c2.display();

    // Complex c3 = c1.add(c2);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    c4.display();




}
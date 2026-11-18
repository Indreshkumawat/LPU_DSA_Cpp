#include<iostream>
using namespace std;
// template<typename T>
template<typename T1, typename T2>
// class Calculator{
//     T n1;
//     T n2;
//     public:
//     Calculator(T a, T b){
//         n1 = a;
//         n2 = b;
//     }
//     T Sum(){
//         return n1 + n2;
//     }
//     T Subtract(){
//         return n1 - n2;
//     }
//     T Multiply(){
//         return n1 * n2;
//     }
// };
class Student
{
    T1 rollNO;
    T2 name;

public:
    Student(T1 r, T2 n)
    {
        rollNO = r;
        name = n;
    }
    void display()
    {
        cout << rollNO << " " << name;
    }
};
int main(){
    // Calculator<int> c(12, 14);
    // Calculator<double> d(2.5, 1.5);
    // cout<<c.Sum()<<endl;
    // cout<<c.Subtract()<<endl;
    // cout<<c.Multiply()<<endl;

    // cout<<d.Sum()<<endl;
    // cout<<d.Subtract()<<endl;
    // cout<<d.Multiply()<<endl;

    
    Student<int, string> s1(10, "name");
    s1.display();
}
#include<iostream>
using namespace std;
class Shape{

    public:
    virtual double area() = 0;
    virtual void display(){
        cout<<"first select a shape : "<<endl;
    }
};
class rectangle : public Shape{
    double length;
    double breadth;
    public:
    rectangle(double l,double b){
        length = l;
        breadth = b;
    }
    double area(){
        return length*breadth;
    }
     void display(){
        cout<<"You have chosen rectangle "<<endl;
    }
};

class circle : public Shape{
    double radius;
    public:
    circle(double r){
        radius = r;
    }
    double area(){
        return 3.14*radius*radius;
    }
    void display(){
        cout<<"You have chosen circle "<<endl;
    }
};

int main(){

    Shape *s1 = new rectangle(23.5,12.7);

    cout<<s1->area()<<endl;
    s1->display();

    Shape *s2 = new circle(23.5);

    cout<<s2->area();


}
#include<iostream>
using namespace std;
// abstract class
class Animal{
    public:
    virtual void sound() = 0;
    virtual void eat() = 0;

    void run(){
        cout<<"Animals run"<<endl;
    }

};
//concrete class 
class Dog : public Animal{

    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
    void eat(){
        cout<<"Dog eat biscuits"<<endl;
    }

};
class Cat : public Animal{
    public:
    void sound() {
       cout<<"cat meowww"<<endl; 
    }
    void eat(){
        cout<<"cat drinks milk"<<endl;
    }
};

int main(){

    Animal *d = new Dog();

    d->sound();

    d->run();

    // Dog d;
    // d.sound();
    // d.eat();
    // Cat c;
    // c.eat();
    // c.sound();

}
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"animal is making the sound "<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound() override {
        cout<<"Dog is barking"<<endl;
    }
};

int main(){

   Animal* d = new Dog();

   d->sound();

    // Dog d;
    // d.sound();
    // d.Animal::sound();\
   
    

}
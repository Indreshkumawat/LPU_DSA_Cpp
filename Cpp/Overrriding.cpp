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
    void sound(){
        cout<<"Dog is barking"<<endl;
    }
};

int main(){

   // Animal* d = new Dog();
    Dog d;
    d.sound();
    d.Animal::sound();
    

}
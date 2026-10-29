#include<iostream>
using namespace std;

//MultiLevel Inheritence

// class Person{
//     public:
//     void showPerson(){
//         cout<<"I am a person"<<endl;
//     }
// };


// class Employee: public Person{
//     public:
//     void showEmployee(){
//         showPerson();
//         cout<<"I am a Employee too"<<endl;
//     }
// };
// class Manager: public Employee{
//     public:
//     void showManager(){
//         showEmployee();
//         cout<<"I am a Manager too"<<endl;
//     }
// };

// Multiple Inhertitence 

// class Father{
//     public:
//     void fatherprop(){
//         cout<<"Father's property"<<endl;
//     }
// };

// class Mother{
//     public:
//     void motherprop(){
//         cout<<"Mother's property"<<endl;
//     }
// };

// class Child: public Father, public Mother{
//     public:
//     void Childprop(){
//         // fatherprop();
//         // motherprop();
//         cout<<"child's property"<<endl;
//     }
// };

//Hierichical Inheritence

class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class Dog: public Animal{
    public:
    void Bark(){
        cout<<"Dog is barking"<<endl;
    }
};
class Cat: public Animal{
    public:
    void mewo(){
        cout<<"cat is meowing"<<endl;
    }
};
class Lion: public Animal{
    public:
    void Roar(){
        cout<<"Lion is roaring"<<endl;
    }
};

int main(){
    // Manager m1;
    // m1.showManager(); 

    // Child c;
    // c.Childprop();
    // c.fatherprop();
    // c.motherprop();

    Dog d;
    d.Bark();
    d.eat();

    Cat c;
    c.mewo();
    c.eat();

    Lion l;
    l.Roar();
    l.eat();


}
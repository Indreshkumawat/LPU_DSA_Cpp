#include <iostream>

using namespace std;
class InvalidAge{
    int age;
    public:
    InvalidAge(int a){
        age = a;
    }
    void display(){
        cout<<"Invalid age entered "<<age<<endl;
    }
};

int main(){
    // int a;
    // int b;

    // cin>>a;
    // cout<<endl;
    // cin>>b;
    // int c;

    // try
    // {

    //     if(b == 0){
    //         throw 20;
    //     }
    //     c = a / b;
    //     cout<<c<<endl;
       
    // }
    // catch(int b)
    // {
    //     cout<<"exception occuring due to "<<b;
        
    // }
    
   

    // cout<<"hello world"<<endl;

    // cout<<20+60;

    // int age;
    // cout<<"enter age :"<<endl;
    // cin>>age;

    // try{
    //     if(age < 18){
    //         throw age;
    //     }

    //     cout<<"yes your age is right to vote "<<age;

    // }
    // catch(int a){
    //     cout<<"you can't vote because your age is "<<a<<endl;

    // }

    // cout<<"Hello world"<<endl;

    // int marks;
    // cout<<"enter marks "<<endl;
    // cin>>marks;

    //  try{
    //     if(marks < 0){
    //         throw marks;
    //     }
    //     if(marks > 100){
    //         throw "Invalid marks";
    //     }
    //     if(marks >= 40 && marks <= 60){
    //         throw 10.25;
    //     }

    //     cout<<"valid marks"<<marks<<endl;

    // }
    // catch(int a){
    //     cout<<"marks cant be negative "<<a<<endl;

    // }
    // catch(const char* msg){
    //     cout<<msg<<endl;

    // }
    // catch(double d){
    //     cout<<"marks entered between 40 - 60 "<<d<<endl;
    // }

    // int age;
    // cin>>age;
    // try{
    //     if(age < 18){
    //         throw InvalidAge(age);   // InvalidAge obj(age);
    //     }
    //     cout<<"valid age "<<age<<endl;

    // }
    // catch(InvalidAge obj){
    //     obj.display();
    // }

    int choice;
    cin>>choice;

    try{
        if(choice == 1){
            throw 1;
        }
        if(choice == 2){
            throw 2.3;
        }

        if(choice == 3){
            throw 'A';
        }

         }
         //catch(int a){
    //     cout<<"integer ex."<<endl;
    // }
    // catch(double a){
    //     cout<<"double ex."<<endl;
    // }
    // catch(char a){
    //     cout<<"char ex."<<endl;

    // }
    catch(...){
        cout<<"Exception ...";
    }



}
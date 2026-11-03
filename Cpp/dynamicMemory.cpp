#include<iostream>
using namespace std;

// class Student{
//     public:
//     int *marks;

//     Student(int m){
//         marks = new int(m);
//     }
//     void display(){
//         cout<<marks;
//     }
// };

class Array{
    int *arr;
    int size;
    public:
    Array(int n){
        size = n;
        arr = new int[size];
    }

    void input(){
        for(int i = 0;i<size;i++){
            cout<<"Enter val"<<endl;
            cin>>arr[i];
        }
    }

    void display(){
       for(int i = 0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }

    ~Array(){
        delete[] arr;
    }

    
};
int main(){

//     Array nums(5);
//     nums.input();
//    nums.display();


   // Student *s = new Student();

    // s->marks = 20;

    // s->display();


  //  int *p = new int(50);
//int a = 10;

    // cout<<"Val :: "<<*p;
    // cout<<"address :: "<<p;

    // delete p;
    // int n;
    // cin>>n;

    // int *arr = new int[n];

    // for(int i = 0;i<n;i++){
    //     cout<<"enter val :"<<endl;
    //     cin>>arr[i];
    // }

    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }

    // delete[] arr;

    // arr = NULL;

    // int *ptr = new int(100);

    // delete ptr;

    // ptr = new int(200);

    // delete ptr;

    //int *ptr = new int[1000000000000];


    int *ptr = NULL;

    for(int i = 0;i<5;i++){
        ptr = new int(i);
        cout<<*ptr;
        delete ptr;
    }

    // cout<<*ptr;

    // delete ptr;


}
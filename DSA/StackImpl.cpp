#include <iostream>
using namespace std;
class Stack{
    int *arr;
    int capacity;
    int top = -1;
    public:
    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
      
    }
    void push(int val){
        if(top==-1){

        }
    }
    void peek(){

    }
    void pop(){

    }
    void size(){

    }
    
};
int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(50);
    
    cout<< s.push()<<endl;
    cout<< s.peek()<<endl;
    cout<< s.pop()<<endl;
    cout<< s.size()<<endl;


}
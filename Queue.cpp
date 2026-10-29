#include <iostream>
using namespace std;
class Queue{
    int *arr;
    int capacity;
    int front;
    int rear;
    public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }
    void enqueue(int val){
        if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front] = val;
            return;
        }
        rear++;
        arr[rear] = val;

    }
    int dequeue(){
        if(front == -1){
             cout<<"queue ie empty"<<endl;
            return -1;
        }
        if(front == rear){
            int temp = arr[front];
            front = rear = -1;
            return temp;
        }
        int temp = arr[front];
        front++;
        return temp;
    }
    int peek(){
        if(front == -1){
            cout<<"queue ie empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    int size(){

    }

}; 
int main(){
    Queue q(10);
    q.enqueue(5);
    q.enqueue(10);

    cout<<q.peek();

}   
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

    int peek(){
        if(front == -1){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[front];
    }
    int dequeue(){
        if(front  == -1){
             cout<<"Queue is empty";
            return -1;
        }
        int temp = arr[front];
        front++;
        return temp;
    }

    int size(){
          if(front  == -1){
             cout<<"Queue is empty";
            return -1;
        }
        return rear - front + 1;
    }

};

int main(){
    Queue q(15);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<q.peek();

    // cout<<q.dequeue()<<endl;
   // cout<<q.peek();

   cout<<q.size();


}
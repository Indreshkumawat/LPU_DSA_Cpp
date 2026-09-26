#include <iostream>
using namespace std;

class Queue{
     int *arr;
     int *priority;
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
    void insertAtStart(int val){
        if((front == 0 && rear == capacity-1) || (front == rear +1 )){
            cout << "queue is full"<< endl;
            return;
        }
        if(front == -1){
            front = rear = 0;
        }
        else if(front == 0){
            front = capacity -1;
        }
        else{
            front--;


        }
        arr[front] = val;
    }
    void insertAtrear(int val){
        if((front == 0 && rear == capacity-1) || (front == rear +1 )){
            cout << "queue is full"<< endl;
            return;
        }
        if(front == -1){
            front = rear = 0;
        }
        else if(rear == capacity -1){
            rear = 0;
        }
        else{
            rear++;


        }
        arr[rear] = val;
    }
    void deleteAtStart(){
        if(front == -1){
            cout<<"Empty"<<endl;
            return;
        }
        cout<<"deleted element :"<<arr[front]<<endl;
        if(front == rear){
            front = rear = -1;

        }
        else if (front == capacity -1){
            front = 0;
        }
        else{
            front++;
        }
    }
     void deleteAtRear(){
        if(front == -1){
            cout<<"Empty"<<endl;
            return;
        }
        cout<<"deleted element :"<<arr[rear]<<endl;
        if(front == rear){
            front = rear = -1;

        }
        else if (rear == 0){
            rear = capacity -1;
        }
        else{
            front++;
        }
    }
    void display(){
        if(front == -1){
            cout<<"queue is empty"<<endl;
            return;
        }
        int i = front;
        while(true){
            cout<<arr[i]<<" ";
            if(i== rear){
                break;
            }
            i = (i+1)%capacity;
        }
        cout<<endl;
    }

    

};
int main(){
    Queue q(10);
    q.insertAtStart(12);
    q.insertAtStart(2);
    q.insertAtrear(22);
    q.deleteAtStart();
    q.deleteAtRear();
    q.display();
    return 0;
}
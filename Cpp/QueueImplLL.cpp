#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int d){
        data = d;
        next = NULL;
    }

};
class Queue{
    Node* front;
    Node* rear;
    int size;
    public:
    Queue(){
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void enqueue(int data){
        Node* newNode = new Node(data);
         size++;
        if(front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
       
    }

    int peek(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    int dequeue(){
         if(front == NULL ){
                cout << "queue is empty"<< endl;
                return -1;  
            }
            Node* temp = front;
            if(rear == front){
                rear = NULL;
            }
            front = front -> next;
            int data = temp->data;
            delete temp;
            size--;
            return data;
    }

    int length(){
        return size;
    }

};
int main(){
    Queue q;
    q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);
    // q.enqueue(40);
    cout<<q.peek();
    cout<<q.length();
    cout<<endl;
    cout<<q.dequeue();
    cout<<endl;
    cout<<q.peek();
    cout<<endl;
    cout<<q.length();
    cout<<endl;

}
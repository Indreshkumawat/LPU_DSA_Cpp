#include <iostream>
using namespace std;
class Queue{
     int *arr;
     int *priority;
    int capacity;
    int size;

    public:
     Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        priority = new int[capacity]; 
        size  =-1;
    }

    void enqueue(int data,int p){
        if(size == capacity - 1){
            cout<<"queue is full";
            return;
        }
        size++;
        arr[size] = data;
        priority[size] = p;
    }
    int dequeue(){
        int index = 0;
        for(int i = 0;i<=size;i++){
            if(priority[i] < priority[index]){
                index = i;
            }
        }
        int ans = arr[index];

        for(int i = index;i<size;i++){
            arr[i] = arr[i+1];
            priority[i] = priority[i+1];
        }

        size--;
        return ans;

    }
    int peek(){
         int index = 0;
        for(int i = 0;i<=size;i++){
            if(priority[i] < priority[index]){
                index = i;
            }
        }

        return arr[index];
    }

};
int main(){
   Queue q(5);

   q.enqueue(12,5);
   q.enqueue(23,2);
   q.enqueue(21,4);
   cout<<q.peek();

   cout<<q.dequeue();

    cout<<q.peek()<<endl;

   cout<<q.dequeue();

   cout<<q.dequeue();
   cout<<q.peek();

}

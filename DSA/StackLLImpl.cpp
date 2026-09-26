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
class Stack{
    Node* top;
    int count;
    public:
    Stack(){
        top = NULL;
        count = 0;
    }

    void push(int val){
       Node* newNode = new Node(val);
       newNode->next = top;
       top = newNode;
       count++;
    }
    int pop(){
          if(top == NULL){
                cout << "LL is empty"<< endl;
                return -1;  
            }
            count--;
            if(top -> next == NULL){
                int temp = top->data;
                delete top;
                top = NULL;
                return temp;
            }
            Node* temp = top;
            top = top -> next;
            int val = temp->data;
            delete temp;
            
            return val;
    }
    int peek(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    int size(){
        return count;
    }

}; 

int findMiddle(Stack s){

}
int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek();
    cout<<s.pop();
    cout<<s.pop();
    cout<<s.peek();
    cout<<s.size();
}
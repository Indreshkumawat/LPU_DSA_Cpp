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
    Node *top;
    int count =1;
    public:
    Stack(){
        top = NULL;
     }
     
    
}
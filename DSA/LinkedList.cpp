#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    void setData(){
        int d;
        cout<<"Enter data for this node :"<<endl;
        cin>>d;
        data = d;
    }
};
int main(){
  // Node *n1 = new Node(); 

//    n1->setData();

//    cout<<n1->data;

    int x = 20;
    int *p = &x;

   cout<<x<<endl;
   cout<<&x<<endl;
   cout<<*p<<endl;
   cout<<p<<endl;
   cout<<&p<<endl;



}
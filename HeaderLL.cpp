#include<iostream>
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

void  insertAtStart(Node* header,int val){
    Node* newNode = new Node(val);

    newNode->next = header->next;
    header->next = newNode;

    (header->data)++;
}
void insertAtLast(Node* header,int val){
    Node* newNode = new Node(val);

    (header->data)++;

    if(header->next == NULL){
        header->next = newNode;
        return;
    }

    Node* temp = header->next;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtPos(Node* header,int pos,int val){
    Node* newNode = new Node(val);


// empty ll
    if(header->next == NULL && pos == 1){
        header->next = newNode;
        return;
    }

    if(pos == 1){
        insertAtStart(header,val);
        return;
    }

    Node* temp = header->next;

    int count = 1;

    while(count< pos-1){
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;

    temp->next = newNode;
}



  void display(Node *header){
    Node* temp = header->next;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
          cout<<endl;
    }
  

int main(){

    Node* header = new Node(0);

    // insertAtStart(header,10);
    // insertAtStart(header,20);
    // display(header);
    // cout<<header->data;

    // insertAtLast(header,10);
    // display(header);
    // insertAtLast(header,20);
    // display(header);
    // insertAtLast(header,30);
    // display(header);
    // insertAtLast(header,40);
    // display(header);
    // insertAtLast(header,50);
    // display(header);
    // cout<<header->data;

    // insertAtLast(header,60);
    // display(header);
    // cout<<header->data;

    insertAtPos(header,1,10);
    insertAtPos(header,2,10);
    insertAtPos(header,3,10);

    insertAtPos(header,3,20);
    display(header);






   
}
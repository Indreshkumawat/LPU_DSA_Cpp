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

void insertAtStart(Node* header,int val){
    Node *newNode = new Node(val);
    // there is not need to handle the empty case explicitly
    // if(header->next == NULL){
    //     header->next = newNode;
    //     return;
    // }
    (header->data)++;
    newNode->next = header->next;
    header->next = newNode;
}

void insertAtLast(Node* header,int val){
    Node *newNode = new Node(val);
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

void display(Node* header){
    Node* temp = header->next;
     while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
          cout<<endl;
}

void insertAtPos(Node* header,int pos,int val){

    if(pos == 1 || header->next == NULL){
        insertAtStart(header,val);
        return; // this too 
    }
   

    Node* temp = header->next;

    int count = 1;

    while(temp != NULL && count< pos-1){
        temp = temp->next;
        count++;
    }

    if(temp == NULL){
        cout<<"Pos is invalid !!!"<<endl;
        return;
    }

    Node* newNode = new Node(val);

    (header->data)++;

    newNode->next = temp->next;

    temp->next = newNode;

}

void deleteFromStart(Node * header){
    if(header->next == NULL){  // this line too 
        cout<<"LL is empty"<<endl;
        return;
    }
    Node* temp = header->next;
    header->next = temp->next;
    temp->next = NULL;
    delete temp;
    (header->data)--;
}

void deleteFromlast(Node * header){
    if(header->next == NULL){
        return;
    }
    if(header->next->next == NULL){
        delete header->next;
         header->next = NULL; // this line too 
        return;
    }
    Node* curr = header->next;

    while(curr->next->next != NULL){
        curr = curr->next;
    }

    Node* temp = curr->next;
    curr->next = NULL;  // this line 
    delete temp;

    (header->data)--;
}



int main(){
    Node *header = new Node(0);

    
    // Node* n1 = new Node(10);
    // header->next = n1;
    // Node* n2 = new Node(20);
    // Node* n3 = new Node(30);
    // Node* n4 = new Node(40);
    // Node* n5 = new Node(50);

    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    // n4->next = n5;

    // insertAtStart(header,10);
    // insertAtStart(header,20);
    // insertAtStart(header,30);
    // insertAtStart(header,40);
    // insertAtStart(header,50);
    // display(header);
    // cout<<"count of nodes"<<header->data;


    insertAtLast(header,10);
    insertAtLast(header,20);
    insertAtLast(header,30);
    insertAtLast(header,40);
    insertAtLast(header,50);
    display(header);

    deleteFromlast(header);
    display(header);

}
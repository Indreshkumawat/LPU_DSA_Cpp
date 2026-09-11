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

void display(Node *header){
    
    if(header->next == header){
        cout<<"LL is empty";
    }
    Node* temp = header->next;
        while(temp != header){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
          cout<<endl;
    }

    void  insertAtStart(Node* header,int val){
    Node* newNode = new Node(val);

    newNode->next = header->next;
    header->next = newNode;

    (header->data)++;
}

 void  insertAtLast(Node* header,int val){
    Node* newNode = new Node(val);

    Node* temp = header->next;

    while(temp->next != header){
        temp = temp->next;
    }

    newNode->next = header;
    temp->next = newNode;
    (header->data)++;
}
void insertAtPos(Node* header,int pos,int val){
    
    if(pos == 1){
        insertAtStart(header,val);
        return;
    }

    Node* temp = header->next;

    int count = 1;

    while(temp != header && count< pos-1){
        temp = temp->next;
        count++;
    }
    
    if(temp == header){
        cout<<"You are fool give right pos !!!sry "<<endl;
        return;
    }

     Node* newNode = new Node(val);
    (header->data)++;

    newNode->next = temp->next;

    temp->next = newNode;
    

}

void deleteFromStart(Node* header){
    if(header->next == header){
        cout<<"LL is empty"<<endl;
        return;
    }
    Node* temp = header->next;
    header->next = temp->next;
    temp->next = NULL;
    delete temp;
    (header->data)--;
}

void deleteFromLast(Node* header){
    if(header->next == header){
        cout<<"LL is empty"<<endl;
        return;
    }
    Node* temp = header->next;

    while(temp->next->next != header){
        temp = temp->next;
    }

    Node* curr = temp->next;

    temp->next = header;

    curr->next = NULL;
    delete curr;
    (header->data)--;
}

void deleteFromPos(Node* header,int pos){
    
    // if(pos == 1){
    //     insertAtStart(header,val);
    //     return;
    // }

    // Node* temp = header->next;

    // int count = 1;

    // while(temp != header && count< pos-1){
    //     temp = temp->next;
    //     count++;
    // }
    
    // if(temp == header){
    //     cout<<"You are fool give right pos !!!sry "<<endl;
    //     return;
    // }

    //  Node* newNode = new Node(val);
    // (header->data)++;

    // newNode->next = temp->next;

    // temp->next = newNode;
    

}




int main(){

    Node* header = new Node(0);
    header->next = header;


     insertAtStart(header,10);
     insertAtLast(header,20);
     insertAtLast(header,30);
     insertAtLast(header,40);
     insertAtLast(header,50);
    display(header);
    cout<<header->data<<endl;

    // insertAtPos(header,8,35);
    // display(header);
  //  cout<<header->data;

//   deleteFromStart(header);
//   display(header);

deleteFromLast(header);
 display(header);
  cout<<header->data;


    
}
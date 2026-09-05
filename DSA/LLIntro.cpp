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

Node* insertAtStart(Node* head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    return head;
}
Node* insertAtLast(Node* head,int val){
    Node* newNode = new Node(val);
     Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* insertAtPos(Node* head,int pos,int val){
    Node* newNode = new Node(val);

    Node* temp = head;

    int count = 1;

    while(count< pos-1){
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;

    temp->next = newNode;

    return head;


}
    Node* deleteAtStart(Node* head){
        if(head == NULL || head -> next == NULL){
                cout << "LL is empty"<< endl;
                return NULL;  
            }
            Node* temp = head;
            head = head -> next;
            delete temp;
            return head;
        } 
    Node* deleteAtLast(Node* head){
        if(head == NULL || head -> next == NULL){
                cout << "LL is empty"<< endl;
                return NULL;  
            }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp -> next;
        }
        Node* ford = temp->next;
        temp->next = NULL;
        delete ford;
        return head;
        } 
    Node* deleteAtValue(Node* head, int value){
        if(head == NULL){
                cout << "LL is empty"<< endl;
                return NULL;  
            }
        
        Node* prev = NULL;
        Node* curr = head;
        if (curr->data == value){
            head = head -> next;
            curr -> next == NULL;
            if(head == NULL){
                cout << "LL is empty"<< endl;
            }
            delete curr;
            return head;
        }
        while(curr->data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev-> next = curr -> next;
        curr -> next  = NULL;
        delete curr;
        return head;

    }

   void display(Node *head){
        Node *temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
int main(){

    Node *head = NULL;

    Node *n1 = new Node(20); 
    head = n1;

    Node *n2 = new Node(30);

    Node *n3 = new Node(40);

    Node *n4 = new Node(50);


    n1->next = n2;

    n2->next = n3;

    n3->next = n4;

    // insertAtPos(head,4,100);

    // display(head);


    // head = deleteAtStart(head);
    // display(head);

    // head = deleteAtLast(head);
    // display(head);

    head = deleteAtValue(head,30);
    display(head);
   
}
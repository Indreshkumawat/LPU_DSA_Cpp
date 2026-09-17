#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};
void display(Node *head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << endl;
}
Node *insertAtStart(Node *head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        return newNode;
    }

    newNode->next = head;
    head->prev = newNode;

    return newNode;
}
Node *insertAtLast(Node *head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        return newNode;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

Node *insertAtPos(Node *head, int pos, int val)
{

    if (pos <= 0)
    {
        cout << "Invalid pos.." << endl;
        return head;
    }
    if (pos == 1)
    {
        return insertAtStart(head, val);
    }

    Node *newNode = new Node(val);

    Node *temp = head;

    int count = 1;

    while (temp != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        cout << "Invalid case !!" << endl;
        return head;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;

    return head;
}

Node *deleteAtStart(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }
    Node *temp = head;
    head = head->next;

    head->prev = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}

Node *deleteAtLast(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    return head;
}

Node* deleteAtPosition(Node* head, int position)
{

    if (head == NULL)
    {
        cout << "List is empty"<<endl;
        return head;
    }

    if (position <= 0)
    {
        cout << "Invalid position\n";
        return head;
    }

    // Delete first node
    if (position == 1)
    {
        return deleteAtStart(head);
    }

    Node *temp = head;

    // Reach the node to be deleted
    for (int i = 1; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Position does not exist
    if (temp == NULL)
    {
        cout << "Invalid position\n";
        return head;
    }

    // Connect previous node to next node
    temp->prev->next = temp->next;

    // If temp is not the last node
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;

    return head;
}
int main()
{
    Node *head = NULL;
    // Node* n1 = new Node(10);
    // head = n1;
    // Node* n2 = new Node(20);
    // Node* n3 = new Node(30);
    // Node* n4 = new Node(40);
    // Node* n5 = new Node(50);
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    // n4->next = n5;

    // n2->prev = n1;
    // n3->prev = n2;
    // n4->prev = n3;
    // n5->prev = n4;

    // display(head);
    head = insertAtStart(head, 5);
    head = insertAtStart(head, 10);
    head = insertAtStart(head, 20);
    head = insertAtStart(head, 30);
    display(head);

    // head = insertAtLast(head,2);
    //  display(head);

    // head = insertAtPos(head,7,22);
    //  display(head);

    // head = deleteAtLast(head);

    head = deleteAtPosition(head,3);
    display(head);
}

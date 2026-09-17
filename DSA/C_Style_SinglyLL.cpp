// Singly LinkedList

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int d) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = d;
    newNode->next = NULL;

    return newNode;
}

struct Node* insertAtStart(struct Node* head, int val) {

    struct Node* newNode = createNode(val);

    newNode->next = head;
    head = newNode;

    return head;
}

struct Node* insertAtLast(struct Node* head, int val) {

    struct Node* newNode = createNode(val);

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

struct Node* insertAtPos(struct Node* head, int pos, int val) {

    if (pos <= 0) {
        printf("Invalid pos..\n");
        return head;
    }

    if (pos == 1) {
        return insertAtStart(head, val);
    }

    if (head == NULL) {
        printf("Invalid case !!\n");
        return head;
    }

    struct Node* temp = head;

    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Pos is invalid !!!\n");
        return head;
    }

    struct Node* newNode = createNode(val);

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

struct Node* deleteAtStart(struct Node* head) {

    if (head == NULL) {
        printf("LL is empty\n");
        return NULL;
    }

    struct Node* temp = head;

    head = head->next;

    temp->next = NULL;

    free(temp);

    return head;
}

struct Node* deleteAtLast(struct Node* head) {

    if (head == NULL) {
        printf("LL is empty\n");
        return NULL;
    }

    // Only one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct Node* ford = temp->next;

    temp->next = NULL;

    free(ford);

    return head;
}

struct Node* deleteAtValue(struct Node* head, int value) {

    if (head == NULL) {
        printf("LL is empty\n");
        return NULL;
    }

    struct Node* prev = NULL;
    struct Node* curr = head;

    // If first node contains the value
    if (curr->data == value) {

        head = head->next;

        curr->next = NULL;

        free(curr);

        return head;
    }

    while (curr != NULL && curr->data != value) {
        prev = curr;
        curr = curr->next;
    }

    // Value not found
    if (curr == NULL) {
        printf("Value not found\n");
        return head;
    }

    prev->next = curr->next;

    curr->next = NULL;

    free(curr);

    return head;
}

struct Node* deleteAtPos(struct Node* head, int pos) {

    if (head == NULL) {
        printf("LL is empty\n");
        return NULL;
    }

    if (pos <= 0) {
        printf("Invalid pos..\n");
        return head;
    }

    // Delete first node
    if (pos == 1) {
        return deleteAtStart(head);
    }

    struct Node* temp = head;

    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    // Position does not exist
    if (temp == NULL || temp->next == NULL) {
        printf("Pos is invalid !!!\n");
        return head;
    }

    struct Node* curr = temp->next;

    temp->next = curr->next;

    curr->next = NULL;

    free(curr);

    return head;
}

void display(struct Node* head) {

    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {

    struct Node* head = NULL;

    struct Node* n1 = createNode(20);
    head = n1;

    struct Node* n2 = createNode(30);
    struct Node* n3 = createNode(40);
    struct Node* n4 = createNode(50);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    display(head);

    // head = insertAtStart(head, 10);
    // display(head);

    // head = insertAtLast(head, 60);
    // display(head);

    // head = insertAtPos(head, 3, 25);
    // display(head);

    // head = deleteAtStart(head);
    // display(head);

    // head = deleteAtLast(head);
    // display(head);

    // head = deleteAtValue(head, 30);
    // display(head);

    head = deleteAtPos(head, 3);
    display(head);

    return 0;
}



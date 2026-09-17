#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node* createNode(int d) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = d;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void display(struct Node* head) {

    if (head == NULL) {
        printf("LL is empty\n");
        return;
    }

    struct Node* temp = head;

    // Forward
    while (temp->next != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("%d\n", temp->data);

    // Backward
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->prev;
    }

    printf("NULL\n");
}

struct Node* insertAtStart(struct Node* head, int val) {

    struct Node* newNode = createNode(val);

    if (head == NULL) {
        return newNode;
    }

    newNode->next = head;

    head->prev = newNode;

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

    newNode->prev = temp;

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

    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

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

    if (head != NULL) {
        head->prev = NULL;
    }

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

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    temp->prev = NULL;

    free(temp);

    return head;
}

struct Node* deleteAtValue(struct Node* head, int value) {

    if (head == NULL) {
        printf("LL is empty\n");
        return NULL;
    }

    struct Node* curr = head;

    // If head contains the value
    if (curr->data == value) {
        return deleteAtStart(head);
    }

    while (curr != NULL && curr->data != value) {
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Value not found\n");
        return head;
    }

    curr->prev->next = curr->next;

    if (curr->next != NULL) {
        curr->next->prev = curr->prev;
    }

    curr->next = NULL;
    curr->prev = NULL;

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

    if (pos == 1) {
        return deleteAtStart(head);
    }

    struct Node* temp = head;

    int count = 1;

    while (temp != NULL && count < pos) {

        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Pos is invalid !!!\n");
        return head;
    }

    temp->prev->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    temp->next = NULL;
    temp->prev = NULL;

    free(temp);

    return head;
}

int main() {

    struct Node* head = NULL;

    // struct Node* n1 = createNode(10);
    // head = n1;
    //
    // struct Node* n2 = createNode(20);
    // struct Node* n3 = createNode(30);
    // struct Node* n4 = createNode(40);
    //
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    //
    // n2->prev = n1;
    // n3->prev = n2;
    // n4->prev = n3;

    head = insertAtStart(head, 10);
    head = insertAtStart(head, 20);
    head = insertAtStart(head, 30);
    head = insertAtStart(head, 40);

    display(head);

    // head = insertAtLast(head, 5);
    // display(head);

    // head = insertAtPos(head, 3, 25);
    // display(head);

    // head = deleteAtStart(head);
    // display(head);

    // head = deleteAtLast(head);
    // display(head);

    // head = deleteAtValue(head, 20);
    // display(head);

    head = deleteAtPos(head, 3);
    display(head);

    return 0;
}
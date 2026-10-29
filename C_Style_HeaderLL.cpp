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

void insertAtStart(struct Node* header, int val) {

    struct Node* newNode = createNode(val);

    header->data++;

    newNode->next = header->next;
    header->next = newNode;
}

void insertAtLast(struct Node* header, int val) {

    struct Node* newNode = createNode(val);

    header->data++;

    if (header->next == NULL) {
        header->next = newNode;
        return;
    }

    struct Node* temp = header->next;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPos(struct Node* header, int pos, int val) {

    if (pos <= 0) {
        printf("Invalid pos..\n");
        return;
    }

    if (pos == 1 || header->next == NULL) {
        insertAtStart(header, val);
        return;
    }

    struct Node* temp = header->next;

    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Pos is invalid !!!\n");
        return;
    }

    struct Node* newNode = createNode(val);

    header->data++;

    newNode->next = temp->next;

    temp->next = newNode;
}

void deleteFromStart(struct Node* header) {

    if (header->next == NULL) {
        printf("LL is empty\n");
        return;
    }

    struct Node* temp = header->next;

    header->next = temp->next;

    temp->next = NULL;

    free(temp);

    header->data--;
}

void deleteFromLast(struct Node* header) {

    if (header->next == NULL) {
        printf("LL is empty\n");
        return;
    }

    // Only one actual node
    if (header->next->next == NULL) {

        free(header->next);

        header->next = NULL;

        header->data--;

        return;
    }

    struct Node* curr = header->next;

    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    struct Node* temp = curr->next;

    curr->next = NULL;

    free(temp);

    header->data--;
}

void deleteFromValue(struct Node* header, int value) {

    if (header->next == NULL) {
        printf("LL is empty\n");
        return;
    }

    struct Node* prev = NULL;
    struct Node* curr = header->next;

    // First node
    if (curr->data == value) {

        header->next = curr->next;

        curr->next = NULL;

        free(curr);

        header->data--;

        return;
    }

    while (curr != NULL && curr->data != value) {

        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Value not found\n");
        return;
    }

    prev->next = curr->next;

    curr->next = NULL;

    free(curr);

    header->data--;
}

void deleteFromPos(struct Node* header, int pos) {

    if (header->next == NULL) {
        printf("LL is empty\n");
        return;
    }

    if (pos <= 0) {
        printf("Invalid pos..\n");
        return;
    }

    if (pos == 1) {
        deleteFromStart(header);
        return;
    }

    struct Node* temp = header->next;

    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Pos is invalid !!!\n");
        return;
    }

    struct Node* curr = temp->next;

    temp->next = curr->next;

    curr->next = NULL;

    free(curr);

    header->data--;
}

void display(struct Node* header) {

    struct Node* temp = header->next;

    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {

    struct Node* header = createNode(0);

    insertAtLast(header, 10);
    insertAtLast(header, 20);
    insertAtLast(header, 30);
    insertAtLast(header, 40);
    insertAtLast(header, 50);

    display(header);

    printf("Count of nodes: %d\n", header->data);

    // insertAtStart(header, 5);
    // display(header);

    // insertAtPos(header, 3, 25);
    // display(header);

    // deleteFromStart(header);
    // display(header);

    // deleteFromLast(header);
    // display(header);

    // deleteFromValue(header, 30);
    // display(header);

    deleteFromPos(header, 3);
    display(header);

    printf("Count of nodes: %d\n", header->data);

    return 0;
}
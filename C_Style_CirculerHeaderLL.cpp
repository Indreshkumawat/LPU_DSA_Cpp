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

void display(struct Node* header) {

    if (header->next == header) {
        printf("LL is empty\n");
        return;
    }

    struct Node* temp = header->next;

    while (temp != header) {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("HEADER\n");
}

void insertAtStart(struct Node* header, int val) {

    struct Node* newNode = createNode(val);

    newNode->next = header->next;

    header->next = newNode;

    header->data++;
}

void insertAtLast(struct Node* header, int val) {

    struct Node* newNode = createNode(val);

    if (header->next == header) {

        newNode->next = header;

        header->next = newNode;

        header->data++;

        return;
    }

    struct Node* temp = header->next;

    while (temp->next != header) {
        temp = temp->next;
    }

    newNode->next = header;

    temp->next = newNode;

    header->data++;
}

void insertAtPos(struct Node* header, int pos, int val) {

    if (pos <= 0) {
        printf("Invalid pos..\n");
        return;
    }

    if (pos == 1) {
        insertAtStart(header, val);
        return;
    }

    struct Node* temp = header->next;

    int count = 1;

    while (temp != header && count < pos - 1) {

        temp = temp->next;
        count++;
    }

    if (temp == header) {
        printf("Pos is invalid !!!\n");
        return;
    }

    struct Node* newNode = createNode(val);

    newNode->next = temp->next;

    temp->next = newNode;

    header->data++;
}

void deleteFromStart(struct Node* header) {

    if (header->next == header) {
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

    if (header->next == header) {
        printf("LL is empty\n");
        return;
    }

    struct Node* temp = header->next;

    // Only one actual node
    if (temp->next == header) {

        header->next = header;

        temp->next = NULL;

        free(temp);

        header->data--;

        return;
    }

    while (temp->next->next != header) {
        temp = temp->next;
    }

    struct Node* curr = temp->next;

    temp->next = header;

    curr->next = NULL;

    free(curr);

    header->data--;
}

void deleteFromValue(struct Node* header, int value) {

    if (header->next == header) {
        printf("LL is empty\n");
        return;
    }

    struct Node* prev = header;
    struct Node* curr = header->next;

    while (curr != header && curr->data != value) {

        prev = curr;
        curr = curr->next;
    }

    if (curr == header) {
        printf("Value not found\n");
        return;
    }

    prev->next = curr->next;

    curr->next = NULL;

    free(curr);

    header->data--;
}

void deleteFromPos(struct Node* header, int pos) {

    if (header->next == header) {
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

    while (temp != header && count < pos - 1) {

        temp = temp->next;
        count++;
    }

    if (temp == header || temp->next == header) {
        printf("Pos is invalid !!!\n");
        return;
    }

    struct Node* curr = temp->next;

    temp->next = curr->next;

    curr->next = NULL;

    free(curr);

    header->data--;
}

int main() {

    struct Node* header = createNode(0);

    // Important for circular header list
    header->next = header;

    insertAtStart(header, 10);
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
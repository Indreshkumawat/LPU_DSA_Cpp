
#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int capacity;
    int top = -1;

public:
    // Constructor
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
    }

    // Push: Insert an element into the stack
    void push(int val) {
        if (top == capacity - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }

        top++;
        arr[top] = val;
    }

    // Peek: Return the top element
    int peek() {
        if (top == -1) {
            cout << "Stack is Empty!" << endl;
            return -1;
        }

        return arr[top];
    }

    // Pop: Remove and return the top element
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }

        int val = arr[top];
        top--;
        return val;
    }

    // Size: Return the number of elements
    int size() {
        return top + 1;
    }

    // Check whether stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(10);

    s.push(10);
    s.push(20);
    s.push(50);

    cout << "Top Element: " << s.peek() << endl;
    cout << "Popped Element: " << s.pop() << endl;
    cout << "Stack Size: " << s.size() << endl;
    cout << "Top Element: " << s.peek() << endl;

    return 0;
}

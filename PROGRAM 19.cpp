// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: A CODE TO IMPLEMENT THE STACK OPERATIONS: PUSH AND POP (EXPERIMENT: 19)

// CODE: 

#include <iostream>
using namespace std;

#define SIZE 5  // Maximum size of stack

class Stack {
    int arr[SIZE]; // Array to store stack elements
    int top;       // Top pointer

public:
    Stack() {
        top = -1; // Stack is empty initially
    }

    // Push operation
    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    // Display stack elements
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.display();

    s.push(40);
    s.push(50);
    s.push(60); // Overflow
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop(); // Underflow

    return 0;
}

// OUTPUT:

// 10 pushed into stack.
// 20 pushed into stack.
// 30 pushed into stack.
// Stack elements: 30 20 10 
// 30 popped from stack.
// Stack elements: 20 10 
// 40 pushed into stack.
// 50 pushed into stack.
// 60 pushed into stack.
// Stack elements: 60 50 40 20 10 
// 60 popped from stack.
// 50 popped from stack.
// 40 popped from stack.
// 20 popped from stack.
// 10 popped from stack.

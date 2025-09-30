# Aim: To Study & Implement Stack Implementation Using Array.

# Tool: VS CODE.

# Theory: 

A stack is a linear data structure in which elements can be inserted and deleted only from one side of the list, called the top. A stack follows the LIFO (Last In First Out) principle, i.e., the element inserted at the last is the first element to come out. The insertion of an element into the stack is called push operation, and the deletion of an element from the stack is called pop operation. In stack, we always keep track of the last element present in the list with a pointer called top.

The diagrammatic representation of the stack is given below: 

<img width="404" height="443" alt="image" src="https://github.com/user-attachments/assets/a7d15fd6-91be-4dd6-923b-b978ca508e67" />

## Characteristics of a Stack

Only one end, called the top, is used for both insertion and deletion.

Key operations:

Push – Adds an element to the top of the stack.

Pop – Removes the top element from the stack.

Peek/Top – Accesses the top element without removing it.

isEmpty – Checks whether the stack is empty.

isFull – Checks whether the stack is full (for fixed-size stacks).

## Applications of Stack

Some CPUs have their entire assembly language based on the concept of performing operations on registers that are stored in a stack.

Stack structure is used in the C++ run-time system.

Expression evaluation and syntax parsing.

Undo/Redo operations in text editors.

Function call management (call stack) in programming languages.

Backtracking algorithms (e.g., maze solving, puzzles).

## Implementation

A stack can be implemented using:

Array – Fixed size, easy to implement, requires overflow check.

Linked List – Dynamic size, no overflow unless memory is exhausted.

# Algorithm:

Algorithm for Stack Implementation Using Array
1. Initialize Stack

Create an array arr[SIZE] to store stack elements.

Initialize a pointer top = -1 to indicate the stack is empty.

2. Push Operation (Insert Element)

Check if the stack is full:

If top == SIZE - 1, display "Stack Overflow" and stop.

Increment top by 1.

Insert the new element at arr[top].

Display confirmation that the element is pushed.

3. Pop Operation (Remove Element)

Check if the stack is empty:

If top == -1, display "Stack Underflow" and stop.

Display the element arr[top] that is being removed.

Decrement top by 1.

4. Display Operation

Check if the stack is empty (top == -1).

If yes, display "Stack is empty".

Otherwise, traverse the array from top down to 0 and print each element.

5. Main Program

Create an object of the Stack class.

Perform operations: push(), pop(), display().

Repeat operations as needed, while handling overflow and underflow conditions.

# Conclusion:

Stack is a LIFO structure, which is useful for temporary storage and reversing data order.

Overflow and underflow conditions must be checked to prevent runtime errors.

Using arrays, the stack size is limited, while using a linked list allows dynamic growth.

Stack operations (push, pop) are simple and efficient, making stacks a fundamental data structure in programming and system applications.

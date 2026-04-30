# Interface Contracts

These declarations are intentionally prepared before implementation so the team can work in parallel. Avoid changing method names or class names after work begins unless everyone coordinates the change.

## Shared Node

File: `Node.h`

- `struct Node`
- Fields: `int data`, `Node* next`

## Member 1: Singly Linked List

Files: `LinkedList.h`, `LinkedList.cpp`

- Class: `LinkedList`
- Private data: `Node* head`
- Methods: constructor, destructor, `insertAtHead(int)`, `insertAtEnd(int)`, `deleteValue(int)`, `display() const`

## Member 2: Array Stack

Files: `Stack.h`, `Stack.cpp`

- Class: `StackArray`
- Private data: `int* arr`, `int capacity`, `int topIndex`
- Methods: constructor, destructor, `push(int)`, `pop()`, `peek() const`, `isEmpty() const`, `isFull() const`

## Member 3: Linked-List Stack

Files: `Stack.h`, `Stack.cpp`

- Class: `StackLinkedList`
- Private data: `Node* top`
- Methods: constructor, destructor, `push(int)`, `pop()`, `peek() const`, `isEmpty() const`

## Member 4: Circular Array Queue

Files: `Queue.h`, `Queue.cpp`

- Class: `QueueArray`
- Private data: `int* arr`, `int capacity`, `int frontIndex`, `int rearIndex`, `int count`
- Methods: constructor, destructor, `enqueue(int)`, `dequeue()`, `isFull() const`, `isEmpty() const`

## Member 5: Linked-List Queue

Files: `Queue.h`, `Queue.cpp`

- Class: `QueueLinkedList`
- Private data: `Node* front`, `Node* rear`
- Methods: constructor, destructor, `enqueue(int)`, `dequeue()`, `isFull() const`, `isEmpty() const`

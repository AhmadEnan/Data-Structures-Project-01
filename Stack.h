#ifndef STACK_H
#define STACK_H

#include "Node.h"

class StackArray {
private:
    int* arr;
    int capacity;
    int topIndex;

public:
    explicit StackArray(int capacity);
    ~StackArray();

    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    bool isFull() const;
};

class StackLinkedList {
private:
    Node* top;

public:
    StackLinkedList();
    ~StackLinkedList();

    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
};

#endif

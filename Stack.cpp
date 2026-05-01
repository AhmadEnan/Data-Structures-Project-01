#include "Stack.h"
#include <iostream>

// ===== Member 2: StackArray ================================================
// Implement StackArray methods in this section.

StackArray::StackArray(int capacity) {
    this->capacity = capacity;
    this->arr = new int[capacity];
    this->topIndex = -1;
}

StackArray::~StackArray() {
    delete[] arr;
}

void StackArray::push(int value) {
    if (isFull()) {
        std::cout << "Stack Overflow\n";
        return;
    }
    arr[++topIndex] = value;
}

int StackArray::pop() {
    if (isEmpty()) {
        std::cout << "Stack Underflow\n";
        return -1;
    }
    return arr[topIndex--];
}

int StackArray::peek() const {
    if (isEmpty()) {
        std::cout << "Stack is empty\n";
        return -1;
    }
    return arr[topIndex];
}

bool StackArray::isEmpty() const {
    return topIndex == -1;
}

bool StackArray::isFull() const {
    return topIndex == capacity - 1;
}

// ===== Member 3: StackLinkedList ===========================================
// Implement StackLinkedList methods in this section.

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
#include <stdexcept>

StackLinkedList::StackLinkedList() {
    top = nullptr;
};
bool StackLinkedList::isEmpty()const{
        return top==nullptr;
    };

void StackLinkedList::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
};
int StackLinkedList::pop(){
    if(isEmpty()){
        throw std::runtime_error("Stack underflow: Cannot pop from an empty stack.");
    };
    Node* temp = top;
   int value = temp->data;
    top = top->next;
    delete temp;
    return value;
};
int StackLinkedList::peek() const {
    if(isEmpty()){
        throw std::runtime_error("Stack underflow: Cannot peek from an empty stack.");
    };
    return top->data;
};
StackLinkedList::~StackLinkedList() {
    while (!isEmpty()) {
        pop();
    };
};
#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class QueueArray {
private:
    int* arr;
    int capacity;
    int frontIndex;
    int rearIndex;
    int count;

public:
    explicit QueueArray(int capacity);
    ~QueueArray();

    void enqueue(int value);
    int dequeue();
    bool isFull() const;
    bool isEmpty() const;
    void display() const;
};

class QueueLinkedList {
private:
    Node* front;
    Node* rear;

public:
    QueueLinkedList();
    ~QueueLinkedList();

    void enqueue(int value);
    int dequeue();
    bool isFull() const;
    bool isEmpty() const;
};

#endif

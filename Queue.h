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
    Node* front; //points to first element to be dequeued
    Node* rear; //points to last element in the queue

public:
    QueueLinkedList();
    ~QueueLinkedList();

    void enqueue(int value); // Add an element to the rear of the queue
    int dequeue(); // Remove and return the element at the front of the queue. If the queue is empty, return -1 .
    bool isEmpty() const; // Check if the queue is empty
     
    void display() const; //print all elements in the queue from front to rear. 
#endif
};

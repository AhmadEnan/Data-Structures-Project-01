#include<iostream>
#include "Queue.h"

// ===== Member 4: QueueArray =================================================
// Implement QueueArray methods in this section.
// Remember to explain circular index wrapping logic with meaningful comments.

//============================Queue constructor======================================
QueueArray::QueueArray(int capacity) {  
    this->capacity = capacity;
    //==================================creating the array of integer numbers to implement the queue======================
    arr = new int[capacity]; 
    frontIndex = -1;
    rearIndex = -1; //setting both indecies to -1 to show that the array is empty 
    count = 0; 
}

QueueArray::~QueueArray() { // the queue destructor to avoid waste of memory 
    delete[] arr;
}


bool QueueArray::isFull() const {
//========= the queue is full when the first index and last index of the array are occupied or the first element follows the last element=========
    return (frontIndex == 0 && rearIndex == capacity - 1) || (frontIndex == rearIndex + 1);
}


bool QueueArray::isEmpty() const {
    return count == 0;
}


void QueueArray::enqueue(int value) {
    //====================== making sure queue is not full to be able to add elements=========================
    if (!isFull()) {


        if (frontIndex == -1) { // if the queue is still empty 
            frontIndex = 0;
            rearIndex = 0;// we set the first index of the array to first and last element
            //=============== we insert the value at the begenning of the queue===========
            arr[0] = value;

        }
        else if (rearIndex == capacity - 1 || rearIndex == -1) { //if the last element of the queue is the last element of the array
            arr[0] = value;// the new rear index will be the first index 
            rearIndex = 0;
        }


        else { //other cases
            arr[++rearIndex] = value;
        }

        count++; //calculating number of elements in the queue
    }

    else {
        std::cout << "Queue is full";
    }

}


int QueueArray::dequeue() {
    if (isEmpty()) { //of queue is empty there is no elements to dequeue
        std::cout << "queue is empty"; //printing out that queue is empty 
        return -1;// returning any value
    }
    int tmp; 
    tmp = arr[frontIndex]; //saving the element to dequeue in the front index
    if (frontIndex == rearIndex) frontIndex = rearIndex = -1; 
//================if the first element is at the end of the array then the new first element will be at index 0=================
    else if (frontIndex == capacity - 1) frontIndex = 0; 

    else frontIndex++; //other cases we move the first element forward
    
    count--;

    return tmp; //returning the element that has been dequeued
}

void QueueArray::display() const { //=============displaying the elements of the queue from the first to rear=============
    if (isEmpty()) {
        std::cout << "Queue is empty"; //=========if queue is empty we print that it is empty and return 
        return;
    }

    int index = frontIndex; 
    while (true) {
        std::cout << arr[index];
        if (index == rearIndex) { //=======if we reached the rear element we break the loop=======
            break;
        }
        std::cout << " "; //====spacing between the queue elements======
        index = (index + 1) % capacity; //=========updating the index to the next element and wrapping around the array if needed==========
    }
}

// ===== Member 5: QueueLinkedList ===========================================
// Implement QueueLinkedList methods in this section.

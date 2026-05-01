#include<iostream>
#include "Queue.h"
#include <iostream>
using namespace std;
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
QueueLinkedList::QueueLinkedList() 
 {
front = nullptr;
rear = nullptr;
}
QueueLinkedList::~QueueLinkedList() // to free all nodes in queue to avoid memory leak , we loop through list and delete every node 
{
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    rear = nullptr;
}
bool QueueLinkedList::isEmpty() const // queue is empty if front is null 

{
    return front == nullptr;
}
void QueueLinkedList::enqueue(int value) //we add new element at the end and if it is empty front and rear will both point to new node otherwise new node is added after rear and rear is moved forward 
{
    Node* newNode = new Node(value);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}
int QueueLinkedList::dequeue() //we remove element from front and return its value if queue is empty we return -1 otherwise we store front node in temp variable move front to next node and if front becomes null we set rear to null as well then we delete temp node and return its value
{
    if (isEmpty()) {
        return -1; // Return -1 to indicate the queue is empty. In a real implementation, consider throwing an exception or using a more robust error handling mechanism.
    }
    Node* temp = front;
    int value = temp->data;
    front = front->next;
    
    if (front == nullptr) 
    
    {
        rear = nullptr; // If the queue becomes empty, set rear to nullptr as well.
    }
    
    delete temp;
    return value;
}
void QueueLinkedList::display() const //print all elements from front to rear 
{
    Node* current = front;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
#include "Queue.h"
#include <iostream>
using namespace std;
// ===== Member 4: QueueArray =================================================
// Implement QueueArray methods in this section.
// Remember to explain circular index wrapping logic with meaningful comments.


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
#include "LinkedList.h"
#include <iostream>
#include "Queue.h"
using namespace std;
int main() {
    // ===== LinkedList Test ========================================
    LinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtEnd(30);
    std::cout << "Linked List after insertions: ";
    list.display();
    list.deleteValue(10);
    std::cout << "Linked List after deleting 10: ";
    list.display();
    // ===== StackArray Test ========================================

    // ===== StackLinkedList Test ===================================

    // ===== QueueArray Test ========================================

    // ===== QueueLinkedList Test ===================================
QueueLinkedList q;

q.enqueue(5);
q.enqueue(30);
q.enqueue(1);
cout << "Queue content: ";
q.display();
cout << "Dequeue 1: " << q.dequeue() << endl; // Should print 5
cout << "Dequeue 2: " << q.dequeue() << endl; // Should print 30
cout << "Dequeue 3: " << q.dequeue() << endl; // Should print 1
cout << "Dequeue from empty queue: " << q.dequeue() << endl; // Should print -1

}

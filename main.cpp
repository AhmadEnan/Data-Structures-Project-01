#include "LinkedList.h"
#include <iostream>
#include "Queue.h"

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
    QueueArray queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << "Queue after insertions: ";
    queue.display();
    queue.dequeue();
    std::cout << "Queue after dequeuing: ";
    queue.display();
    // ===== QueueLinkedList Test ===================================

    return 0;
}

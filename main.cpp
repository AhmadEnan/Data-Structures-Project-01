#include "LinkedList.h"
#include "Stack.h"
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
    std::cout << "\n--- StackArray Test ---\n";
    StackArray stackArr(5);
    stackArr.push(10);
    stackArr.push(20);
    stackArr.push(30);
    std::cout << "Pushed 10, 20, 30.\n";
    std::cout << "Top element (peek): " << stackArr.peek() << "\n";
    std::cout << "Popped element: " << stackArr.pop() << "\n";
    std::cout << "Is stack empty? " << (stackArr.isEmpty() ? "Yes" : "No") << "\n";

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
QueueLinkedList q;

q.enqueue(5);
q.enqueue(30);
q.enqueue(1);
cout << "Queue content: ";
q.display();
std::cout << "Dequeue 1: " << q.dequeue() << endl; // Should print 5
std::cout << "Dequeue 2: " << q.dequeue() << endl; // Should print 30
std::cout << "Dequeue 3: " << q.dequeue() << endl; // Should print 1
std::cout << "Dequeue from empty queue: " << q.dequeue() << endl; // Should print -1

}

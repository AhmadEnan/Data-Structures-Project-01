#include "LinkedList.h"
#include "Stack.h"
#include <iostream>

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

    // ===== QueueLinkedList Test ===================================

    return 0;
}

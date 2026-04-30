#include "LinkedList.h"
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

    // ===== StackLinkedList Test ===================================

    // ===== QueueArray Test ========================================

    // ===== QueueLinkedList Test ===================================

    return 0;
}

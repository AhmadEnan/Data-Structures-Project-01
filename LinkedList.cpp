#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    Node* current = head;
    while(current)
    {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedList::insertAtHead(int value)
{
    if(!head)
    {
        head = new Node(value);
    }
    else
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList::insertAtEnd(int value)
{
    if(!head)
    {
        head = new Node(value);
    }
    else
    {
        Node* current = head;
        while(current->next)
        {
            current = current->next;
        }
        current->next = new Node(value);
    }
}

void LinkedList::deleteValue(int value)
{
    while (head && head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    Node* current = head;
    while (current && current->next)
    {
        if (current->next->data == value)
        {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        {
            current = current->next;
        }
    }
}

void LinkedList::display() const
{
    Node* current = head;
    while(current)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

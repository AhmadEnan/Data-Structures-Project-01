# Deliverable Checklist

Use this checklist before final submission.

## Required Files

- [ ] `Node.h` defines the shared linked node structure.
- [ ] `LinkedList.h` declares the singly linked list class.
- [ ] `Stack.h` declares both stack classes.
- [ ] `Queue.h` declares both queue classes.
- [ ] `LinkedList.cpp` implements linked list methods.
- [ ] `Stack.cpp` implements stack methods.
- [ ] `Queue.cpp` implements queue methods.
- [ ] `main.cpp` instantiates and tests each data structure.

## Required Functionality

- [ ] Linked list implements `insertAtHead()`.
- [ ] Linked list implements `insertAtEnd()`.
- [ ] Linked list implements `deleteValue()`.
- [ ] Linked list implements `display()`.
- [ ] Array stack uses a dynamic array.
- [ ] Array stack handles overflow.
- [ ] All stack variants handle underflow.
- [ ] Linked-list stack keeps operations O(1).
- [ ] Stack variants implement `push()`, `pop()`, `peek()`, and `isEmpty()`.
- [ ] Circular array queue uses `front` and `rear` index logic.
- [ ] Linked-list queue maintains `front` and `rear` pointers.
- [ ] Queue variants implement `enqueue()`, `dequeue()`, `isFull()`, and `isEmpty()`.

## Submission Requirements

- [ ] Every `new` has a matching `delete`.
- [ ] Destructors clean up dynamic memory.
- [ ] Data members are private.
- [ ] Include guards are present in headers.
- [ ] Meaningful comments explain circular queue wrapping logic.
- [ ] The project compiles with:

```bash
g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o dsa_test
```

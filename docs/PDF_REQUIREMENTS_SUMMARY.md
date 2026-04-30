# PDF Requirements Summary

The assignment asks for a C++ implementation of linear data structures using a modular project structure. Single-file submissions are not accepted.

## Required Architecture

- `Node.h`
- `LinkedList.h`
- `Stack.h`
- `Queue.h`
- `LinkedList.cpp`
- `Stack.cpp`
- `Queue.cpp`
- `main.cpp`

## Required Data Structures

- Singly linked list.
- Array-based stack using dynamic array storage.
- Linked-list stack.
- Circular array queue.
- Linked-list queue.

## Required Build Command

```bash
g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o dsa_test
```

## Important Constraints

- Separate declarations from implementations.
- Use include guards.
- Keep data members private.
- Free dynamically allocated memory.
- Add useful comments, especially around circular queue index wrapping.

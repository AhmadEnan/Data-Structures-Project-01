# Five-Member Task Breakdown

The project is split by data structure responsibility. Each member should work only in the listed implementation area unless coordinating an interface change.

## Member 1: Linked List

- Owns `LinkedList.cpp`.
- Uses `LinkedList.h` and `Node.h`.
- Implements `insertAtHead`, `insertAtEnd`, `deleteValue`, `display`, constructor, and destructor.
- Adds linked list demonstration code to `main.cpp` during integration.

## Member 2: Array Stack

- Owns the `StackArray` section of `Stack.cpp`.
- Uses dynamic array allocation and private index state.
- Handles overflow when capacity is reached.
- Handles underflow for `pop` and `peek`.
- Adds array stack demonstration code to `main.cpp` during integration.

## Member 3: Linked-List Stack

- Owns the `StackLinkedList` section of `Stack.cpp`.
- Uses `Node.h`.
- Keeps `push`, `pop`, `peek`, and `isEmpty` O(1).
- Ensures the destructor deletes all stack nodes.
- Adds linked-list stack demonstration code to `main.cpp` during integration.

## Member 4: Circular Array Queue

- Owns the `QueueArray` section of `Queue.cpp`.
- Uses circular index wrapping for `frontIndex` and `rearIndex`.
- Handles full and empty states consistently.
- Adds comments explaining wrapping logic.
- Adds circular queue demonstration code to `main.cpp` during integration.

## Member 5: Linked-List Queue

- Owns the `QueueLinkedList` section of `Queue.cpp`.
- Maintains both `front` and `rear` pointers.
- Keeps `enqueue`, `dequeue`, and `isEmpty` O(1).
- Ensures the destructor deletes all queue nodes.
- Adds linked-list queue demonstration code to `main.cpp` during integration.

## Integration Checklist

- Coordinate before editing shared headers.
- Use the marked ownership sections in `Stack.cpp`, `Queue.cpp`, and `main.cpp`.
- Rebuild after each member merges.
- Keep `main.cpp` demonstration sections clearly separated by structure.
- Confirm the final executable is named `dsa_test`.

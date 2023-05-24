# Doubly Linked List

A doubly linked list is a data structure that consists of a sequence of nodes, where each node contains a reference to the previous node and the next node in the sequence. This dual linkage allows for traversal in both directions: forward and backward. Here are some key characteristics of a doubly linked list:

1. Nodes: Each node in a doubly linked list contains two main components: data and references. The data represents the value or payload stored in the node, and the references point to the previous and next nodes in the list.

2. Head and Tail: The doubly linked list maintains references to the first and last nodes, which are commonly referred to as the head and tail, respectively. The head node's previous reference is typically null, while the tail node's next reference is usually null.

3. Bidirectional traversal: The presence of both previous and next references allows for traversing the list in both forward and backward directions. This flexibility makes it easier to navigate and manipulate the list compared to a singly linked list.

4. Insertion and deletion: Adding or removing nodes in a doubly linked list can be more efficient than a singly linked list. For example, to insert a new node, you need to update the references of the neighboring nodes to point to the new node correctly. Similarly, when deleting a node, you adjust the references of its neighboring nodes to bypass the node being removed.

However, the doubly linked list requires additional memory to store the previous references compared to a singly linked list. Also, the maintenance of the previous references adds complexity and requires careful handling to ensure the integrity of the list.

Here's an example representation of a doubly linked list with three nodes:

```
null ⇐ [Node1] ⇔ [Node2] ⇔ [Node3] ⇒ null
```

In this representation, `⇐` denotes the previous reference, `⇔` denotes the next reference, and `null` indicates the absence of a reference.

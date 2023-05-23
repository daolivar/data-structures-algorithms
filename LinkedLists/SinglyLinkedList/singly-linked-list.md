# Singly Linked List

A singly linked list is a linear data structure that consists of a sequence of nodes, where each node contains two components: data and a reference (or link) to the next node in the sequence.

The key characteristics of a singly linked list are as follows:

1. Head-based Access: The head node serves as the starting point for accessing the list. To perform operations on the last node or traverse the list from the end, it is necessary to start from the head and iterate through each subsequent node until reaching the desired position.

2. Sequential Access: Each node in the list is connected to the next node, allowing sequential access from the head to subsequent nodes. Traversal from the head is required to access any specific node within the list.

3. Efficient Insertion at the Head: Inserting a new node at the beginning of the list is efficient since it only requires updating the head pointer to the newly added node. This operation has a constant-time complexity, regardless of the size of the list.

4. Limited Efficiency for Operations at the End: Insertion or deletion at the end of the list, or accessing the last node directly, is less efficient compared to operations at the head. To perform these operations, the list must be traversed from the head to the second-to-last node, and the last node's reference must be updated accordingly.

5. Non-Contiguous Memory: Similar to other singly linked list variants, the nodes of a singly linked list can be scattered in different memory locations as each node is dynamically allocated.

Common operations performed on a singly linked list include insertion at the head, deletion based on a specific value or position, searching for a particular value, traversal through the list, and determining the length of the list.

Singly linked lists are commonly used in scenarios where insertion at the head is frequent or where the primary operations involve traversal from the head to the subsequent nodes. They provide a dynamic and flexible way to manage data, although operations involving the end of the list may be less efficient compared to variants with additional pointers or references.

Here's an example representation of a singly linked list with three nodes:

```
[Node1] -> [Node2] -> [Node3] -> null
   ↑
  Head
```

In this representation, each node is denoted by brackets `[ ]`. The arrow `->` indicates the next pointer, pointing from each node to the next node in the list. The `null` at the end signifies the end of the linked list, indicating that there is no next node beyond the last node.

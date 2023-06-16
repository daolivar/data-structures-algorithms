#ifndef NODE_HPP
#define NODE_HPP

class Node {
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data);
};

#endif

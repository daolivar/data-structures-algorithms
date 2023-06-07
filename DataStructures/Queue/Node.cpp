#include "Node.hpp"

/**
 * @brief Constructs a new Node object with the given data.
 *
 * This constructor creates a new node with the specified data value.
 * The previous and next pointers are initialized to nullptr.
 *
 * @param data The data to be stored in the Node
 * @return None
 */
Node::Node(int data) {
    this->data = data;
    prev = nullptr;
    next = nullptr;
}

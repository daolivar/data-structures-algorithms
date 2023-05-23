#include "Node.hpp"

/**
 * @brief Constructs a new Node object with the given data.
 * 
 * This constructor initializes a new instance of the Node class with the specified data.
 * The 'data' parameter is assigned to the 'data' member variable of the Node.
 * The 'next' pointer is set to nullptr, indicating that there is no next node initially.
 * 
 * @param data The data to be stored in the Node.
 * @return None.
 */
Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

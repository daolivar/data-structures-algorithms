#include "TreeNode.hpp"

/**
 * @brief Constructs a new TreeNode object with the given data.
 * 
 * This constructor creates a TreeNode object and initializes it with the provided data value.
 * The left and right child pointers are set to nullptr.
 * 
 * @param data The data value to be stored in the TreeNode.
 * @return None.
 */
TreeNode::TreeNode(int data) {
    this->data = data;
    left = nullptr;
    right = nullptr;
}

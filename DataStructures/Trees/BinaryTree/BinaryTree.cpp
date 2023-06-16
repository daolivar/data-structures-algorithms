#include "BinaryTree.hpp"

BinaryTree::BinaryTree() {
    root = nullptr;
}

BinaryTree::~BinaryTree() {
    // Destructor implementation
}

bool BinaryTree::isEmpty() const {
    return root == nullptr;
}

/**
 * @brief Inserts a new node with the given value into the binary tree.
 *
 * This method utilizes a reference to a pointer (pointer to pointer) to traverse
 * the tree and find the appropriate position for insertion. It eliminates the need
 * for explicit if conditions and simplifies the code by updating the actual pointer
 * being pointed to. The new node is inserted as the left or right child of the last
 * traversed node.
 *
 * @param value The value to be inserted.
 * @return None.
 */
void BinaryTree::insert(int value) {
    TreeNode* newNode = new TreeNode(value);
    TreeNode** current = &root;

    while (*current != nullptr) {
        if (value < (*current)->data) {
            current = &((*current)->left);
        } else {
            current = &((*current)->right);
        }
    }

    *current = newNode;
}

void BinaryTree::remove(int value) {
    // Method implementation
}

bool BinaryTree::search(int value) const {
    // Method implementation
}

void BinaryTree::preOrderTraversal() const {
    // Method implementation
}

void BinaryTree::inOrderTraversal() const {
    // Method implementation
}

void BinaryTree::postOrderTraversal() const {
    // Method implementation
}

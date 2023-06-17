#include <iostream>

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
    preOrderHelper(root);
}

void BinaryTree::preOrderHelper(TreeNode* root) const {
    if (root == nullptr) {
        return;
    }
    std::cout << root->data << " ";
    preOrderHelper(root->left);
    preOrderHelper(root->right);
}

void BinaryTree::inOrderTraversal() const {
    inOrderHelper(root);
}

void BinaryTree::inOrderHelper(TreeNode* root) const {
    if (root == nullptr) {
        return;
    }
    inOrderHelper(root->left);
    std::cout << root->data << " ";
    inOrderHelper(root->right);
}

void BinaryTree::postOrderTraversal() const {
    postOrderHelper(root);
}

void BinaryTree::postOrderHelper(TreeNode* root) const {
    if (root == nullptr) {
        return;
    }
    postOrderHelper(root->left);
    postOrderHelper(root->right);
    std::cout << root->data << " ";
}

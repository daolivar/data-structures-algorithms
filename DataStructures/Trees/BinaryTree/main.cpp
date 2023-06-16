#include <iostream>

#include "BinaryTree.hpp"

int main() {
    std::cout << "Binary Tree" << std::endl;
    // Create a binary tree object
    BinaryTree tree;

    // Insert nodes into the binary tree
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    // Perform tree operations
    std::cout << "Binary Tree Operations:" << std::endl;
    std::cout << "Is the tree empty? " << (tree.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "In-order traversal: ";
    tree.inOrderTraversal();
    std::cout << std::endl;
    std::cout << "Pre-order traversal: ";
    tree.preOrderTraversal();
    std::cout << std::endl;
    std::cout << "Post-order traversal: ";
    tree.postOrderTraversal();
    std::cout << std::endl;

    int searchValue = 6;
    std::cout << "Is " << searchValue << " present in the tree? " << (tree.search(searchValue) ? "Yes" : "No") << std::endl;

    int removeValue = 4;
    std::cout << "Removing " << removeValue << " from the tree..." << std::endl;
    tree.remove(removeValue);
    std::cout << "In-order traversal after removal: ";
    tree.inOrderTraversal();
    std::cout << std::endl;

    // Cleanup and exit
    return 0;
}

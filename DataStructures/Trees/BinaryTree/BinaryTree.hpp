#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP

#include "TreeNode.hpp"

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();

    bool isEmpty() const;
    void insert(int value);
    void remove(int value);
    bool search(int value) const;

    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;

private:
    TreeNode* root;
};

#endif  // BINARYTREE_HPP

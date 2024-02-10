#include <iostream>

template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T value) {
        data = value;
        left = right = nullptr;
    }
};

// Your provided functions
void inorder(BinaryTreeNode<int>* root, int& count) {
    // base case
    if (root == NULL) {
        return;
    }

    inorder(root->left, count);

    // leaf node
    if (root->left == NULL && root->right == NULL) {
        count++;
    }

    inorder(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int>* root) {
    int count = 0;
    inorder(root, count);
    return count;
}

// Main function
int main() {
    // Creating a sample binary tree
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(3);
    root->left->left = new BinaryTreeNode<int>(4);
    root->left->right = new BinaryTreeNode<int>(5);
    root->right->left = new BinaryTreeNode<int>(6);
    root->right->right = new BinaryTreeNode<int>(7);

    // Calling the function and printing the result
    int leafCount = noOfLeafNodes(root);
    std::cout << "Number of leaf nodes: " << leafCount << std::endl;

    // Clean up the allocated memory
    // Note: In a real-world scenario, you should have a proper memory cleanup mechanism
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}

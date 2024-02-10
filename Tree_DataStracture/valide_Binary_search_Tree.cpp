#include <iostream>
#include <climits>

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

bool isBST(BinaryTreeNode<int>* root, int min, int max) {
    // base case
    if (root == nullptr) {
        return true;
    }

    if (root->data >= min && root->data <= max) {
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);
        return left && right;
    } else {
        return false;
    }
}

bool validateBST(BinaryTreeNode<int>* root) {
    return isBST(root, INT_MIN, INT_MAX);
}

// Helper function to create a sample BST for testing
BinaryTreeNode<int>* createSampleBST() {
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(10);
    root->left = new BinaryTreeNode<int>(5);
    root->right = new BinaryTreeNode<int>(15);
    root->left->left = new BinaryTreeNode<int>(3);
    root->left->right = new BinaryTreeNode<int>(7);
    root->right->left = new BinaryTreeNode<int>(12);
    root->right->right = new BinaryTreeNode<int>(18);

    return root;
}

int main() {
    BinaryTreeNode<int>* root = createSampleBST();

    if (validateBST(root)) {
        std::cout << "The tree is a valid BST." << std::endl;
    } else {
        std::cout << "The tree is not a valid BST." << std::endl;
    }

    // Clean up the allocated memory
    // TODO: Implement a function to delete the tree nodes (not provided in this example).

    return 0;
}

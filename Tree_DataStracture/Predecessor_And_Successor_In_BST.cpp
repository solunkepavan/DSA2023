#include <iostream>
#include <utility>

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T value) {
        data = value;
        left = right = nullptr;
    }
};

std::pair<int, int> predecessorSuccessor(TreeNode<int>* root, int key) {
    int pred = -1;
    int succ = -1;
    TreeNode<int>* temp = root;

    while (temp && temp->data != key) {
        if (temp->data > key) {
            succ = temp->data;
            temp = temp->left;
        } else {
            pred = temp->data;
            temp = temp->right;
        }
    }

    if (temp) {
        // predecessor
        TreeNode<int>* leftTree = temp->left;
        while (leftTree) {
            pred = leftTree->data;
            leftTree = leftTree->right;
        }

        // successor
        TreeNode<int>* rightTree = temp->right;
        while (rightTree) {
            succ = rightTree->data;
            rightTree = rightTree->left;
        }
    }

    return {pred, succ};
}

// Helper function to create a sample BST for testing
TreeNode<int>* createSampleBST() {
    TreeNode<int>* root = new TreeNode<int>(10);
    root->left = new TreeNode<int>(5);
    root->right = new TreeNode<int>(15);
    root->left->left = new TreeNode<int>(3);
    root->left->right = new TreeNode<int>(7);
    root->right->left = new TreeNode<int>(12);
    root->right->right = new TreeNode<int>(18);

    return root;
}

int main() {
    TreeNode<int>* root = createSampleBST();

    int key = 7;
    auto result = predecessorSuccessor(root, key);

    std::cout << "Predecessor of " << key << " is: " << result.first << std::endl;
    std::cout << "Successor of " << key << " is: " << result.second << std::endl;

    // Clean up the allocated memory
    // TODO: Implement a function to delete the tree nodes (not provided in this example).

    return 0;
}

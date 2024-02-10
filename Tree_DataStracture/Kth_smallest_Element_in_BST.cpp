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

int solve(BinaryTreeNode<int>* root, int& i, int k) {
    // base case
    if (root == nullptr) {
        return -1;
    }

    // L (left) ......LNR
    int left = solve(root->left, i, k);

    if (left != -1) {
        return left;
    }

    // N
    i++;
    if (i == k) {
        return root->data;
    }

    // R
    return solve(root->right, i, k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i = 0;
    int ans = solve(root, i, k);
    return ans;
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

    int k = 3;
    int kthSmallestElement = kthSmallest(root, k);

    std::cout << "The " << k << "th smallest element in the BST is: " << kthSmallestElement << std::endl;

    // Clean up the allocated memory
    // TODO: Implement a function to delete the tree nodes (not provided in this example).

    return 0;
}

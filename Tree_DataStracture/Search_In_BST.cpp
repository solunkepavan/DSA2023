#include <iostream>
#include <queue>

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

bool searchInBST(BinaryTreeNode<int>* root, int x) {
    BinaryTreeNode<int>* temp = root;
    if (temp == nullptr) {
        return false;
    }

    while (temp != nullptr) {
        if (temp->data == x) {
            return true;
        } else if (temp->data > x) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    return false;
}

// Helper function to insert a new node into the BST
BinaryTreeNode<int>* insertIntoBST(BinaryTreeNode<int>* root, int x) {
    if (root == nullptr) {
        return new BinaryTreeNode<int>(x);
    }

    if (x < root->data) {
        root->left = insertIntoBST(root->left, x);
    } else if (x > root->data) {
        root->right = insertIntoBST(root->right, x);
    }

    return root;
}

// Helper function to create a BST from an array
BinaryTreeNode<int>* createBSTFromArray(const int arr[], int n) {
    BinaryTreeNode<int>* root = nullptr;

    for (int i = 0; i < n; ++i) {
        root = insertIntoBST(root, arr[i]);
    }

    return root;
}

// Example usage in main function
int main() {
    int arr[] = {10, 5, 15, 3, 7, 12, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    BinaryTreeNode<int>* root = createBSTFromArray(arr, n);

    int searchValue = 7;
    if (searchInBST(root, searchValue)) {
        std::cout << searchValue << " found in the BST." << std::endl;
    } else {
        std::cout << searchValue << " not found in the BST." << std::endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

// Definition of TreeNode
template<typename T>
struct TreeNode {
    T data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(T val) : data(val), left(nullptr), right(nullptr) {}
};

// Inorder traversal of BST to get elements in sorted order
template<typename T>
void inorder(TreeNode<T>* root, vector<T>& in) {
    if (root == nullptr)
        return;
    
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

// Flatten the binary tree into a linked list in place
template<typename T>
TreeNode<T>* flatten(TreeNode<T>* root) {
    if (root == nullptr) {
        return nullptr;
    }
 
    vector<T> inorderVal;
    // Store inorder traversal values
    inorder(root, inorderVal);
    int n = inorderVal.size();

    // Create a new root for the flattened tree
    TreeNode<T>* newRoot = new TreeNode<T>(inorderVal[0]);
    TreeNode<T>* curr = newRoot;
 
    // Iterate through the inorder values and create the flattened tree
    for (int i = 1; i < n; i++) {
        TreeNode<T>* temp = new TreeNode<T>(inorderVal[i]);
 
        curr->left = nullptr;
        curr->right = temp;
        curr = temp;
    }
    // Set the last node's left and right pointers to null
    curr->left = nullptr;
    curr->right = nullptr;

    return newRoot;
}

// Utility function to print flattened tree
template<typename T>
void printFlattenedTree(TreeNode<T>* root) {
    TreeNode<T>* curr = root;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;
}

int main() {
    // Creating a sample binary tree
    TreeNode<int>* root = new TreeNode<int>(1);
    root->left = new TreeNode<int>(2);
    root->right = new TreeNode<int>(5);
    root->left->left = new TreeNode<int>(3);
    root->left->right = new TreeNode<int>(4);
    root->right->right = new TreeNode<int>(6);

    cout << "Original binary tree inorder traversal: ";
    vector<int> inorderTraversal;
    inorder(root, inorderTraversal);
    for (int val : inorderTraversal) {
        cout << val << " ";
    }
    cout << endl;

    // Flattening the binary tree into a linked list
    TreeNode<int>* flattenedRoot = flatten(root);

    cout << "Flattened tree: ";
    printFlattenedTree(flattenedRoot);

    // Deleting the tree to free memory
    // Implement your own deletion logic based on your memory allocation method
    // e.g., using post-order traversal to delete all nodes
    // Delete root;
    // Delete other nodes...

    return 0;
}

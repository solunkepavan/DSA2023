
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

// Convert sorted array (inorder traversal) to BST
template<typename T>
TreeNode<T>* inorderToBST(int s, int e, vector<T>& in) {
    // base case
    if (s > e)
        return nullptr;
    
    int mid = (s + e) / 2;
    TreeNode<T>* root = new TreeNode<T>(in[mid]);
    root->left = inorderToBST(s, mid - 1, in);
    root->right = inorderToBST(mid + 1, e, in);
    return root;
}

// Convert unbalanced binary tree to balanced BST
template<typename T>
TreeNode<T>* balancedBst(TreeNode<T>* root) {
    vector<T> inorderVal;
    inorder(root, inorderVal);
    return inorderToBST(0, inorderVal.size() - 1, inorderVal);
}

// Utility function to perform inorder traversal of BST
template<typename T>
void printInorder(TreeNode<T>* root) {
    if (root == nullptr) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    // Creating an unbalanced binary tree
    TreeNode<int>* root = new TreeNode<int>(10);
    root->left = new TreeNode<int>(5);
    root->right = new TreeNode<int>(20);
    root->left->left = new TreeNode<int>(3);
    root->left->right = new TreeNode<int>(7);

    cout << "Inorder traversal of unbalanced binary tree: ";
    printInorder(root);
    cout << endl;

    // Converting unbalanced binary tree to balanced BST
    TreeNode<int>* balancedRoot = balancedBst(root);

    cout << "Inorder traversal of balanced BST: ";
    printInorder(balancedRoot);
    cout << endl;

    // Deleting the tree to free memory
    // Implement your own deletion logic based on your memory allocation method
    // e.g., using post-order traversal to delete all nodes
    // Delete root;
    // Delete other nodes...
    
    return 0;
}

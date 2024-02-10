#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Definition of BinaryTreeNode
template<typename T>
struct BinaryTreeNode {
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode(T val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to recursively construct BST from preorder traversal
template<typename T>
BinaryTreeNode<T>* solve(vector<T>& preorder, T mini, T maxi, int& i) {
    if (i >= preorder.size())
        return nullptr;
    
    if (preorder[i] < mini || preorder[i] > maxi) {
        return nullptr;
    }

    BinaryTreeNode<T>* root = new BinaryTreeNode<T>(preorder[i++]);

    root->left = solve(preorder, mini, root->data, i);
    root->right = solve(preorder, root->data, maxi, i);

    return root;
}

// Function to convert preorder traversal to BST
template<typename T>
BinaryTreeNode<T>* preorderToBST(vector<T>& preorder) {
    T mini = INT_MIN;
    T maxi = INT_MAX;

    int i = 0;
    return solve(preorder, mini, maxi, i);
}

// Utility function to perform inorder traversal of BST
template<typename T>
void inorder(BinaryTreeNode<T>* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    // Example usage
    vector<int> preorder = {8, 5, 1, 7, 10, 12};
    BinaryTreeNode<int>* root = preorderToBST(preorder);

    cout << "Inorder traversal of constructed BST: ";
    inorder(root);
    cout << endl;

    // Deleting the tree to free memory
    // Implement your own deletion logic based on your memory allocation method
    // e.g., using post-order traversal to delete all nodes
    // Delete root;
    // Delete other nodes...
    
    return 0;
}

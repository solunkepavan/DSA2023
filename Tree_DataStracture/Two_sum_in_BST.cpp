#include <iostream>
#include <vector>

using namespace std;

// Definition of BinaryTreeNode
template<typename T>
struct BinaryTreeNode {
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode(T val) : data(val), left(nullptr), right(nullptr) {}
};

// Inorder traversal of BST to get elements in sorted order
template<typename T>
void inorder(BinaryTreeNode<T>* root, vector<T>& in) {
    if (root == nullptr)
        return;
    
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

// Check if there exist two elements in the BST whose sum equals target
template<typename T>
bool twoSumInBST(BinaryTreeNode<T>* root, T target) {
    vector<T> inorderval;
    inorder(root, inorderval);

    int i = 0;
    int j = inorderval.size() - 1;

    while (i < j) {
        T sum = inorderval[i] + inorderval[j];

        if (sum == target) {
            return true;
        } else if (sum > target) {
            j--;
        } else {
            i++;
        }
    }
    return false;
}

int main() {
    // Creating a sample binary search tree
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(10);
    root->left = new BinaryTreeNode<int>(5);
    root->right = new BinaryTreeNode<int>(15);
    root->left->left = new BinaryTreeNode<int>(3);
    root->left->right = new BinaryTreeNode<int>(7);
    root->right->left = new BinaryTreeNode<int>(12);
    root->right->right = new BinaryTreeNode<int>(18);

    // Checking if there exist two elements whose sum equals target
    int target = 17;
    if (twoSumInBST(root, target)) {
        cout << "There exist two elements in the BST whose sum equals " << target << endl;
    } else {
        cout << "There are no two elements in the BST whose sum equals " << target << endl;
    }

    // Deleting the tree to free memory
    // Implement your own deletion logic based on your memory allocation method
    // e.g., using post-order traversal to delete all nodes
    // Delete root;
    // Delete other nodes...
    
    return 0;
}

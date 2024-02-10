#include <iostream>

using namespace std;

// Definition of TreeNode
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

TreeNode* LCAinaBST(TreeNode* root, TreeNode* P, TreeNode* Q) {
    while (root != NULL) {
        if (root->data < P->data && root->data < Q->data) {
            root = root->right;
        } else if (root->data > P->data && root->data > Q->data) {
            root = root->left;
        } else {
            return root;
        }
    }
    return nullptr; // Return nullptr if no common ancestor found
}

// Utility function to insert a node into BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

// Utility function to delete a tree
void deleteTree(TreeNode* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// Utility function to print inorder traversal of BST
void inorder(TreeNode* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    TreeNode* root = nullptr;
    
    // Inserting elements into BST
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 35);

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;

    // Example usage of LCAinaBST function
    TreeNode* P = root->left->left;  // Node with value 5
    TreeNode* Q = root->right->right; // Node with value 35
    TreeNode* lca = LCAinaBST(root, P, Q);
    
    if (lca != nullptr) {
        cout << "Lowest Common Ancestor of " << P->data << " and " << Q->data << " is: " << lca->data << endl;
    } else {
        cout << "Lowest Common Ancestor not found" << endl;
    }

    // Deleting the tree to free memory
    deleteTree(root);
    
    return 0;
}

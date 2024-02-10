#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root, int n1, int n2) {
        // base case
        if (root == nullptr) {
            return nullptr;
        }

        if (root->data == n1 || root->data == n2) {
            return root;
        }

        Node* leftAns = lca(root->left, n1, n2);
        Node* rightAns = lca(root->right, n1, n2);

        if (leftAns != nullptr && rightAns != nullptr) {
            return root;
        } else if (leftAns == nullptr && rightAns != nullptr) {
            return rightAns;
        } else if (leftAns != nullptr && rightAns == nullptr) {
            return leftAns;
        } else {
            return nullptr;
        }
    }
};

int main() {
    // Example usage
    /*
         3
        / \
       5   1
      / \ / \
     6  2 0  8
       / \
      7   4
    */

    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    Solution solution;
    int n1 = 5, n2 = 1;
    Node* result = solution.lca(root, n1, n2);

    if (result != nullptr) {
        cout << "Lowest Common Ancestor of " << n1 << " and " << n2 << " is: " << result->data << endl;
    } else {
        cout << "One or both nodes not present in the tree." << endl;
    }

    // Don't forget to free the allocated memory
    delete root->left->left;
    delete root->left->right->left;
    delete root->left->right->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}

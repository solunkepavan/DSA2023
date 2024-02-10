#include <iostream>
#include <vector>

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
    void traverseLeft(Node* root, vector<int> &ans) {
        if ((root == NULL) || (root->left == NULL && root->right == NULL)) {
            return;
        }

        ans.push_back(root->data);

        if (root->left) {
            traverseLeft(root->left, ans);
        }
        else {
            traverseLeft(root->right, ans);
        }
    }

    void traverseLeaf(Node* root, vector<int> &ans) {
        if (root == NULL) {
            return;
        }

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }

        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }

    void traverseRight(Node* root, vector<int> &ans) {
        if ((root == NULL) || (root->left == NULL && root->right == NULL)) {
            return;
        }

        if (root->right) {
            traverseRight(root->right, ans);
        }
        else {
            traverseRight(root->left, ans);
        }

        ans.push_back(root->data);
    }

    vector<int> boundary(Node* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;

        ans.push_back(root->data);

        traverseLeft(root->left, ans);

        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);

        traverseRight(root->right, ans);

        return ans;
    }
};

// Example usage in the main function
int main() {
    // Create a sample binary tree
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right->right = new Node(25);

    // Create an instance of the Solution class
    Solution solution;

    // Get the boundary elements of the binary tree
    vector<int> result = solution.boundary(root);

    // Print the result
    cout << "Boundary elements of the binary tree: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}

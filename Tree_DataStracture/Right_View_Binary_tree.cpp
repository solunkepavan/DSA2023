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
    void solve(Node* root, vector<int>& ans, int level) {
        // Base case
        if (root == NULL) {
            return;
        }

        // We entered into a new level
        if (level == ans.size()) {
            ans.push_back(root->data);
        }

        solve(root->right, ans, level + 1);
        solve(root->left, ans, level + 1);
    }

    // Function to return a list containing elements of the right view of binary tree.
    vector<int> rightView(Node* root) {
        vector<int> ans;
        solve(root, ans, 0);
        return ans;
    }
};

// Helper function to create a binary tree from a vector
Node* createBinaryTree(const vector<int>& nodes, int index, int n) {
    Node* root = nullptr;
    if (index < n) {
        Node* temp = new Node(nodes[index]);
        root = temp;

        root->left = createBinaryTree(nodes, 2 * index + 1, n);
        root->right = createBinaryTree(nodes, 2 * index + 2, n);
    }
    return root;
}

// Main function
int main() {
    Solution solution;

    // Example usage:
    vector<int> nodes = {1, 2, 3, 4, 5, 6, 7};
    int n = nodes.size();

    Node* root = createBinaryTree(nodes, 0, n);

    vector<int> result = solution.rightView(root);

    cout << "Right View of the Binary Tree: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}

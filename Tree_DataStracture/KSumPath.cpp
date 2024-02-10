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
    void solve(Node* root, int k, int& count, vector<int> path) {
        // base case
        if (root == nullptr)
            return;

        path.push_back(root->data);

        // left
        solve(root->left, k, count, path);
        // right
        solve(root->right, k, count, path);

        // check for K Sum
        int size = path.size();
        int sum = 0;
        for (int i = size - 1; i >= 0; i--) {
            sum += path[i];
            if (sum == k)
                count++;
        }

        path.pop_back();
    }
    int sumK(Node* root, int k) {
        vector<int> path;
        int count = 0;
        solve(root, k, count, path);
        return count;
    }
};

int main() {
    // Example usage
    /*
         10
        /  \
       5   -3
      / \    \
     3   2   11
    / \   \
   3  -2   1
    */

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(-3);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(11);
    root->left->left->left = new Node(3);
    root->left->left->right = new Node(-2);
    root->left->right->right = new Node(1);

    Solution solution;
    int k = 8;
    int result = solution.sumK(root, k);

    cout << "Number of paths with sum " << k << ": " << result << endl;

    // Don't forget to free the allocated memory
    delete root->left->left->left;
    delete root->left->left->right;
    delete root->left->right->right;
    delete root->right->right;
    delete root->left->left;
    delete root->left->right;
    delete root->right;
    delete root;

    return 0;
}

#include <iostream>
#include <climits>

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
    
    void solve(Node* root, int sum, int &maxsum, int len, int &maxlen) {
        // base case
        if (root == nullptr) {
            if (len > maxlen) {
                maxlen = len;
                maxsum = sum;
            } else if (len == maxlen) {
                maxsum = max(sum, maxsum);
            }
            return;
        }

        sum = sum + root->data;

        solve(root->left, sum, maxsum, len + 1, maxlen);
        solve(root->right, sum, maxsum, len + 1, maxlen);
    }

    int sumOfLongRootToLeafPath(Node* root) {
        int len = 0;
        int maxlen = 0;

        int sum = 0;
        int maxsum = INT_MIN;

        solve(root, sum, maxsum, len, maxlen);

        return maxsum;
    }
};

int main() {
    // Example usage
    /*
         10
        /  \
       2   10
          /  \
         20  10
    */

    Node* root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(10);
    root->right->left = new Node(20);
    root->right->right = new Node(10);

    Solution solution;
    int result = solution.sumOfLongRootToLeafPath(root);

    cout << "Maximum sum of the root-to-leaf path: " << result << endl;

    // Don't forget to free the allocated memory
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root;

    return 0;
}

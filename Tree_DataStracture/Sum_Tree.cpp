#include <iostream>
#include <utility> // for std::pair

// Define the structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    // Constructor
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Define the Solution class
class Solution {
public:
    std::pair<bool, int> isSumTreeFast(Node* root) {
        // Base case
        if (root == nullptr) {
            std::pair<bool, int> p = std::make_pair(true, 0);
            return p;
        }

        if (root->left == nullptr && root->right == nullptr) {
            std::pair<bool, int> p = std::make_pair(true, root->data);
            return p;
        }

        // Recursively check left and right subtrees
        std::pair<bool, int> leftAns = isSumTreeFast(root->left);
        std::pair<bool, int> rightAns = isSumTreeFast(root->right);

        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;

        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        // Check if the current node satisfies the sum tree condition
        bool condition = root->data == leftSum + rightSum;

        std::pair<bool, int> ans;

        if (isLeftSumTree && isRightSumTree && condition) {
            ans.first = true;
            ans.second = root->data + leftSum + rightSum;
        } else {
            ans.first = false;
        }
        return ans;
    }

    bool isSumTree(Node* root) {
        return isSumTreeFast(root).first;
    }
};

// Sample main function to test the isSumTree function
int main() {
    // Creating a sample sum tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(5);

    root->left->left = new Node(2);
    root->left->right = new Node(3);

    root->right->left = new Node(2);
    root->right->right = new Node(3);

    // Create an instance of the Solution class
    Solution solution;

    // Call the isSumTree function and display the result
    bool treeIsSumTree = solution.isSumTree(root);
    std::cout << "Is the binary tree a Sum Tree? " << (treeIsSumTree ? "Yes" : "No") << std::endl;

    // Clean up: deallocate memory for the binary tree nodes
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}

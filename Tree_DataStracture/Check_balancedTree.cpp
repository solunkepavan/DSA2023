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
private:
    std::pair<bool, int> isBalancedFast(Node* root) {
        // Base case
        if (root == nullptr) {
            std::pair<bool, int> P = std::make_pair(true, 0);
            return P;
        }

        std::pair<bool, int> left = isBalancedFast(root->left);
        std::pair<bool, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff = std::abs(left.second - right.second) <= 1;

        std::pair<bool, int> ans;
        ans.second = std::max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff) {
            ans.first = true;
        } else {
            ans.first = false;
        }
        return ans;
    }

public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node* root) {
        return isBalancedFast(root).first;
    }
};

// Sample main function to test the isBalanced function
int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Create an instance of the Solution class
    Solution solution;

    // Call the isBalanced function and display the result
    bool treeIsBalanced = solution.isBalanced(root);
    std::cout << "Is the binary tree balanced? " << (treeIsBalanced ? "Yes" : "No") << std::endl;

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

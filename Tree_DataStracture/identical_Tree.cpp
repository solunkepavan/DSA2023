#include <iostream>

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
    // Function to check if two trees are identical.
    bool isIdentical(Node* r1, Node* r2) {
        // Base case
        if (r1 == nullptr && r2 == nullptr) {
            return true;
        }

        // Check if one of the trees is nullptr while the other is not
        if (r1 == nullptr || r2 == nullptr) {
            return false;
        }

        // Recursively check left and right subtrees, and the node values
        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);
        bool value = r1->data == r2->data;

        // Return true if left, right, and value conditions are met, otherwise false
        return left && right && value;
    }
};

// Sample main function to test the isIdentical function
int main() {
    // Creating two identical binary trees
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    // Create an instance of the Solution class
    Solution solution;

    // Call the isIdentical function and display the result
    bool treesAreIdentical = solution.isIdentical(root1, root2);
    std::cout << "Are the two binary trees identical? " << (treesAreIdentical ? "Yes" : "No") << std::endl;

    // Clean up: deallocate memory for the binary tree nodes
    delete root1->left;
    delete root1->right;
    delete root1;

    delete root2->left;
    delete root2->right;
    delete root2;

    return 0;
}

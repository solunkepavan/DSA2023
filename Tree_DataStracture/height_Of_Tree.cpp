#include <iostream>
#include <algorithm> // for max function

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
    // Function to find the height of a binary tree.
    int height(Node* node) {
        // Base case 
        if (node == nullptr) {
            return 0;
        }

        int left = height(node->left);
        int right = height(node->right);

        int ans = std::max(left, right) + 1;

        return ans;
    }
};

// Sample main function to test the height function
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

    // Call the height function and display the result
    int treeHeight = solution.height(root);
    std::cout << "Height of the binary tree: " << treeHeight << std::endl;

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

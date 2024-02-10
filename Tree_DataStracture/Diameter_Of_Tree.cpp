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
    std::pair<int, int> diameterFast(Node* root) {
        // Base case
        if (root == nullptr) {
            std::pair<int, int> P = std::make_pair(0, 0);
            return P;
        }

        std::pair<int, int> left = diameterFast(root->left);
        std::pair<int, int> right = diameterFast(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;

        std::pair<int, int> ans;
        ans.first = std::max(op1, std::max(op2, op3));
        ans.second = std::max(left.second, right.second) + 1;

        return ans;
    }

public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        return diameterFast(root).first;
    }
};

// Sample main function to test the diameter function
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

    // Call the diameter function and display the result
    int treeDiameter = solution.diameter(root);
    std::cout << "Diameter of the binary tree: " << treeDiameter << std::endl;

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

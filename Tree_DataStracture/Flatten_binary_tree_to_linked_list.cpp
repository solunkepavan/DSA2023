#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    void flatten(Node* root) {
        Node* curr = root;

        while (curr != NULL) {
            if (curr->left) {
                Node* pred = curr->left;
                while (pred->right)
                    pred = pred->right;

                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};

// Helper function to print the flattened linked list
void printList(Node* node) {
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->right;
    }
    std::cout << std::endl;
}

int main() {
    // Creating a sample tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);

    Solution solution;
    // Flattening the tree
    solution.flatten(root);

    // Printing the flattened linked list
    std::cout << "Flattened Linked List: ";
    printList(root);

    // Cleanup - free memory
    // Note: In a real-world scenario, you should have a proper destructor to handle memory deallocation.
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}

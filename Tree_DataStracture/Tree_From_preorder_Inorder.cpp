#include <iostream>

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
    int findPosition(int in[], int element, int inorderStart, int inorderEnd) {
        for (int i = inorderStart; i <= inorderEnd; i++) {
            if (in[i] == element)
                return i;
        }
        return -1;
    }

    Node* solve(int in[], int pre[], int& index, int inorderStart, int inorderEnd, int n) {
        // base case
        if (index >= n || inorderStart > inorderEnd) {
            return nullptr;
        }
        int element = pre[index++];
        Node* root = new Node(element);
        int position = findPosition(in, element, inorderStart, inorderEnd);

        // recursive call
        root->left = solve(in, pre, index, inorderStart, position - 1, n);
        root->right = solve(in, pre, index, position + 1, inorderEnd, n);
        return root;
    }

    Node* buildTree(int in[], int pre[], int n) {
        int preOrderIndex = 0;
        Node* ans = solve(in, pre, preOrderIndex, 0, n - 1, n);
        return ans;
    }
};

// Function to print inorder traversal of the tree
void inorderTraversal(Node* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    Solution solution;

    // Example usage
    int inorder[] = {9, 3, 15, 20, 7};
    int preorder[] = {3, 9, 20, 15, 7};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    Node* root = solution.buildTree(inorder, preorder, n);

    cout << "Inorder traversal of the constructed tree: ";
    inorderTraversal(root);

    return 0;
}

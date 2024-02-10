#include <iostream>
#include <map>

using namespace std;

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void createMapping(int in[], map<int, int> &nodeToIndex, int n) {
    for (int i = 0; i < n; i++) {
        nodeToIndex[in[i]] = i;
    }
}

Node* solve(int in[], int post[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex) {
    // base case
    if (index < 0 || inorderStart > inorderEnd) {
        return nullptr;
    }

    // create root node for element
    int element = post[index--];
    Node* root = new Node(element);

    // find position of element in inorder
    int position = nodeToIndex[element];

    // recursive calls
    root->right = solve(in, post, index, position + 1, inorderEnd, n, nodeToIndex);
    root->left = solve(in, post, index, inorderStart, position - 1, n, nodeToIndex);

    return root;
}

Node* buildTree(int in[], int post[], int n) {
    int PostOrderIndex = n - 1;
    map<int, int> nodeToIndex;

    // create mapping node to index [inorder]
    createMapping(in, nodeToIndex, n);

    Node* ans = solve(in, post, PostOrderIndex, 0, n - 1, n, nodeToIndex);

    return ans;
}

// Function to print inorder traversal of the tree
void inorderTraversal(Node* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    // Example usage
    int inorder[] = {9, 3, 15, 20, 7};
    int postorder[] = {9, 15, 7, 20, 3};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    Node* root = buildTree(inorder, postorder, n);

    cout << "Inorder traversal of the constructed tree: ";
    inorderTraversal(root);

    return 0;
}

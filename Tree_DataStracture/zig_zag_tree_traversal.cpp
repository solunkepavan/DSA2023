#include <iostream>
#include <vector>
#include <queue>

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
    vector<int> zigZagTraversal(Node* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }

        queue<Node*> q;
        q.push(root);

        // create flag
        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> ans(size);

            // level Process
            for (int i = 0; i < size; i++) {
                Node* frontNode = q.front();
                q.pop();

                // normal insert or reverse insert
                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode->data;

                if (frontNode->left)
                    q.push(frontNode->left);

                if (frontNode->right)
                    q.push(frontNode->right);
            }

            // direction change
            leftToRight = !leftToRight;

            for (auto i : ans)
                result.push_back(i);
        }

        return result;
    }
};

// Example usage in the main function
int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Create an instance of the Solution class
    Solution solution;

    // Get the zigzag traversal of the binary tree
    vector<int> result = solution.zigZagTraversal(root);

    // Print the result
    cout << "Zigzag traversal of the binary tree: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}

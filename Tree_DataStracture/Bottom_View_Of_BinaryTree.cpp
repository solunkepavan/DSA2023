#include <iostream>
#include <vector>
#include <map>
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
    // Function to return a list of nodes visible from the top view 
    // from left to right in Binary Tree.
    vector<int> topView(Node* root) {
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }

        map<int, int> topNode;
        queue<pair<Node*, int>> q;

        q.push(make_pair(root, 0));

        while (!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int HD = temp.second;

            // If one value is present for HD, then do nothing
           
                topNode[HD] = frontNode->data;
            

            if (frontNode->left) {
                q.push(make_pair(frontNode->left, HD - 1));
            }

            if (frontNode->right) {
                q.push(make_pair(frontNode->right, HD + 1));
            }
        }

        for (auto i : topNode) {
            ans.push_back(i.second);
        }
        return ans;
    }
};

// Helper function to create a binary tree from a vector
Node* createBinaryTree(const vector<int>& nodes, int index, int n) {
    Node* root = nullptr;
    if (index < n) {
        Node* temp = new Node(nodes[index]);
        root = temp;

        root->left = createBinaryTree(nodes, 2 * index + 1, n);
        root->right = createBinaryTree(nodes, 2 * index + 2, n);
    }
    return root;
}

// Main function
int main() {
    Solution solution;

    // Example usage:
    vector<int> nodes = {1, 2, 3, 4, 5, 6, 7};
    int n = nodes.size();

    Node* root = createBinaryTree(nodes, 0, n);

    vector<int> result = solution.topView(root);

    cout << "Top View of the Binary Tree: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}

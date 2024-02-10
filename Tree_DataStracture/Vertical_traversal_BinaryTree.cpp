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
    // Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node* root) {
        map<int, map<int, vector<int>>> nodes;
        queue<pair<Node*, pair<int, int>>> q;
        vector<int> ans;

        if (root == nullptr) {
            return ans;
        }

        q.push(make_pair(root, make_pair(0, 0)));

        while (!q.empty()) {
            pair<Node*, pair<int, int>> temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].push_back(frontNode->data);

            if (frontNode->left) {
                q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
            }

            if (frontNode->right) {
                q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
            }
        }

        for (auto i : nodes) {
            for (auto j : i.second) {
                for (auto k : j.second) {
                    ans.push_back(k);
                }
            }
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

    vector<int> result = solution.verticalOrder(root);

    cout << "Vertical Order Traversal of the Binary Tree: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}

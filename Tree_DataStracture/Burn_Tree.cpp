#include <iostream>
#include <map>
#include <queue>

using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class Solution {
public:

    Node* createMapping(Node* root, int targetNode, map<Node*, Node*>& nodeToParent) {

        Node* res = NULL;

        queue<Node*> q;
        q.push(root);

        nodeToParent[root] = NULL;

        while (!q.empty()) {

            Node* front = q.front();
            q.pop();

            if (front->data == targetNode) {
                res = front;
            }

            if (front->left) {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }

            if (front->right) {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        return res;
    }

    int burnTree(Node* root, map<Node*, Node*>& nodeToParent) {

        map<Node*, bool> visited;
        queue<Node*> q;

        q.push(root);
        visited[root] = true;
        int ans = 0;

        while (!q.empty()) {

            bool flag = 0;
            int size = q.size();

            for (int i = 0; i < size; i++) {
                // process connected nodes

                Node* front = q.front();
                q.pop();

                if (front->left && !visited[front->left]) {
                    flag = 1;
                    q.push(front->left);
                    visited[front->left] = 1;
                }

                if (front->right && !visited[front->right]) {
                    flag = 1;
                    q.push(front->right);
                    visited[front->right] = 1;
                }

                if (nodeToParent[front] && !visited[nodeToParent[front]]) {
                    flag = 1;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = 1;
                }
            }
            if (flag == 1) {
                ans++;
            }
        }
        return ans;
    }

    int minTime(Node* root, int target) {
        // algo
        // step 1: create mapping node to parent
        // step 2: find target element
        // step 3: burn tree in min time 

        map<Node*, Node*> nodeToParent;
        Node* targetNode = createMapping(root, target, nodeToParent);

        int ans = burnTree(targetNode, nodeToParent);
        return ans;
    }
};

int main() {
    // Example usage
    // Create a sample tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution solution;
    int targetNode = 5;

    int result = solution.minTime(root, targetNode);
    cout << "Minimum time to burn the tree: " << result << endl;

    // TODO: Free the allocated memory for the tree nodes to prevent memory leaks
    return 0;
}

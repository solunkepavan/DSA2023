#include <iostream>
using namespace std;

// Define the structure for Node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class Solution {
public:
    int countNode(struct Node* root) {
        //base case
        if (root == NULL) {
            return 0;
        }
        int ans = 1 + countNode(root->left) + countNode(root->right);
        return ans;
    }

    bool isCBT(struct Node* root, int index, int cnt) {
        if (root == NULL)
            return true;

        if (index >= cnt) {
            return false;
        } else {
            bool left = isCBT(root->left, 2 * index + 1, cnt);
            bool right = isCBT(root->right, 2 * index + 2, cnt);
            return (left && right);
        }
    }

    bool isMAXOrder(struct Node* root) {
        //leaf node
        if (root->left == NULL && root->right == NULL) {
            return true;
        }

        if (root->right == NULL) {
            return (root->data > root->left->data);
        } else {
            bool left = isMAXOrder(root->left);
            bool right = isMAXOrder(root->right);

            return (left && right &&
                    (root->data > root->left->data && root->data > root->right->data));
        }
    }

    bool isHeap(struct Node* tree) {
        int index = 0;
        int totalCount = countNode(tree);

        if (isCBT(tree, index, totalCount) && isMAXOrder(tree)) {
            return true;
        } else {
            return false;
        }
    }
};

// Main function
int main() {
    // Create your tree here
    // Example:
    //        4
    //       / \
    //      2   3
    //     / \
    //    1   5
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(5);

    Solution solution;
    if (solution.isHeap(root)) {
        cout << "The given tree is a heap." << endl;
    } else {
        cout << "The given tree is not a heap." << endl;
    }

    return 0;
}

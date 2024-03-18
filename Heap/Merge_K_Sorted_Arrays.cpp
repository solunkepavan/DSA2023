#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node {
public:
    int data;
    int i;
    int j;

    node(int data, int row, int col) {
        this->data = data;
        i = row;
        j = col;
    }
};

class compare {
public:
    bool operator()(node* a, node* b) {
        return a->data > b->data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& kArrays, int k) {
    priority_queue<node*, vector<node*>, compare> minHeap;

    // Step 1: insert first elements of all k arrays 
    for (int i = 0; i < k; i++) {
        node* tmp = new node(kArrays[i][0], i, 0);
        minHeap.push(tmp);
    }

    vector<int> ans;

    // Step 2: Merge arrays
    while (minHeap.size() > 0) {
        node* tmp = minHeap.top();

        ans.push_back(tmp->data);
        minHeap.pop();

        int i = tmp->i;
        int j = tmp->j;

        if (j + 1 < kArrays[i].size()) {
            node* next = new node(kArrays[i][j + 1], i, j + 1);
            minHeap.push(next);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> kArrays = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, 11}
    };
    int k = kArrays.size(); // Number of arrays

    vector<int> mergedArray = mergeKSortedArrays(kArrays, k);

    cout << "Merged array: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

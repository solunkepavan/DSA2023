#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void heapify(vector<int> &arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[largest] < arr[left]) {
            largest = left;
        }

        if (right < n && arr[largest] < arr[right]) {
            largest = right;
        }

        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // Step 1: Merge Both arrays 
        vector<int> ans;
        for (auto i : a) {
            ans.push_back(i);
        }
        for (auto i : b) {
            ans.push_back(i);
        }

        // Step 2: Build heap with merged array
        int size = ans.size();
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(ans, size, i);
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<int> a = {10, 5, 6, 2};
    vector<int> b = {12, 7, 9};

    vector<int> merged = solution.mergeHeaps(a, b, a.size(), b.size());

    cout << "Merged Heap: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

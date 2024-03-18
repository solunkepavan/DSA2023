#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;

        // Step 1: Insert first k elements into the priority queue
        for (int i = l; i < l + k; i++) {
            pq.push(arr[i]);
        }

        // Step 2: Process remaining elements, if any
        for (int i = l + k; i <= r; i++) {
            if (arr[i] < pq.top()) {
                pq.pop(); // Remove the largest element from the priority queue
                pq.push(arr[i]); // Insert the current element if it's smaller
            }
        }

        // Step 3: Return the top element of the priority queue
        return pq.top();
    }
};

// Main function
int main() {
    Solution solution;
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int result = solution.kthSmallest(arr, 0, n - 1, k);
    cout << "The " << k << "th smallest element is: " << result << endl;
    return 0;
}

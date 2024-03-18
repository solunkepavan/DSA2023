//brute forc approach
 /*
 int getKthLargest(vector<int> &arr, int k)
{
	vector<int> sumStore;
	int n = arr.size();
	for(int i = 0; i<n; i++){
		int sum = 0;
		for(int j = i; j<n; j++){
			sum += arr[j];
			sumStore.push_back(sum);
		}
	}

	sort(sumStore.begin(), sumStore.end());

	return sumStore[sumStore.size() - k];
}
 
 */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int getKthLargest(vector<int> &arr, int k) {
    priority_queue<int, vector<int>, greater<int>> mini;

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (mini.size() < k) {
                mini.push(sum);
            } else {
                if (sum > mini.top()) {
                    mini.pop();
                    mini.push(sum);
                }
            }
        }
    }
    return mini.top();
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 6, 4}; // Example input array
    int k = 2; // Example value of k

    int kthLargest = getKthLargest(arr, k);
    cout << "The " << k << "th largest element is: " << kthLargest << endl;

    return 0;
}

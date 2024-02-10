#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i = n-1; i >= 0; i--){
        int curr = arr[i];

        while(s.top() >= curr){
            s.pop();
        }

        // answer is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }

    return ans;
}

int main() {
    // Example usage
    vector<int> arr = {4, 5, 2, 10, 8};
    int n = arr.size();

    vector<int> result = nextSmallerElement(arr, n);

    cout << "Next Smaller Elements: ";
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}

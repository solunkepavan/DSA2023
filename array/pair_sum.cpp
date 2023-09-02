#include<iostream>
using namespace std;


void pairSum(int arr[], int n, int s) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == s) {
                cout <<min(arr[i], arr[j]) << " " << max(arr[i], arr[j]) << endl;
            }
        }
    }
}

int main() {
    int n, s;
    cout << "Enter size of array" << endl;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pairSum(arr, n, s);

    return 0;
}




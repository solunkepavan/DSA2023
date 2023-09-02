#include<iostream>
#include<vector>
using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1;
        int j = n-1;

        int k = m+n-1;

        while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
        //k--;
    }

    // If there are remaining elements in arr2, copy them to arr1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
        
    }
void print(vector<int>& ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 3, 5 ,7,9};
    vector<int> arr2 = {2, 4, 6};
    
    int m = arr1.size();
    int n = arr2.size();

merge(arr1, m, arr2, n);

    cout << "Merged array in arr1: " << endl;
    print(arr1);
    return 0;
}

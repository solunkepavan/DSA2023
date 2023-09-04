#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& arr, int k){
    
    int n = arr.size();
    vector<int> temp(n);

    for(int i=0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
    
}

void print(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7};

    int k;
    cout << "Enter value which is non-Negative :"<<endl;
    cin >> k;

    rotate(arr , k);
    cout << "Rotated array :"<<endl;
    print(arr);
}
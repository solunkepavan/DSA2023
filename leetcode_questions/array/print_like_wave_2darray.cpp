#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;

    for(int col = 0; col<mCols; col++){

        if(col&1){
            //odd index -> bottom to top
            for(int row = nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{

            //o or even index -> top to bottom
            for(int row = 0; row<nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main(){

    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the elements of the arr:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, n, m);

    cout << "Wave-printed arr elements: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;

}
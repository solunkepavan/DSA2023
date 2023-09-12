#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;
        //index initilization
        int SRow = 0;
        int SCol = 0;
        int ERow = row - 1;
        int ECol = col - 1;

        while(count < total){

            //print first row
            for(int index = SCol; count < total && index <= ECol; index++){
                ans.push_back(matrix[SRow][index]);
                count++;
            }
            SRow++;

            //print ending col
            for(int index = SRow;count < total && index <= ERow; index++ ){
                ans.push_back(matrix[index][ECol]);
                count++;
            }
            ECol--;

            //print ending Row
            for(int index = ECol;count < total && index >= SCol; index--){
                ans.push_back(matrix[ERow][index]);
                count++;
            }
            ERow--;

            //print Starting col
            for(int index = ERow;count < total && index >= SRow; index--){
                ans.push_back(matrix[index][SCol]);
                count++;
            }
            SCol++;
        }
        return ans;
 
    }



int main(){

    int n = 3;
    int m = 3; 
    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter the elements of the arr:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

   vector<int> ans =spiralOrder(matrix);

    cout << "Print result :" << endl;
    for(int i = 0; i < n*m; i++){
        
            cout << ans[i]<<" ";
        
    }



}
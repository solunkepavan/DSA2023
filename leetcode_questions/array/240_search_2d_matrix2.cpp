/*
Write an efficient algorithm that searches for a 
value target in an m x n integer matrix matrix. 
This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.*/



#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while(rowIndex < row && colIndex >=0){

            int  element = matrix[rowIndex][colIndex];

            if(element == target){
                return 1;
            } 

            if(element < target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
    }


int main(){

    int n = 3;
    int m = 4; 
    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter the elements of the arr:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    int t;
    cout <<"Enter target : " << endl;
    cin >> t;

    if (searchMatrix(matrix,t)==1){

        cout << "Elemnet found in given matrix"<<endl;
    }
    else{
        cout << "Elemnet not found in given matrix"<<endl;
    }
}


/*
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],
                [3,6,9,16,22],[10,13,14,17,24],
                [18,21,23,26,30]]
                target = 5
Output: true

*/
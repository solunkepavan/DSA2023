
/*
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

*/

#include<iostream>
#include<vector>
using namespace std;

void subset(vector < int > arr,int index, vector < int >& output, vector< vector < int > >& ans){
    //base case
    if(index >= arr.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    subset(arr,index+1,output,ans);

    //include
    int element = arr[index];
    output.push_back(element);
    subset(arr,index+1,output,ans);

    output.pop_back();
}

int main(){

    vector< int > arr = {1,2,3};
    int index = 0;
    vector< int > output;
    vector<vector < int > > ans;

    subset(arr,index,output,ans);

      for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
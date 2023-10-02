#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int index){

        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++ ){
            swap(nums[index], nums[i]);
            solve(nums, ans, index+1);

            //backtracking
            swap(nums[index], nums[i]);
        }
    }

/*
int main(){

    vector< int > nums = {1,2,3};
    vector< vector< int > > ans;
    int index = 0;

    solve(nums, ans, index);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){ // Use ans[i].size() for the inner loop
            cout << ans[i][j] << " ";
        }
        cout << endl;
    } 

    return 0;
}
*/

int main() {
    vector<int> nums = { 'a', 'b', 'c' }; // Use character literals instead of integers
    vector<vector<int>> ans;
    int index = 0;

    solve(nums, ans, index);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << static_cast<char>(ans[i][j]) << " "; // Convert integers to characters for output
        }
        cout << endl;
    }

    return 0;
}
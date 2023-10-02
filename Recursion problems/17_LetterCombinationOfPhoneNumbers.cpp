#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string digits, int index, string output, vector< string >& ans, string mapping[]){

    //base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';  //digits[index] return character assci value for getting number we - '0'
    string value = mapping[number];

    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        solve(digits, index+1, output, ans, mapping);

        output.pop_back();
    }
}

int main(){

    string digits = "23";
    vector< string > ans;
    if(digits.length() == 0){
         for(int i = 0; i < ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << endl;
    }
    int index = 0;
    string output = "";
    string mapping[10] = {"","","acb","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    solve(digits, index, output, ans, mapping);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
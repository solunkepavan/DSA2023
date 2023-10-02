#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(string str,int index, string output, vector< vector < string > >& ans){
    //base case
    if(index>=str.length()) {
        if(output.length()>0){
           vector<string> subset;
            for (char c : output) {
                string char_str(1, c);
                subset.push_back(char_str);
            }
            ans.push_back(subset);
        }
        return ;
        }
    
    //exclude
    solve(str, index+1, output, ans);
    //include
    output.push_back(str[index]);
    solve( str, index+1, output, ans);
}

int main(){

    string str = "abc";
    int index = 0;
    string output = "";
    vector<vector < string > > ans;

    solve(str,index,output,ans);

      for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
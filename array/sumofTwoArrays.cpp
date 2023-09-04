#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>& ans){

	int s =0;
	int e =ans.size()-1;

	while(s<e){

		swap(ans[s] , ans[e]);
		s++;
		e--;
	}
	return ans;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
	int i = n-1;
	int j = m-1;
	vector<int> ans;
	int carry = 0;

	while(i>=0 && j>=0){

		int val1 = a[i];
		int val2 = b[j];

		int sum = val1 + val2 +carry;

		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		i--;
		j--;

	}

	//1st case
	while(i>=0){
		int sum = a[i] + carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		i--;
	}

	//2st case
	while(j>=0){
		int sum = b[j] + carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		j--;

	}

	//3rd case
	while(carry !=0){
		int sum = carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);

	}
	return reverse(ans);

}

void print(vector<int>& ans) {

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] <<" ";
    }
    cout << endl;
}

int main(){

    vector<int> a = {1,2,3,4};
    vector<int> b = {6};
    
    int n = a.size();
    int m = b.size();

    vector<int> ans = findArraySum(a, n , b, m);
    cout << "Print result : "<<endl;
    print(ans);

}
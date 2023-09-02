#include<iostream>
#include<vector>
using namespace std;

vector<int> mergesortedArray(vector<int> arr1,int m,vector<int> arr2, int n ){
int i = 0;
int j = 0;
vector<int> arr3;

while(i<m && j<n){

    if(arr1[i] < arr2[j]){
        arr3.push_back(arr1[i]);
         i++;
    }
    else{
        arr3.push_back(arr2[j]);
        j++;
    }
        
  }
  while(i<m ){
       arr3.push_back(arr1[i]);
        i++;
  }

  while(j<n ){
        arr3.push_back(arr2[j]);
        j++;
  }
  return arr3;

}

void print(vector<int>& ans){
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] <<" ";
    }
    cout << endl;

}
int main(){

    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    

    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(7);
    arr1.push_back(9);

    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);

    int m = arr1.size();
    int n = arr2.size();

    arr3 = mergesortedArray(arr1,m,arr2,n); 
    
    cout << "merged array : "<< endl;
    print(arr3);
    return 0;
 
}
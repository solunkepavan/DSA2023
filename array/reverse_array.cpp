#include<iostream>
#include<vector>
using namespace std;


vector<int> reversearray(vector<int> arr, int m){

    int s = m + 1;
    int e = arr.size() - 1;
    
    while(s<=e){

        swap(arr[s], arr[e]);
        s++;
        e--;

    }
    return arr;
}

void printarray(vector<int> arr){

    for (int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    int m ;
    cout <<"Enter Position"<<endl;
    cin >> m;

   cout << "Original Array :"<<endl;
    printarray(arr);

    vector<int> ans = reversearray(arr,m);

    cout << "Reverse Array :"<<endl;
    printarray(ans);

    return 0;
}
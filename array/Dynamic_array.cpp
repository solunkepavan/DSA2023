#include<iostream>
using namespace std;

    int getsum(int *arr , int n ){

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        return sum;
    }

int main(){

    int n;
    cout << "Enter size of array :"<< endl;
    cin >> n;

    //create dynamic array with variable size
    int * arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getsum(arr, n);
    cout << "The sum of array is :"<< ans << endl;

    return 0;
}
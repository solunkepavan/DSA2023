#include<iostream>
#include <bits/stdc++.h>
using namespace std;

    void findDuplicates(int nums[], int n) {

        sort(nums, nums+n);//first sort array

        for ( int i = 0; i<n-1; i++){
            if ( nums[i] == nums[i+1]){
                cout << nums[i] << " ";
            }
            
        }
    }

    
    int main(){

        int arr[6] = {1,2,3,2,4,3 };
        cout << "The duplicates elements are : "<< endl;
        findDuplicates(arr ,6);

    }
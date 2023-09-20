#include<iostream>
using namespace std;

int getSum(int *arr, int size) {

    
    //base case
    if(size == 0 ) {
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int remaningpart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remaningpart;

    return sum;
}

int main(){

    int arr[5] = {2,4,6,7,5};

    int ans = getSum(arr,5);
    cout << "sum of array is : " << ans << endl;

   return 0;
}
#include<iostream>
using namespace std;

//to print row wise sum
int LargestRowSum(int arr[][4], int i ,int j){
    int maxi = INT64_MIN;
    int rowindex = -1;
    
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
             sum = sum + arr[i][j];
        }
        if(sum >maxi){
            maxi = sum;
            rowindex = i;
        }
    }   
    cout <<"The maximum sum is :"<<maxi <<endl;
    return rowindex;
}



int main(){

    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    //print array
    cout <<"Printing array :"<<endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j]<<" ";; 
        }
        cout << endl;
    }
    int ans = LargestRowSum(arr,3 ,4);
    cout << "The max row is at index "<<ans<<endl;
    
}
#include<iostream>
using namespace std;

int getMin(int arr[],int size)
{
    int mini = INT32_MAX;
    
    for (int i = 0; i < size; i++){

        mini = min(mini,arr[i]);
        //if(arr[i] < min){
          //  min = arr[i];
        //}
    }
    return mini;
    
}

int getMax(int arr[],int size)
{
    int maxi = INT32_MIN;
    
    for (int i = 0; i < size; i++){
        
        maxi = max(maxi,arr[i]);
        //if(arr[i] > max){
          //  max = arr[i];
       // }
    }
    return maxi;
    
}

int main(){

    int size;

    cin >> size;

    int arr[100] ;

    for(int i=0;i<size;i++){

        cin >> arr[i]; 
    }

    cout << getMax(arr , size) << endl;
    cout << getMin(arr , size) << endl;   

}
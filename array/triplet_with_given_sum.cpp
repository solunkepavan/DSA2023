#include<iostream>
using namespace std;

void findTriplets( int arr[], int n, int K) {
	

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==K)
				{
                    cout<<arr[i]<<" "<< arr[j]<<" "<<arr[k] << endl; 
                }
            }
        }
    }
    
}

int main(){

    int arr[5] = {1,2,3,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 8;

    findTriplets(arr,n, K);
   
}
#include<iostream>
using namespace std;

int getPivot(int arr[],int size){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while( start < end ){

        if ( arr[mid] >= arr[0]){

            start = mid + 1;
        }
        else{

            end = mid;
        }
        mid = start + (end - start) / 2;

    }
    return start;
}
int binarysearch(int arr[], int start,int end, int key){

    int s = start;
    int e = end;

    int mid = s + (e - s) / 2;

    while (s <= e){

        if ( key == arr[mid] ){

            return mid;
        }

        //search right side of mid
        else if ( key > arr[mid] ){

            s = mid + 1;
        }

        //search left side of mid
        else{
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int findposition(int arr[],int n , int key){

    int pivot = getPivot(arr,n);

    if(arr[pivot] <= key && key <= arr[n-1]){

        return binarysearch(arr,pivot,n-1,key);
    }
    else{
        return binarysearch(arr,0,pivot-1,key);
    }
    //return -1;
}


int main(){
    int arr[5] = {7,9,1,2,3};

    cout << "9th element at index "<<findposition(arr,5,);
}


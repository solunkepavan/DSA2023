#include<iostream>
using namespace std;


int main(){

/*
    int n;
    cout << "Enter value of n :"<< endl;
    cin >> n;

    //creating of 2D array
    int **arr = new int *[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    //taking inpute
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    //print output
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
*/
    int row;
    int col;
    cout << "enter row and column" << endl;
    cin >> row >> col;

     //creating of 2D array
    int **arr = new int *[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    //taking inpute
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    //print output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

   // releasing memory
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}
#include<iostream>
using namespace std;

int power(int n){

    //base case
    if(n==0){
        return 1;
    } 

    // int smallerProblem = power( n - 1 );
    // int bigerProblem = n * power( n - 1 );
    // return bigerProblem ;

    return 2 * power( n - 1 );
}


int main (){

    int n ;
    cout << "Enter the number : "<< endl;
    cin >> n;

    int ans = power(n);
    cout << ans << endl;
    return 0;
}
#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n==0){
        return 1;
    } 

    // int smallerProblem = factorial( n - 1 );
    // int bigerProblem = n * factorial( n - 1 );
    // return bigerProblem ;

    return n * factorial( n - 1 );
}


int main (){

    int n ;
    cout << "Enter the number : "<< endl;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;



    return 0;
}
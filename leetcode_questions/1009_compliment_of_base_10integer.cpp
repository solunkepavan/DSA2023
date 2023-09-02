
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int m = n;
    int mask = 0;

    if ( n == 0){
        cout << 0;
        exit(0);
    }

    while( m != 0){

        mask = ( mask << 1 ) | 1; // left shift

        m = m >> 1; // right shift
    }

    int ans = (~n) & mask;
    cout << ans;


}

   
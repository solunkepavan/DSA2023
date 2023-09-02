#include<iostream>
#include<math.h>

using namespace std;
/*
int main(){

    int n;
    cout << "Enter any Number : ";
    cin >> n;

    for( int i = 0; i <=30; i++ ){

        int ans = pow( 2,i);

        if ( ans == n ){
            cout<<"true"<<endl;
            exit(0);
        }

    }
    cout<<"false"<<endl;

    
}
*/

int main(){

    int n;
    cout << "Enter any Number : ";
    cin >> n;
    int ans = 1;
    for( int i = 0; i <=30; i++ ){
        
        if ( ans == n ){
            cout<<"true"<<endl;
            exit(0);
        }
        if( ans < INT32_MAX/2)
        ans = ans * 2;

    }
    cout<<"false"<<endl;

    
}

//power of threee


/*class Solution {
public:
    bool isPowerOfThree(int n) {
      if(n==0){
        return false;
    }
    
    while(n!=1){
        
        if(n%3!=0){
            return false;
        }
        
        n=n/3;
        
    }
    
    return true;  
}
};
*/
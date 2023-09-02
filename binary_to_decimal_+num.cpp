#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;

    cout<<"Enter the value of n : ";

    cin >> n;
    
    float anwser = 0;
    int i = 0;
    while( n != 0){

        int digit = n % 10;

        if( digit == 1){
            anwser = anwser + pow( 2, i);
        }
        
        n = n / 10;
        i++;
    }
     cout << "anwser : " << anwser << endl;  
    
}
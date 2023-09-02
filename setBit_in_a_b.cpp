#include <iostream>
using namespace std;

int ABbits(int a, int b){
    int counta = 0;
    int countb = 0;
    
    while( a != 0 || b != 0 ){

        if (a & 1){
            counta++;
        }
        a = a >> 1;  

        if ( b & 1){
            countb++;
        }
        b = b >> 1;

    }

    //while(b != 0){
        
        //if ( b & 1){
           // countb++;
       // }
       // b = b >> 1;
   // }

    return counta+countb;
}

int main(){
 
 int a,b;

 cout << "Enter value of a :"<< endl;
 cin >> a;


 cout << "Enter value of b :"<< endl;
 cin >> b;

 cout << endl;

 int ans = ABbits(a,b);

 cout <<"Total No of set bit in a & b : " <<ans << endl;

}
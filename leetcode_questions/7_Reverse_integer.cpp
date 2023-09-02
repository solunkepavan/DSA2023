#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;

    cout << "Enter the number : ";
    cin >> n;
    int rev = 0;
    int i = 0;

   
    while( n != 0){

        int lastd = n % 10;

        if ( (rev < INT32_MIN /10)  || (rev > INT32_MAX /10 )){
           cout << 0;
           exit(0);
            
        }
        rev = ( rev * 10) + lastd;
        n = n / 10;
        i++;
    }
   
    cout << rev; 

}

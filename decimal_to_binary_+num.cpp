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

        int bit = n & 1;
        anwser = ( bit * pow( 10, i )) + anwser;
        n = n >> 1;
        i++;
    }
     cout << "anwser : " << anwser << endl;  
    
}

/*


#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n, ans = 0, i = 0;
    cin >> n;

    int num = 0;
    if(n<0){        // If Decimal number is -ve.
        num = -n;
        
        while(num != 0 ) {

            int bit  = num & 1;
            ans = (bit * pow(10, i) ) + ans;
            num = num >> 1;
        i++;
        }
        
    cout<<" Answer is - "<< ans << endl;
}
else{       // For +ve decimal number.

    while(n != 0 ){

        int bit  = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<" Answer is "<< ans << endl;
    
}    return 0;
}*/
// Your First C++ Programam

#include <iostream>
using namespace std;

int main() {

   /* int a;
    cout<<"Enter the value of a:"<<endl;
    cin >> a;
    //check that a is positive or negative number
    if(a<0){
        cout<<"The number is negative"<<endl;
    }
    if(a>0){
        cout<<"The number is positive"<<endl;
    }

    */



  //check that which number is greater
  /* int a,b;

   cout<<"ENter the value of a:"<<endl;
   cin>> a ;

   cout<<"Enter the value of b:"<<endl;
   cin>> b ;
   
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }

    if(a<b){
        cout<<"b is greater than a"<<endl;
    }
*/


/*
char ch;
cout<<"ENter any character or number "<<endl;
cin>> ch ;

if(ch=='a' || ch=='b' || ch=='c' || ch=='d' || ch=='e' || ch=='f' || ch=='g' || ch=='h' || ch=='i' || ch=='j' || ch=='k' || ch=='l' || ch=='m' || ch=='n' || ch=='o' || ch=='p' || ch=='q' || ch=='r' || ch=='s' || ch=='t' || ch=='u' || ch=='v' || ch=='w' || ch=='x' || ch=='y' || ch=='z'){
    cout<<"this is lowercase "<<endl;
}
else if(ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='E' || ch=='F' || ch=='G' || ch=='H' || ch=='I' || ch=='J' || ch=='K' || ch=='L' || ch=='M' || ch=='N' || ch=='O' || ch=='P' || ch=='Q' || ch=='R' || ch=='S' || ch=='T' || ch=='U' || ch=='V' || ch=='W' || ch=='X' || ch=='Y' || ch=='Z'){
    cout<<"this is uppercase"<<endl;
}
else{
    cout<<"this is numeric"<<endl;
}

*/



/*// while loop 

int n ;
cout<< "enter number"<<endl;
cin>>n;
int i=2;
int sum=0;
while(i<=n){
    sum=sum+i;
    i=i+2;
}
cout<<"The sum of even number from 1 to n is :"<<sum<<endl;

*/


/*
//to convert temperature from Fahrenheit to Celsius
 float F , C;
 cout<<"Enter temperature in Fahrenheit:"<<endl;
 cin>>F;

 C=5*(F-32)/9;
 cout<<F<<" Fahrenheit is equal to  "
        <<C<< " celsius"<<endl;
*/

// check given number is prime or not 

int n;
cout<<"ENter any number:"<<endl;
cin>>n;

int i=2;

while(i<n){
    if(n%i==0){
        cout<<"Not prime  for "<<i<<endl;
    }
    else{
        cout<<"Prime for "<<i<<endl;
    }
    i=i+1;
}


}

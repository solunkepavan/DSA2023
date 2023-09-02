#include<iostream>
using namespace std;


/*
int main(){

    int n;
    cout<<"Enter the value of n : ";

    cin>>n;

    for(int i=1; i<=n; i++){

        cout<<i<<endl;
    }


    for(int a=0 ,b=1; a>=0 && b<=1; a--,b++){


        cout<<a<<" "<<b<<endl;

    }

}*/





/*

//print sum of 100 numbers 

int main(){

    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    int sum=0;

    for(int i=1;i<=n;i++){

        sum=sum+i;
    }

    cout<< "The sum of n numbers is : "<<sum<<endl;
}

*/




/*

//Fibonacci series   n= (n-1)+(n-2)

int main(){

    int n =10;

    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){

        int NextNumber = a + b;
        cout<< NextNumber <<" ";

         a = b;

        b = NextNumber;  
    }

}
//output
//0 1 1 2 3 5 8 13 21 34 55 89 

*/


// check prime numbers

int main(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    bool isPrime=1;

    for( int i=2; i<n; i++){

        //rem is 0 , is a prime number

        if(n % i == 0){

            isPrime = 0 ;
            break;
        }
    }

    if(isPrime == 0){

        cout<<"It is a Prime Number ";
    }
    else{
        cout<<" It is a not a prime number";
    }
}
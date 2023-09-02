#include<iostream>
using namespace std;

int main(){

    int num = 2;
    int Char = '1';

    // exit from infinite loop 

    switch( num ){

        case 1: cout << " Heloo wolrd" << endl;
                
        
        case 2: switch ( Char ){

                case '1': cout << "Helo Pune ";
                exit( 0 );
                 
            }
            

        default : cout << "Sorry" << endl;
    }
}
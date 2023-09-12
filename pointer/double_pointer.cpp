#include<iostream>
using namespace std;



void upadate(int **p2){

    //p2 = p2 + 1; // no change 

    //*p2 = *p2 + 1; //change value of p

    **p2 = **p2 + 1; //change value of i
}

int main(){

// double pointer
/*
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << i << endl;   //5
    cout << *p << endl;  //5
    cout << **p2 << endl;//5

    cout << &i << endl; //0x61ff08
    cout << p << endl; //0x61ff08
    cout << *p2 << endl; //0x61ff08


    cout << &p << endl; //0x61ff04
    cout << p2 << endl; //0x61ff04
*/

//double pointer with function
    
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl << endl;
    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;

    upadate(p2);
    cout << endl;
     
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;
    cout << endl << endl;


    return 0;
}
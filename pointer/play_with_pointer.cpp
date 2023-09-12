#include<iostream>
using namespace std;

int main(){

   //pointer to int is created , and pointing to some garbage address

    //int *p = 0;
    //cout << *p << endl;

//1
    // int i = 5;

    // int *q = &i;
    // cout << q << endl;
    // cout << *q << endl;

    // int *p = 0;
    // p = &i;
    // cout << p << endl;
    // cout << *p << endl;

//2

    int num = 5;
    int a = num ;
    cout << "before" << num << endl;
    a++;
    cout << "after" << num << endl << endl;

    int *p = &num;
    cout << "before" << num << endl;
    (*p)++;
    cout << "after" << num << endl;
    
    //copying pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl; 


//3
// important concepts
    int i = 3;
    int *t = &i;
    //cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;

    cout << "before t "<< t << endl;
    t = t + 1;
    cout << "After t "<< t << endl;
    //if t = 100 then 
    //t++; means t = 104 (int) 
    //           t = 108 (double)


    return 0;
}
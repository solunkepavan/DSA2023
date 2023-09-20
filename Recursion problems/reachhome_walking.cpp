#include<iostream>
using namespace std;


void reachhome(int src , int dest){
    cout << "The source is "<< src << " and Destination is "<< dest << endl;

    //base case
    if(src == dest){
        cout << "reached"<<endl;
        return;
    }

    //processing -> 1step agye 
    src++;

    //recursive relation
    reachhome(src, dest);
}

int main(){
    int dest = 10;
    int src = 1;

    reachhome(src,dest);

    return 0;
}
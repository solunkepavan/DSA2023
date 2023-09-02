#include<iostream>
using namespace std;

int main(){

    int amount;
    cout<< "Enter amount :"<<endl;
    cin >> amount;
    cout<< endl;
    int a , b ,c ,d;

    int choice;

    switch (1){

        case 1: a = amount / 100; 
                    amount = amount % 100;
                    cout << "No of 100 Rupee notes required are = "<<a<< endl;
                    //break;

        case 2: b = amount / 50;
                    amount = amount % 50;
                    cout << "No of 50 Rupee notes required are = "<<b << endl;
                   // break;

        case 3: c = amount / 20;
                    amount = amount % 20;
                    cout << "No of 20 Rupee notes required are = "<<c << endl;
                    //break;

        case 4: d = amount / 10;
                    amount = amount % 10;
                    cout <<"No of 100 Rupee notes required are = "<<d << endl;
                    //break;

        //default : cout << "\nPlaese enter valid amount of note. " << endl;
    }

    cout<< endl;
    return 0;
}


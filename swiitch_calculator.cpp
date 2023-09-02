#include<iostream>
using namespace std;

int main(){

    int a,b;
    int add,sub,mul,div;

    cout << "\nEnter the value of a :\n";
    cin >> a ;

    cout << "\nEnter the value of b :\n";
    cin >> b ;


    cout << "Operations:\n\n";
    cout << "1.Addition \n2.Subtraction \n3.MUltiplication \n4.Division \n\n";

    int operartion;
    cout <<"Chooes Operation to be perform :\n";
    cin >> operartion;

  

    
    switch (operartion){

        case 1: cout << "\nAdiition = ";
                add = a + b;
                cout << add << endl;
                break;

        case 2: cout << "\nSubtraction = ";
                sub = a - b;
                cout << sub << endl;
                break;

        case 3: cout << "\nMultiplication = ";
                mul = a * b;
                cout << mul << endl;
                break;

        case 4: cout << "\nDivision = " ;
                div = a / b;
                cout << div << endl;
                break;

        default : cout << "\nPlaese enter valid operation. " << endl;
    }

    cout<< endl;
    return 0;
}
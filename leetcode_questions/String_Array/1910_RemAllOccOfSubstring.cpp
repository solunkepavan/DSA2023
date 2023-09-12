#include<iostream>
using namespace std;

string removeOccurrences(string s, string part) {

        while(s.length()!=0 && s.find(part) < s.length()){

            s.erase(s.find(part),part.length());
        }
        return s;
    }

int main(){
    string s;
    cout << "Enter a string :"<< endl;
    cin >> s;

    string part;
    cout << "Enter part of string : "<< endl;
    cin >> part;

    cout << "The final string is :"<< removeOccurrences(s,part);
}
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

char toLower(char ch){

    if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A' + 'a';
    }
    return ch;
}

bool checkPalindrome(string s)
{
   int st = 0;
   int e = s.size() - 1;

   while(st <= e){

       if(toLower( s[st] ) == toLower( s[e] ) ){
           st++;
           e--;
       }
       else if(isalnum( s[st] ) == 0 ){  //In C++, the isalnum() function checks if the given character is an alphanumeric character.
                                        //It returns a non-zero value if the character is an alphanumeric character, and 0 otherwise.
           st++;
       }
       else if( isalnum( s[e] ) == 0 ){
           e--;
       }
       else{
           return false;
       }
   }
   return true;
}

int main(){

    string s;
    cout << "Enter a string"<< endl;

    cin >> s;

    cout << "String is Palindrome :"<< checkPalindrome(s)<<endl;
}
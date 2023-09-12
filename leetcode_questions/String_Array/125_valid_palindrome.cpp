#include<iostream>
#include <bits/stdc++.h>
using namespace std;

char valid(char ch){
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
        return 1;
    }
    return 0;
}

char toLower(char ch){

    if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A' + 'a';
    }
    return ch;
}

bool checkPalindrome(string a){

    int s = 0;
    int e = a.length()-1;
    while(s <= e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s){

    string temp = "";

    //faltu char hatao
    for(int i=0; i<s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    //to lower case
    for(int i=0; i<s.length(); i++){
        temp[i] = tolower(temp[i]);
    }
    return checkPalindrome(temp);
}

int main(){

    string s;
    cout << "Enter a string :"<< endl;
    cin >> s;

    cout << "String is valid palindrome :"<<isPalindrome(s)<<endl;
    return 0;
}
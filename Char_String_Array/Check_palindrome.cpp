#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char ch[], int n){

    int s = 0;
    int e = n-1;
    while(s <= e){
        if(toLowerCase(ch[s]) != toLowerCase(ch[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


int main(){

    char ch[20];

    cout << "Enter string: " <<endl;
    cin >> ch;
    cout <<"String is  " <<ch <<endl;

    int count = 0;
    int i = 0;
    while(ch[i] != '\0'){
        count++;
        i++;
    }
    
    cout << "Length of name: "<<count<<endl;

    if(checkPalindrome(ch,count)){
        cout << "String is palindrome"<<endl;
    }
    else{
        cout << "String is not palindrome"<<endl;
     }

}
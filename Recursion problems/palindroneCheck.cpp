#include<iostream>
using namespace std;

//using one pointer
bool CheckPalindrome(string str,int i)
{     
    if(str.size()==1)
        return true ;

    if(i>str.size()-1-i )
      return true;

    else{

       if(str[i]!=str[str.size()-1-i])
             return false ;

       else 
       { 
             return CheckPalindrome(str,++i); 
        }
    }

}

int main(){

     string name = "nitin";
        cout << endl ;
        int i = 0 ;
        bool isPalindrome = CheckPalindrome(name, i);
        
        if(isPalindrome){
            cout << "It is a palindrome "<< endl ;
        }
        else{
            cout << "It is not a palindrome"<< endl ;
        }

    return 0;
}

/*

//using two ponter
bool CheckPalindrome(string str, int i, int j){

    //base case
    if(i > j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursive call
        return CheckPalindrome(str , i+1, j-1);
    }
}

int main(){

     string name = "nitin";
        cout << endl ;
        bool isPalindrome = CheckPalindrome(name, 0, name.length() - 1);
        
        if(isPalindrome){
            cout << "It is a palindrome "<< endl ;
        }
        else{
            cout << "It is not a palindrome"<< endl ;
        }

    return 0;
}

*/
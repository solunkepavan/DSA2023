#include<iostream>
using namespace std;

/*

// PATTERN NO: 1

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}


Output:

Enter any number 
5
* 
* * 
* * * 
* * * * 
* * * * * 

*/

/*
//PATTERN NO:2

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
Enter any number 5
1
22
333
4444
55555
*/



/*

//PATTERN NO:3

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/


/*

Enter any number 5
1
12
123
1234
12345
*/


/*
//PATTERN NO: 4

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    int i=1;
    int c=1;
    while(i<=n){
        int j=1;
        while(j<i){
            cout<<c<<" ";
            c=c+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/

/*
Enter any number 5

1
2 3
4 5 6
7 8 9 10

*/



/*

//PATTERN NO: 5

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
          
        //int c=i;
        while(j<i){
            cout<< i+j <<" ";
            //c = c + 1;
            j = j + 1;
           
        }
        cout<<endl;
        i=i+1;
    }
}

*/


/*
Enter any number 5

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/


/*
//PATTERN NO: 6

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=i)//while(j<i)
        {
            //cout<<i-j<<" ";
            cout<<i-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/


/*
//PATTERN NO: 7

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
     //char ch=65;
    //char a[4]={'A','B','C','D'};
    int i=1;
    while(i<n){

        int j=1;
      
        while(j<=n)
        {
            //cout<<a[i]<<" ";
            char ch='A'+i-1;
            //char ch='65'+i-1;
           
            cout<<ch;
           
            j=j+1;
        }
        cout<<endl;
       // ch+=1;
        i=i+1;
        
    }
}


*/

/*
Enter value of n:4
A A A 
B B B 
C C C 
D D D 
*/




/*

//PATTERN NO: 8

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<n){

        int j=1;
      
        while(j<=n)
        {
         
           char ch='A'+j-1;
           cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
   
        i=i+1;
        
    }
}

*/


/*

Enter value of n:5

A B C D E
A B C D E
A B C D E
A B C D E

*/



/*
//PATTERN NO: 9

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<n){

        int j=1;
        
        while(j<n)
        {
            cout<<ch<<" ";
            ch+=1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
*/

/*

Enter value of n:4
A B C
D E F
G H I*/


/*
//PATTERN NO: 9

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
   
    while(i<n){

        int j=1;
        
        while(j<n)
        {
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            ch+=1;
            j=j+1;
        }
        cout<<endl;
        //ch+=1;
        i=i+1;
        
    }
}
*/
/*
Enter value of n:5
A B C D 
B C D E 
C D E F
D E F G*/




/*
//PATTERN NO: 10

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            //ch+=1;
            j=j+1;
        }
        cout<<endl;
        ch+=1;
        i=i+1;
        
    }
}
*/

/*

Enter value of n:4
A
B B
C C C
D D D D
*/

/*//PATTERN NO: 10

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    //char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";
            //ch+=1;
            j=j+1;
        }
        cout<<endl;
        //ch+=1;
        i=i+1;
        
    }
}
*/

/*
Enter value of n:4
A
B B
C C C
D D D D
*/





/*//PATTERN NO: 11

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        
        while(j<=i)
        {
            
            cout<<ch<<" ";
            ch+=1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
*/


/*Enter value of n:4
A
B C
D E F
G H I J*/




/*
//PATTERN NO: 12

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        
        while(j<=i)
        {
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            //ch+=1;
            j=j+1;
        }
        cout<<endl;
        //ch+=1;
        i=i+1;
        
    }
}*/

/*
Enter value of n:4
A
B C
C D E
D E F G*/



/*
//PATTERN NO: 13

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i)
        {
            cout<<start<<" ";
            start+=1;
            j=j+1;
        }
        cout<<endl;
        //ch+=1;
        i=i+1;
        
    }
}*/
/*
Enter value of n:4
D 
C D 
B C D 
A B C D
*/


/*
//PATTERN NO: 14

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=0;
    
    while(i<=n){

        //first print space
        int space=i-1;
        while(space){
            cout<<" ";
            space-=1;
        }

        int j=1;
        while(j<=i)
        {
            cout<<"*";
        
            j=j+1;
        }
        cout<<endl;
        
        i=i+1;
        
    }
}


/*
Enter value of n:4
   *
  **
 ***
****
*/


/*
//PATTERN NO: 15

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    
    while(i<=n){

        //first print Star
        int Star=n-i+1;
        while(Star){
            cout<<"*";
            Star-=1;
        }

        int j=1;
        while(j<=i)
        {
            j=i-1;
            cout<<" ";
        
            j=j+1;
        }
        cout<<endl;
        
        i=i+1;
        
    }
}


/*
Enter value of n:4

****
***
**
*
*/



/*
//PATTERN NO: 16

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    int j=1;
    
    while(i<=n){

        //first tringle
        int j=1;
        int value=n-i+1;
        while(j<=value)
        {
            
            cout<<j<<" ";
        
            j=j+1;
        }

        //star
        int start=2*(i-1);
        while(start){
            cout<<"*"<<" ";
            start--;

        }

        //second tringle
        int count=n-i+1;
        while (count){
            cout<<count<<" ";
            count--;

        }
       

        cout<<endl;
        
        i=i+1;
        
    }
}
*/

/*

Enter value of n:5

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 

*/


/*

//PATTERN NO: 17

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    
    while(i<=n){

        //first print space
        int space=n-i;
        while(space){
            cout<<" ";
            space-=1;
        }

        //print 1st triangle
        int j=1;
        while(j<=i)
        {
            cout<<j;
        
            j=j+1;
        }

        //print 2nd triangle 

        int value =i-1;
        while(value){
            cout<<value;
            value=value-1;
        }
        cout<<endl;
        
        i=i+1;
        
    }
}
*/
/*
Enter value of n:4
   1
  121
 12321
1234321
*/



/*
//PATTERN NO: 18

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    
    while(i<=n){

        //first print space
        int space=n-i;
        while(space){
            cout<<"  ";
            space-=1;
        }

        int j=1;
        while(j<=i)
        {
            cout<<" "<<i;
        
            j=j+1;
        }
        cout<<endl;
        
        i=i+1;
        
    }
}
 */
/*
Enter value of n:4
       1
     2 2
   3 3 3
 4 4 4 4
 */

/*

//not solved
//PATTERN NO: 19

int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int i=1;
    
    while(i<=n){

        //first print space
        int space=2*(i-1);
        while(space){
            cout<<" ";
            space-=1;
        }
 //second tringle
        int count=n-i+1;
        while (count){
            cout<<count;
            count--;

        }
        cout<<endl;
        
        i=i+1;
        
    }
}
*/

/*
int main(){

    int input,repeat_full = 1;
    cin >> input;

    while (repeat_full <= input)
    {
        int i=1;
        int d = input;
        while (input >= repeat_full)
        {
            cout <<"";
            input = input - 1;
        }

        input = d;

        while (i<=repeat_full)
        {
            cout << "*" << " ";
            i=i+1;
        }
        cout <<endl;
        repeat_full = repeat_full + 1;

    }
    
}

* 
* * 
* * * 
* * * * 
* * * * * 
*/


int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;

    int i=1;
    
    while(i<=n){

        int j=1;

        while(j<=i){
            cout<<"*"<<" ";
            j+=1;
        
        }
        cout<<endl;
        
        i=i+1;
        
    }
}
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    private:
    
    bool konws(vector<vector<int> >& M, int a, int b){
        
        if(M[a][b] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        //step 1: push all element in the stack 
        for(int i = 0; i<n; i++){
            s.push(i);
        }
        
        //step2 : get 2 element & comapre them 
        
        while(s.size() > 1){
                
            int a = s.top();
            s.pop();     
            
            int b = s.top();
            s.pop();
            
            if(konws(M , a , b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        int ans = s.top();
        
        //single element in the stack is a potential celebrity
        //so varify it 
        
        int zerocount = 0;
        
        for(int i = 0; i<n; i++){
            if(M[ans][i] == 0)
                zerocount++;
        }
        
        if(zerocount != n){
            return -1;
        }
        
        
        int onecount = 0;
        
        for(int i = 0; i<n; i++){
            if(M[i][ans] == 1)
                onecount++;
        }
        
        if(onecount != n-1){
            return -1;
        }
        
        return ans;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

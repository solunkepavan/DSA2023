//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        //step1: pop first k elements from q and put into stack
        
        stack<int> s;
        
        for(int i = 0; i<k; i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        
        //step2 : fetch element from stack and push into queue
        
        while(!s.empty()){
            int val = s.top();
            s.pop();
            q.push(val);
        }
        
        //step3: fetch first (n-k) element from Q and push_back
        
        int t = q.size() - k;
        
        while(t--){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        
        return q;
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>

using namespace std;

class node{
public: 
    int data;
    int row;
    int col;

    node(int d, int r, int c){
        data = d;
        row = r;
        col = c;
    }
};

class compare{
public:
    bool operator()(node* a, node*b){
        return a -> data > b -> data;
    }
};

int kSorted(vector<vector<int>> &a, int k, int n) {
    int mini = INT_MAX;
    int maxi = INT_MIN;

    priority_queue<node*, vector<node*>, compare> minHeap;

    //step 1 : create a minHeap for starting element of each list and track mini/max value

    for(int i = 0; i<k; i++){
        int element = a[i][0];
        mini = min(mini, element);
        maxi = max(maxi, element);
        minHeap.push(new node(element, i ,0));
    }  
    int start = mini;
    int end = maxi;

    //process ranges
    while(!minHeap.empty()){

        //min fetch
        node* temp = minHeap.top();
        minHeap.pop();

        mini = temp -> data;

        //range or answer updation
        if(maxi - mini < end - start){
            start = mini;
            end = maxi;
        }

        //next element exists
        if(temp -> col + 1 < n){
            maxi = max(maxi, a[temp -> row][temp -> col + 1]);
            minHeap.push(new node(a[temp -> row][temp -> col + 1], temp -> row, temp -> col + 1));
        }
        else{
            //next element does not exist
            break;
        }
    }
    return (end - start + 1);
}

int main() {
    vector<vector<int>> a = {{2, 6, 12, 34},
                             {1, 9, 20, 1000},
                             {23, 34, 90, 2000}};
    int k = a.size(); // Number of arrays
    int n = a[0].size(); // Size of each array

    int kSortedLength = kSorted(a, k, n);
    cout << "The length of the k-sorted array is: " << kSortedLength << endl;

    return 0;
}

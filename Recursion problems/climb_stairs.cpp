#include<iostream>
using namespace std;

int countDistinctWayToClimbstairs(long long nstairs){
        //base case
        if(nstairs < 0){
            return 0;
        }

        if(nstairs == 0){
            return 1;
        }

        //R.R
        int ans = countDistinctWayToClimbstairs(nstairs - 1)
                + countDistinctWayToClimbstairs(nstairs - 2);

        return ans;
}

int main(){
    int n;
    cout << "Enter number of stairs "<< endl;
    cin >> n;

    cout << countDistinctWayToClimbstairs(n);

    return 0;
}
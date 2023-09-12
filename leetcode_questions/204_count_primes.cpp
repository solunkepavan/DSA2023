#include<iostream>
#include<vector>
using namespace std;

 int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1,true);

        prime[0] = prime[1] = false;

        for(int i = 2; i<n; i++){
            if(prime[i]){
                count++;

                for(int j = 2*i; j<n; j = j+i){
                    prime[j] = 0;
                }
            }
        }
        return count;
    }

int main(){
    int n;
    cout << "Enter number :"<<endl;
    cin >> n;

    int count = countPrimes(n);

    cout << "the number of prime numbers that are strictly less than n :"<<count<<endl;
        
    }



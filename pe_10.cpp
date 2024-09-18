#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int ulli;
 
ulli sieve(int n){
    ulli sum = 0;
    vector<bool> prime(n+1, true);
    
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
 
    for (int p = 2; p <= n; p++){
        if(prime[p])  sum += p;
    }
    return sum;
}



int main(){
    cout << sieve(2000000);
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int sieve(int n){
    int count = 0;
    vector<bool> prime(n, true);
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true){
            for(int i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
 
 
    for (int p = 2; p <= n; p++){
        if(prime[p]) count++;
        if(count == 10001) return p;
    }
    return 0;
}
 
int main(){
    int res = sieve(10000000);
    cout << res;
    
    return 0;
}
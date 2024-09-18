#include <bits/stdc++.h>
using namespace std;



bool comb(int n, int k){
    long double result = 1;
    if(k < floor(n/2)) k = n-k;
   
    for(int i = n; i > k; i--){
        result = result*double(i);
        result = result/(double(i-k));
        if(log10(result) >= 6){
            return true;
        }
    }
    return false;
}


int main(){
    int count = 0;
   
    for(int n = 1; n <= 100; n++){
        for(int r = 0; r <= n; r++){
            if(comb(n,r)){
                count++;
            }
        }
    }
    cout << count;
}

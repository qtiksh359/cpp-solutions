#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n <= 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n = 97;
    bool found = false;
    while(!found){
        int c = 0; n += 2;
        if(!prime(n)){
            for(int i = 1; i <= floor(sqrt(n/2)); i++){
                if(prime(n-2*i*i)){
                    c++;
                    break;
                }
            }
            if(c==0) found = true;
        }
    }
    cout << n;
}
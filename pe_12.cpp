#include <bits/stdc++.h> 
using namespace std;

typedef unsigned long long int ulli;

ulli fac(ulli n){
    ulli count = 1;
    for(ulli i = 1; i*i <= n; i++){
        if(n%i==0) count += 2;
        if(i*i==n) count--;
    }
    return count;
}


int main(){
    bool notfound = true;
    ulli i = 1;
    while(notfound){
        ulli t = i*(i+1)/2;
        if(fac(t)>500){
            cout << t;
            notfound = false;
        }
        i++;
    }
    
    return 0;
}
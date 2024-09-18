#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

int main(){
    ulli result = 1;
    for(ulli i = 1; i <= 7830457; i++){
        result *= 2;
        result %= 10000000000LL;
    }
    cout << result * 28433 + 1;
   
}
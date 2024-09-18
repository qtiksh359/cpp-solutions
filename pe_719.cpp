#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

bool g(ulli n, ulli s){
    if (n <= s) return n == s;
    for (ulli i = 1; i <= log10(n); i++) {
        if(g(n % ulli(pow(10, i)), s - n / ulli(pow(10, i)))){
            return true;
        }
    }
    return false;
}

int main(){
    ulli sum = 0;
    for(ulli i = 4; i <= 1000000; i++){
        if((i%9 == 0 || i%9 == 1) && g(i*i,i)){
            sum += i*i;
        }
    }
    cout << sum;
}
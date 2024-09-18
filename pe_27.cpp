#include <bits/stdc++.h>
using namespace std;

bool primecheck(int n) {
    if (n <= 1) return false;
    for(int i = 2; i <= floor(sqrt(n)); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int maxprimesPrimes = 0;
    int besta = 0, bestb = 0;

    for (int a = -999; a < 1000; a++) {
        for (int b = 2; b <= 1000; b++) {
            if(primecheck(b)){
                int n = 0;
                while(primecheck(n * n + a * n + b)){
                n++;
            }
            if(n > maxprimesPrimes){
                maxprimesPrimes = n;
                besta = a;
                bestb = b;
            }  
            }
        }
    }

    cout << besta << " " << bestb << " " << besta*bestb << endl;

}
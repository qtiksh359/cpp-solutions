#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}


int main(){
    unsigned long long int num = 600851475143;
    vector<int> primes;
    int i = 3;
    while(num != 1){
        while(prime(i) && num%i==0){
            primes.push_back(i);
            num /= i;
        }
        i++;
    }
    cout << primes[primes.size()-1];
}

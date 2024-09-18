#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<int> result;
    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            result.push_back(p);
        }
    }
    return result;
}

int main() {
    int limit = 1000000;
    vector<bool> prime = sieve(limit);
    vector<int> primes; primes.push_back(2);
    for(int i = 3; i < limit; i+=2){
        if(prime[i]){
            primes.push_back(i);
        }
    }
   

    int maxsum = 0, maxlen = 0;
    int cursum = 0;
    int left = 0, right = 0;

    while(left < primes.size()){
        if(right < primes.size()) cursum += primes[right];

        if(cursum < limit){
            if(prime[cursum] && (right - left + 1 > maxlen)){
            maxlen = right - left + 1;
            maxsum = cursum;
            }  
        }
       
        if(cursum >= limit){
            cursum = 0;
            left++;
            right = max(left-1,0);
        }
        right++;
    }

    cout << maxsum <<  " " << maxlen << endl;
}
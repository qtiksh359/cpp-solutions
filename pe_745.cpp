#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
#include <algorithm>
using namespace std;

typedef unsigned long long ulli;

const ulli MOD = 1000000007;
const ulli MAXN = 1e14;
const ulli SQRT_MAXN = 10000000;

vector<ulli> primes;
bitset<SQRT_MAXN + 1> is_prime;

void sieve() {
    is_prime.set();
    is_prime[0] = is_prime[1] = 0;
    for (ulli i = 2; i * i <= SQRT_MAXN; ++i) {
        if (is_prime[i]) {
            for (ulli j = i * i; j <= SQRT_MAXN; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    for (ulli i = 2; i <= SQRT_MAXN; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

ulli sqprime(ulli n) {
    ulli result = 1;
    ulli minpower = ULLONG_MAX;
    for (ulli p : primes) {
        if (p * p > n) break;
        if (n % p == 0) {
            ulli count = 0;
            while (n % p == 0) {
                n /= p;
                count++;
            }
            minpower = min(minpower, count);
            ulli d = 1;
            for (ulli i = 1; i <= count; i++) {
                d = (d * p) % MOD;
            }
            result = (result * d) % MOD;
        }
    }
    if (n > 1) { 
        minpower = min(minpower, 1ULL);
        result = (result * n) % MOD;
    }
    return result;
}

int main() {
    sieve();
    ulli result = 0;
    
    ulli range_size = 1e7; 
    ulli num_segments = (MAXN + range_size - 1) / range_size;
    
    for (ulli seg = 0; seg < num_segments; ++seg) {
        ulli start = seg * range_size + 1;
        ulli end = min((seg + 1) * range_size, MAXN);
        for (ulli i = start; i <= end; ++i) {
            result = (result + sqprime(i)) % MOD;
        }
    }
    
    cout << result << endl;
    return 0;
}
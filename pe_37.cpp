#include <bits/stdc++.h>
using namespace std;

bool prime(unsigned long long int n) {
    if (n < 2) return false;
    for (unsigned long long int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool rightcheck(unsigned long long int n) {
    while (n > 0) {
        if (!prime(n)) {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool leftcheck(unsigned long long int n) {
    unsigned long long int divisor = pow(10, floor(log10(n)));
    while (divisor > 0) {
        if (!prime(n)) {
            return false;
        }
        n %= divisor;
        divisor /= 10;
    }
    return true;
}

int main() {
    unsigned long long int sum = 0;
    int count = 0;
    unsigned long long int i = 11; 

    while (count < 11) {
        if (leftcheck(i) && rightcheck(i)) {
            count++;
            sum += i;
        }
        i++;
        while ((i % 2 == 0) || (i % 10 == 0)) {
            i++;
        }
    }
    cout << sum << endl;
    return 0;
}

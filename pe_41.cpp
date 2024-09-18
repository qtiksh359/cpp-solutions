#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

bool primecheck(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_pandigital(int n) {
    string digits = to_string(n);
    sort(digits.begin(), digits.end());
    for (int i = 0; i < digits.size(); ++i) {
        if (digits[i] != '1' + i) return false;
    }
    return true;
}

int main() {
    ulli maxpan = 0;
    for (int num = 7654321; num >= 1; nu--) {
        if (is_pandigital(num) && primecheck(num)) {
            maxpan = num;
            break;
        }
    }
    cout << maxpan << endl;
}
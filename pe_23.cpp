#include <bits/stdc++.h>
using namespace std;

const int N = 28124;
int ab[N];
bool can[N];

int main() {
    for (int i = 1; i < N; ++i) {
        for (int j = 2 * i; j < N; j += i) {
            ab[j] += i;
        }
    }

    for (int i = 1; i < N; ++i) {
        if (ab[i] > i) {
            for (int j = i; j < N - i; ++j) {
                if (ab[j] > j) {
                    can[i + j] = true;
                }
            }
        }
    }

    unsigned long long int sum = 0;
    for (int i = 1; i < N; ++i) {
        if (!can[i]) {
            sum += i;
        }
    }

    cout << sum;
}
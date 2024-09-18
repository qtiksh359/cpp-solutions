#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int maxn = 300000;

    maxn += 4 - 1;

    vector<unsigned int> primeFactors(maxn + 1, 0);

    for (unsigned int i = 2; i <= maxn; ++i) {
        if (primeFactors[i] == 0) {
            for (unsigned int j = i; j <= maxn; j += i)
                primeFactors[j]++;
        }
    }

    unsigned int currentRun = 0;
    for (unsigned int i = 2; i <= maxn; ++i) {
        if (primeFactors[i] == 4) {
            currentRun++;
            if (currentRun >= 4)
                cout << (i - 4 + 1) << endl;
        } else {
            currentRun = 0;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return std::gcd(a, b);
}

bool curious(int num, int den) {
    int numtens = num / 10;
    int numunits = num % 10;
    int dentens = den / 10;
    int denunits = den % 10;

    if (numunits == 0 && denunits == 0) return false;

    if (numtens == dentens && numunits * den == num * denunits) return true;
    if (numtens == denunits && numunits * den == num * dentens) return true;
    if (numunits == dentens && numtens * den == num * denunits) return true;
    if (numunits == denunits && numtens * den == num * dentens) return true;

    return false;
}

int main() {
    int productnum = 1;
    int productden = 1;

    for (int num = 10; num < 100; num++) {
        for (int den = num + 1; den < 100; den++) { 
            if (curious(num, den)) {
                productnum *= num;
                productden *= den;
            }
        }
    }

    int gcdd = gcd(productnum, productden);
    productnum /= gcdd;
    productden /= gcdd;

    cout << productden << endl;
}

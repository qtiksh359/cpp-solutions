#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int last = 0;
    for(int i = 1; i <= 1000; i++){
        unsigned long long int temp = 1;
        for(int j = 1; j <= i; j++){
            temp *= i;
            temp = temp%10000000000;
        }
        last += temp;
        last = last%10000000000;
    }
    
    cout << last;
}
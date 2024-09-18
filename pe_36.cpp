#include <bits/stdc++.h>
using namespace std;    

bool basetenpalindrome(int num){
    string s = to_string(num);
    for(int i = 0; i < floor(s.length()/2); i++){
        if(s[i]!=s[s.length()-1-i]) return false;
    }
    return true;
}


bool basetwopalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 2;
        reverse = (reverse << 1) | digit;
        num >>= 1;
    }

    return original == reverse;
}

int main() {
    unsigned long long int sum = 0;
    for (int i = 1; i < 1000000; ++i) {
        if(basetenpalindrome(i) && basetwopalindrome(i)){
            sum += i;
        }
    }
    cout << sum;
}
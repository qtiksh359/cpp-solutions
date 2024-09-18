#include <bits/stdc++.h>
using namespace std;    

int factorial(int n){
    int result = 1;
    for(int i = n; i >= 1; i--){
        result *= i;
    }
    return result;
}


int main(){
    unsigned long long int sum = 0;
    for(int i = 1; i <= 10000000; i++){
        vector<int> digits;
        string s = to_string(i);
        int tempsum = 0;
        for(int i = 0; i < s.length(); i++){
            digits.push_back(int(s[i]-'0'));
        }
        for(int i = 0; i < digits.size(); i++){
            tempsum += factorial(digits[i]);
        }
        if(tempsum == i) sum += i;
    }
    cout << sum;
}
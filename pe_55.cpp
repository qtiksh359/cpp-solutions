#include <bits/stdc++.h>
using namespace std;

string as(string num1, string num2) {
    int carry = 0;
    string result;

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digitSum = sum % 10;

        result.push_back(char(digitSum + '0'));

        if (i >= 0) i--;
        if (j >= 0) j--;
    }

    reverse(result.begin(), result.end());

    return result;
}

bool pali(string s){
    int n = s.length();
    for(int i = 0; i <= floor(n/2); i++){
        if(s[i]!=s[n-1-i]) return false;
    }
    return true;
}

int ly(string s, int count){
    string t = s; reverse(t.begin(),t.end());
    string m = as(s,t);
    count++;
    if(count < 50){
        if(pali(m)){
            return count;
        }else{
            return ly(m,count);
        }
    }else{
        return 50;
    }
}

int main() {
    int count = 0;
    for(int i = 1; i < 10000; i++){
        if(ly(to_string(i),0) < 50) count++;
    }
    cout << count;
}
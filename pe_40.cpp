#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    for(int i = 1; i <= 1000000; i++){
        s += to_string(i);
    }
    cout << s[0] << s[9] << s[99] << s[999] << s[9999] << s[99999] << s[999999] << s[9999999];
}
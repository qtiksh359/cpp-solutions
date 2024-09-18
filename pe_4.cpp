#include <bits/stdc++.h>
using namespace std;

bool pali(int z){
    string s = to_string(z);
    int n = s.length();
    for(int i = 0; i <= floor(n/2); i++){
        if(s[i]!=s[n-1-i]) return false;
    }
    return true;
}


int main(){
    int maxv = 0;
    for(int i = 999; i >= 100; i--){
        for(int j = 999; j >= 100; j--){
            int d = i*j;
            if(pali(d)){
                maxv = max(maxv,d);
            }
        }
    }
    cout << maxv;
    
    return 0;
}
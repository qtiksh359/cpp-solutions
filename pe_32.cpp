#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

int main(){
    set<int> val;
    ulli sum = 0;
    for(int i = 1; i <= 9999; i++){
        for(int j = 1; j <= 9; j++){
            string s = to_string(i);
            string t = to_string(j);
            string k = to_string(i*j);
            string b = s+t+k;
            sort(b.begin(),b.end());
            if(b == "123456789"){
                val.insert(i*j);
            }
        }
    }
    for(int i = 1; i <= 999; i++){
        for(int j = 1; j <= 99; j++){
            string s = to_string(i);
            string t = to_string(j);
            string k = to_string(i*j);
            string b = s+t+k;
            sort(b.begin(),b.end());
            if(b == "123456789"){
                val.insert(i*j);
            }
        }
    }
    for(int i : val){
        sum += i;
    }
    cout << sum;
}

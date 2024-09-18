#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    unordered_set<ll> pent;
    unordered_set<ll> hex;
   
    for(ll i = 1; i <= 1000000; i++){
        ll c = i*((i*3)-1)/2;
        ll d = i*((i*2)-1);
        pent.insert(c);
        hex.insert(d);
    }
    for(auto a : pent){
        if (a == 40755 || a==1){
            continue;
        }
        auto it = hex.find(a);
        if(it != hex.end()){
            cout << a << endl;
        }
    }
}
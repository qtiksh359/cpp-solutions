#include <bits/stdc++.h>
using namespace std;


bool prime(int n){
    if(n <= 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

vector<string> gp(string str) {
    vector<string> permutations;
    string t = str;

    do {
        permutations.push_back(t);
    } while (next_permutation(t.begin(), t.end()));

    return permutations;
}

int main(){

    for(int i = 1001; i <= 9999; i++){
        string k = to_string(i);
        sort(k.begin(),k.end());
        vector<string> result = gp(k);
        for(string s : result){
            string g = to_string(2*stoi(s)-i);
            auto it = find(result.begin(),result.end(),g);
            if(it != result.end() && stoi(s)-i > 0 && prime(stoi(s))&&prime(stoi(g))&&prime(i)&&i!=1487){
                cout << i << " " << s << " " << g;
                i+= 9999;
            }
        }
    }
}
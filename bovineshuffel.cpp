#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout); 
    
    int n;
    cin >> n;

    int order[n], ids[n], initialorder[n];
    unordered_map<int,int> pairings;

    for(int i = 0; i < n; i++){
        cin >> order[i];
    }
    for(int i = 0; i < n; i++){
        cin >> ids[i];
    }
    for(int i = 0; i < n; i++){
        pairings[order[i]] = i+1;
    } 
    for(int i = 0; i < n; i++){
        int initialpos = pairings[order[i]];
        for(int k = 0; k < 3; k++){
            initialpos = pairings[initialpos];
        }
        initialorder[initialpos-1] = ids[i]; 
    }
    for(int i : initialorder){cout << i << endl;}
    return 0;
}
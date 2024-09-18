#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k; cin >> n >> k;

    int wordlim = 0;
    for(int i = 0; i < n; i++){
        string a; cin >> a;
        if(i == 0){
            cout << a;
            wordlim += a.length();
        }
        if(a.length()+wordlim <= k && i != 0){
            cout << " " << a;
            wordlim += a.length();
        }else if(i != 0){
            cout << endl;
            cout << a;
            wordlim = a.length();
        }
    } 
}

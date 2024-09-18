#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m; cin >> x >> y >> m;

    int maxi = 0;

    for(int i = 0; i <= floor(m/x); i++){
        for(int j = 0; j <= floor(m/y); j++){
            if(i*x+j*y <= m){
                maxi = max(maxi,i*x+j*y);
            }
        }
    }
    cout << maxi;
   
}
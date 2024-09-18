#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int m, n, k;
    cin >> m >> n >> k;
    string butt[k*m];
    for(int i = 0; i < m; i++){
        string prot;
            for(int j = 0; j < n; j++){
                char a; cin >> a;
                for(int l = 0; l < k; l++){
                    prot += a;
            }
        }
        butt[i] = prot;
    }
    
    for(int i = 0; i < m; i++){
        for(int b = 0; b < k; b++){
            cout << butt[i] << endl;
        }
    }
    return 0;
}
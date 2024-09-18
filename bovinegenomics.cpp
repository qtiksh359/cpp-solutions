#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);

    int n, m; cin >> n >> m;

    vector<set<char>> spotty(m);
    vector<set<char>> plain(m);

    int loc = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char a; cin >> a;
            spotty[j].insert(a);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char a; cin >> a;
            plain[j].insert(a);
        }
    }
    for(int i = 0; i < m; i++){
        vector<char> result;
        set_intersection(plain[i].begin(), plain[i].end(), spotty[i].begin(), spotty[i].end(), inserter(result, result.begin())); 
        if(result.size()==0) loc ++;
    }

    cout << loc;

}


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("guess.in","r",stdin);
    freopen("guess.out","w",stdout);

    int n; cin >> n;

    vector<pair<string,set<string>>> character(n);

    for(int i = 0; i < n; i++){
        string a; cin >> a; 
        int k; cin >> k;
        set<string> b;
        for(int j = 0; j < k; j++){
            string c; cin >> c;
            b.insert(c);
        }
        character[i] = make_pair(a,b);
    }

    int maxi = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            set<string> a = character[i].second, b = character[j].second; vector<string> result;
            set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(result, result.begin())); 
            int size = result.size();
            maxi = max(maxi,size);
        }
    }

    cout << maxi+1;
}
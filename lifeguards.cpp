#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("lifeguards.in","r",stdin);
    freopen("lifeguards.out","w",stdout);
 
    int n; cin >> n;

    vector<set<int>> times;

    vector<pair<int,int>> shift(n);

    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        shift[i] = make_pair(a,b);
    }

    for(int i = 0; i < n; i++){
        set<int> time;
        for(int j = i+1; j < n+i; j++){
            int a = shift[(j%n)].first, b = shift[(j%n)].second;
            for(int k = a; k < b; k++){
                time.insert(k);
            }
        }
        times.push_back(time);
    }

    int maxtime = 0;

    for(set<int> d : times){
        int len = d.size();
        maxtime = max(maxtime,len);
    }

    cout << maxtime;
}


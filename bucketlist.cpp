#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    
    int n;
    cin >> n;

    vector<int> start(n), end(n), bucket(n);

    for(int i = 0; i < n; i ++){
        cin >> start[i] >> end[i] >> bucket[i];
    }

    vector<int> timeline(1001, 0); 

    for (int i = 0; i < n; i++) {
        timeline[start[i]] += bucket[i];
        timeline[end[i]] -= bucket[i];
    }

    int max_buckets = 0, current_buckets = 0;
    for (int i = 0; i < 1001; i++) {
        current_buckets += timeline[i];
        if (current_buckets > max_buckets) {
            max_buckets = current_buckets;
        }
    }

    cout << max_buckets << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int n, b; 
    cin >> n >> b;

    vector<pair<int,int>> coords(n);
    set<int> x_set, y_set;

    for(int i = 0; i < n; i++){
        int x, y; 
        cin >> x >> y;
        coords[i] = make_pair(x,y);
        x_set.insert(x);
        y_set.insert(y);
    }

    vector<int> x_vals(x_set.begin(), x_set.end());
    vector<int> y_vals(y_set.begin(), y_set.end());

    int M = n;

    for (int i = 0; i < x_vals.size(); i++) {
        for (int j = 0; j < y_vals.size(); j++) {
            int x_mid = x_vals[i] + 1;
            int y_mid = y_vals[j] + 1;

            int quad1 = 0, quad2 = 0, quad3 = 0, quad4 = 0;
            for (int d = 0; d < n; d++) {
                int x = coords[d].first, y = coords[d].second;
                if (x > x_mid && y > y_mid) quad1++;
                else if (x > x_mid && y < y_mid) quad4++;
                else if (x < x_mid && y > y_mid) quad2++;
                else if (x < x_mid && y < y_mid) quad3++;
            }
            int tempmax = max({quad1, quad2, quad3, quad4});
            M = min(M, tempmax);
        }
    }

    cout << M;

    return 0;
}
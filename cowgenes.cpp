#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<string> spotty(n);
    vector<string> plain(n);

    for (int i = 0; i < n; i++) {
        cin >> spotty[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> plain[i];
    }

    int total = 0;

    for (int a = 0; a < m; a++) {
        for (int b = a + 1; b < m; b++) {
            for (int c = b + 1; c < m; c++) {
                bool valid = 1;
                set<tuple<char, char, char>> spotty_set;
                for (int i = 0; i < n; i++) {
                    spotty_set.insert({spotty[i][a], spotty[i][b], spotty[i][c]});
                }

                for (int i = 0; i < n; i++) {
                    if (spotty_set.count({plain[i][a], plain[i][b], plain[i][c]})) {
                        valid = 0;
                        break;
                    }
                }

                total += valid;
            }
        }
    }

    cout << total;
}
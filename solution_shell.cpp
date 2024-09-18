#include <bits/stdc++.h> 
using namespace std;


int main() {
    freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);

    ios::sync_with_stdio(0);
	cin.tie(0);

    int N; cin >> N;

    vector<int> a(N), b(N), g(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i] >> b[i] >> g[i];
    }

    int maxScore = 0;

    for (int start = 1; start <= 3; ++start) {
        int currentScore = 0;
        int pebblePosition = start;

        for (int i = 0; i < N; ++i) {
            if (pebblePosition == a[i]) {
                pebblePosition = b[i];
            } else if (pebblePosition == b[i]) {
                pebblePosition = a[i];
            }
            if (pebblePosition == g[i]) {
                currentScore++;
            }
        }

        maxScore = max(maxScore, currentScore);
    }

    cout << maxScore << endl;

    return 0;
}
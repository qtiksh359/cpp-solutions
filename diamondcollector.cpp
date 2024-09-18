#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k, result = 0;
    cin >> n >> k;

    vector<int> dsize(n);

    for (int i = 0; i < n; i++) {
        cin >> dsize[i];
    }

    sort(dsize.begin(), dsize.end());

    int left = 0, right = 0;
    while (right < n) {
        if (dsize[right] - dsize[left] <= k) {
            right++;
        } else {
            left++;
        }
        result = max(result, right - left);
    }

    cout << result;

    return 0;
}
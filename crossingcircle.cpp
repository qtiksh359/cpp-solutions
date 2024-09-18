#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	string t;
	cin >> t;

	int pairs = 0;
	for (int a = 0; a < t.size(); a++) {
		for (int b = a + 1; b < t.size(); b++) {
			for (int c = b + 1; c < t.size(); c++) {
				for (int d = c + 1; d < t.size(); d++) {
					pairs += (t[a] == t[c] && t[b] == t[d]);
				}
			}
		}
	}

	cout << pairs << endl;
}
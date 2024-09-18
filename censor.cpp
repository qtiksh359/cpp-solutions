#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string text;
	string cen;
	cin >> text >> cen;

	string result;
	for (int i = 0; i < text.size(); i++) {
		result += text[i];
		if (result.size() > cen.size() && result.substr(result.size() - cen.size()) == cen) {
			result.resize(result.size() - cen.size());
		}
	}
	cout << result << endl;
}

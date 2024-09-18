#include <bits/stdc++.h>
using namespace std;

vector<string> gp(const string& str) {
    vector<string> permutations;
    string t = str;

    do {
        permutations.push_back(t);
    } while (next_permutation(t.begin(), t.end()));

    return permutations;
}

int main() {
    unsigned long long int sum = 0;
    string k = "0123456789";
    vector<string> result = gp(k);

    for (string s : result) {
        bool a = int(s[3] - '0') % 2 == 0;
        bool b = (int(s[2] - '0') + int(s[3] - '0') + int(s[4] - '0')) % 3 == 0;
        bool c = int(s[5] - '0') % 5 == 0;

        int dd = stoi(s.substr(4, 3));
        int ee = stoi(s.substr(5, 3));
        int ff = stoi(s.substr(6, 3));
        int gg = stoi(s.substr(7, 3));

        if (a && b && c && dd % 7 == 0 && ee % 11 == 0 && ff % 13 == 0 && gg % 17 == 0 && s[0] != '0') {
            sum += stoull(s);
        }
    }

    cout << sum;
}
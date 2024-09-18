#include <bits/stdc++.h>
using namespace std;

/* int countDistinct(char arr[], int n) {
    unordered_set<char> visited;
    for (int i = 0; i < n; i++) {
        visited.insert(arr[i]);
    }
    return visited.size();
} */

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 

    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout); 

    char coords[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> coords[i][j];
        }
    }
    
    int single = 0;
    int twocow = 0;

    unordered_set<char> singlewinner;
    set<pair<char, char>> twocowpair;

    auto checkLine = [&](char a, char b, char c) {
        unordered_set<char> uniqueCows = {a, b, c};
        if (uniqueCows.size() == 1) {
            singlewinner.insert(*uniqueCows.begin());
        }
        else if (uniqueCows.size() == 2) {
            auto it = uniqueCows.begin();
            char first = *it;
            char second = *(++it);
            twocowpair.insert({min(first, second), max(first, second)});
        }
    };

    for (int i = 0; i < 3; i++) {
        checkLine(coords[i][0], coords[i][1], coords[i][2]);
    }

    for (int i = 0; i < 3; i++) {
        checkLine(coords[0][i], coords[1][i], coords[2][i]);
    }

    checkLine(coords[0][0], coords[1][1], coords[2][2]);
    checkLine(coords[0][2], coords[1][1], coords[2][0]);

    single = singlewinner.size();
    twocow = twocowpair.size();

    cout << single << "\n" << twocow;

    return 0;
}
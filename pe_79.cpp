#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> attempts = {"319", "680", "180", "690", "129", "620", "762", "689", "762", "318", "368", "710", "720", "710", "629", "168", "160", "689", "716", "731", "736", "729", "316", "729", "729", "710", "769", "290", "719", "680", "318", "389", "162", "289", "162", "718", "729", "319", "790", "680", "890", "362", "319", "760", "316", "729", "380", "319", "728", "716"};
    map<char, set<char>> graph;
    vector<char> result;
    queue<char> q;
    map<char, int> indegree;

    for (string attempt : attempts) {
        for (char c : attempt) {
            graph[c] = set<char>();
            indegree[c] = 0;
        }
    }

    for (string attempt : attempts) {
        graph[attempt[0]].insert(attempt[1]);
        graph[attempt[1]].insert(attempt[2]);
    }

    for (auto it : graph) {
        for (char c : it.second) {
            indegree[c]++;
        }
    }

    for (auto it : indegree) {
        if (it.second == 0) {
            q.push(it.first);
        }
    }

    while (!q.empty()) {
        char node = q.front();
        q.pop();
        result.push_back(node);

        for (char neighbor : graph[node]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    for (char c : result) {
        cout << c;
    }

    return 0;
}
#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    
    int n, m; cin >> n >> m; int maxspeed = 0;

    vector<int> road1(100,0), road2(100,0);

    int segsum = 0;
    for(int i = 0; i < n; i++){
        int seg, speed; cin >> seg >> speed;
        std::fill(road1.begin()+segsum, road1.begin()+seg+segsum, speed);
        segsum += seg;
    }

    int segsum2 = 0;
    for(int i = 0; i < m; i++){
        int seg, speed; cin >> seg >> speed;
        std::fill(road2.begin()+segsum2, road2.begin()+seg+segsum2, speed);
        segsum2 += seg;
    }

    for(int i = 0; i < 100; i++){
        maxspeed = max(maxspeed, road2[i]-road1[i]);
    }
    cout << maxspeed;
}
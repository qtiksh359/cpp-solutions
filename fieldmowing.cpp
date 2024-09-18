#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
   
    freopen("mowing.in", "r", stdin); 
    freopen("mowing.out", "w", stdout);

    int n; cin >> n;
    
    int xcoord = 1000, ycoord = 1000;

    int grid[2001][2001];
    for(int i = 0; i < 2001; i++){
        for(int k = 0; k < 2001; k++){
            grid[i][k] = -1;
        }
    }

    grid[xcoord][ycoord] = 0;

    vector<char> direction(n,0); vector<int> steps(n,0);

    int mintime = INT_MAX, time = 0, sum = 0;

    for(int i = 0; i < n; i++){
        cin >> direction[i] >> steps[i];
        sum += steps[i];
    }

    for(int i = 1; i < n; i++){
        steps[i] += steps[i-1];
    }

    for (int t = 1; t <= sum; t++) {
    int temp;
    bool tempbool = true;
    if(t <= steps[0]){
        temp = 0;
    }else{
        for (int j = 0; j < n - 1 && tempbool; j++) {
            if(steps[j] < t && t <= steps[j + 1]) {
            temp = j+1;
            tempbool = false;
            }
        }
    }

    switch (direction[temp]) {
        case 'N': ycoord++; break;
        case 'S': ycoord--; break;
        case 'W': xcoord--; break;
        case 'E': xcoord++; break;
    }

    time++;
    if (grid[xcoord][ycoord] != -1) {
        mintime = min(mintime, t - grid[xcoord][ycoord]);
    }
    grid[xcoord][ycoord] = t;
    }

    if(mintime != INT_MAX){
        cout << mintime;
    }else{
        cout << -1;
    }
}
	
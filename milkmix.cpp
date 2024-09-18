#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int capacity[3];
    int start[3];

    for(int i = 0; i < 3; i++){
        cin >> capacity[i] >> start[i];
    }

    for(int i = 0; i < 100; i++){
        int g = i%3; int n = (i+1)%3;
        start[n] += start[g];
        if(start[n] > capacity[n]){
            start[g] = start[n] - capacity[n];
            start[n] = capacity[n];
        }else{
            start[g] = 0;
        }
    }

    for(int k = 0; k < 3; k++){
        cout << start[k] << endl;
    }

    return 0; 
}
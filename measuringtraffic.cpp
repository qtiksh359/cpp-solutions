#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    
    int n; cin >> n;

    vector<string> segtype(n);
    vector<int> start(n), end(n);
    for(int i = 0; i < n; i++){
        cin >> segtype[i] >> start[i] >> end[i];
    }


    int low = 0;
    int high = 1001;

    for(int i = n-1; i >= 0; i--){
        if(segtype[i] == "none"){
            low = max(low, start[i]);
            high = min(high, end[i]);
        }else if(segtype[i] == "on"){
            low -=end[i];
            high -= start[i];
            low = max(low,0);
        }else{
            low += start[i];
            high += end[i];
        }
    }
    cout << low << " " << high << endl;

    low = 0;
    high = 1001;

    for(int i = 0; i < n; i++){
        if(segtype[i] == "none"){
            low = max(low, start[i]);
            high = min(high, end[i]);
        }else if(segtype[i] == "on"){
            low +=start[i];
            high += end[i];
        }else{
            low -= end[i];
            high -= start[i];
            low = max(low,0);
        }
    }

    cout << low << " " << high;



    return 0;
}
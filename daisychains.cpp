#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     

    int n; cin >> n;

    vector<int> flowers(n);

    for(int i = 0; i < n; i++){
        cin >> flowers[i];
    }

    int p = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int tempsum = 0; int cnt = 0; vector<int> index;
            for(int k = i; k <= j; k++){
                tempsum += flowers[k]; cnt++; index.push_back(flowers[k]);
            }
            if(tempsum%cnt == 0){
                int avg = floor(tempsum/cnt);
                auto it = find(index.begin(),index.end(),avg);
                if(it != index.end()){
                    p++;
                }
            }
        }
    }

    cout << p;

    return 0;
}
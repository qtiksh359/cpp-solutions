#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);

    int k, n; cin >> k >> n;

    int paircount = 0;

    vector<vector<int>> input;

    for(int i = 0; i < k; i++){
        vector<int> temp(n);
        for(int j = 0; j < n; j++){
            cin >> temp[j];
        }
        input.push_back(temp);
    }

    set<pair<int,int>> pairs;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            pairs.insert(make_pair(input[0][j],input[0][i]));
        }
    }

    for(pair<int,int> p : pairs){
        int a = p.first, b = p.second;
        bool consistent = 1;
        auto it = find(input[0].begin(),input[0].end(),a);
        auto it1 = find(input[0].begin(),input[0].end(),b);
        int index = it-input[0].begin(), index1 = it1-input[0].begin();
        for(int i = 1; i < k && consistent == 1; i++){
            auto it2 = find(input[i].begin(),input[i].end(),a);
            auto it3 = find(input[i].begin(),input[i].end(),b);
            int index2 = it2-input[i].begin(), index3 = it3-input[i].begin();
            if((index < index1) != (index2 < index3)){
                consistent = 0;
            }
        }
        paircount += consistent; 
    }    

    cout << paircount;

}


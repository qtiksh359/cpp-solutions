#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<pair<int,char>> condition(n);

    for(int i = 0; i < n; i++){
        char a; int b;
        cin >> a >> b;
        condition[i] = make_pair(b,a);
    }
    sort(condition.begin(),condition.end());

    int minliar = INT_MAX;

    for(int i = 0; i < n; i++){
        int templiar = 0;
        int value = condition[i].first;
        for(int j = 0; j < n; j++){
            if(condition[j].second=='G' && value < condition[j].first){
                templiar++;
            }else if(condition[j].second=='L' && value > condition[j].first){
                templiar++;
            }
        }
        minliar = min(templiar,minliar);
    }
   cout << minliar;
}
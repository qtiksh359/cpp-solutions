#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k; cin >> n >> k;

    vector<int> diasize(n);

    for(int i = 0; i < n; i++){
        cin >> diasize[i];
    }

    sort(diasize.begin(),diasize.end());

    int result = 0;

    for(int i = 0; i < n; i++){
        int tempresult = 0;
        vector<int> temp = diasize;
        for(int j = i; j < n+i; j++){
            auto it1 = find(temp.begin(),temp.end(),temp[j%n]+k);
            if(it1 != temp.end()){
                tempresult += 2;
                temp.erase(temp.begin()+(j%n));
                temp.erase(it1-1);
            }
        }
        result = max(result, tempresult);
    }

    cout << result;
   
}
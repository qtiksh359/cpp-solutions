#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    int n;
    cin >> n;

    vector<string> name(n); 
    vector<int> day(n), change(n);

    unordered_map<int,string> hash;
    unordered_map<int,int> hash2;

    for(int i = 0; i < n; i++){
        cin >> day[i] >> name[i] >> change[i];
    }

    for(int h = 0; h < n; h++){
        hash[day[h]] = name[h];
        hash2[day[h]] = change[h];
    }
    
    sort(day.begin(),day.end());
    for (int k = 0; k < n; k++) {
        name[k] = hash[day[k]];
        change[k] = hash2[day[k]];
    }

    int bes = 7, els = 7, mil = 7;
    int total = 0;
    set<string> currentmaxers;

    for (int j = 0; j < n; j++) {
        if(name[j] == "Bessie") bes += change[j];
        if(name[j] == "Mildred") mil += change[j];
        if(name[j] == "Elsie") els += change[j];

        int tempmax = max(max(mil, bes), els);
        set<string> maxers;

        if(tempmax == mil){
            maxers.insert("Mildred");
        }
        if(tempmax == bes){
            maxers.insert("Bessie");
        }
        if(tempmax == els){
            maxers.insert("Elsie");
        }
        if(maxers != currentmaxers){
            total++;
            currentmaxers = maxers;
        }
    }

    cout << total;
    return 0;
}
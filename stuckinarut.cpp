#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    unordered_map<int,int> distance;
    vector<int> indi(n,0);
    vector<pair<int,int>> en(n),ex,nx;

    for(int i = 0; i < n; i++){
        char a; cin >> a;
        int x,y; cin >> x >> y;
        en[i] = make_pair(x,y);
        distance[x] = -1;
        if(a == 'N'){
            indi[i] = 1;
            nx.push_back(make_pair(x,y));
        }else if(a == 'E'){
            indi[i] = 2;
            ex.push_back(make_pair(y,x));
        }
    }

    sort(ex.begin(),ex.end());
    sort(nx.begin(),nx.end());

    for(int j = 0; j < ex.size(); j++){
        int y = ex[j].first, x = ex[j].second;
        ex[j] = make_pair(x,y);
    }

    for(int i = 0; i < ex.size(); i++){
        for(int j = 0; j < nx.size(); j++){
            int a = ex[i].first, b = ex[i].second;
            int c = nx[j].first, d = nx[j].second;
            if((a>-1)&&(c>-1)){
                if((c>a)&&(b>d)){
                    if((c-a)>(b-d)){
                        distance[a] = c-a;
                        ex[i] = make_pair(-1,-1);
                    }else if((b-d)>(c-a)){
                        distance[c] = b-d;
                        nx[j] = make_pair(-1,-1);
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(distance[en[i].first] == -1){
            cout << "Infinity" << endl;
        }else{
            cout << distance[en[i].first] << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("triangles.in","r",stdin);
    freopen("triangles.out","w",stdout);
 
    int n; cin >> n;

    vector<pair<int,int>> coords;

    int maxarea = 0;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        coords.push_back(make_pair(x,y));
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            pair<int,int> p1 = coords[i], p2 = coords[j];
            int a = p1.first, b = p1.second, c = p2.first, d = p2.second;
            pair<int,int> g = make_pair(a,d);
            pair<int,int> h = make_pair(c,b);
            if(find(coords.begin(),coords.end(),g)!=coords.end()){
                maxarea = max(maxarea,abs((a-c)*(b-d)));
            }else if(find(coords.begin(),coords.end(),h)!=coords.end()){
                maxarea = max(maxarea,abs((a-c)*(b-d)));
            }
        }
    }

    cout << maxarea;
}


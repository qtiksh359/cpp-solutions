#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int closer, notcloser;

    if(abs(x-a) <= abs(y-a)) {
        closer = x;
        notcloser = y;
    }else{
        closer = y;
        notcloser = x;
    }
    if(abs(b-a) <= abs(a-closer)+abs(notcloser-b)){
        cout << abs(b-a);
    }else{
        cout << abs(a-closer)+abs(notcloser-b);
    }

}
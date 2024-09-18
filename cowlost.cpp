#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
   
    int distance = 0;
    int x, y; cin >> x >> y;
    int vecdi = ceil(log2(abs(y-x)));

    if(y > x && vecdi%2 == 1){
        vecdi++;
    }else if(x > y && vecdi%2 == 0){
        vecdi++;
    }
    for(int i = 0; i < vecdi; i++){
        distance += pow(2,i+1);
    }
    distance += abs(y-x);
    if(distance != 1){
        cout << distance;
    }else{cout << 1; }



    return 0;
}
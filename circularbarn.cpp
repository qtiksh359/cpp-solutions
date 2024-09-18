#include <bits/stdc++.h>
using namespace std;




int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   freopen("cbarn.in", "r", stdin);
   freopen("cbarn.out", "w", stdout);
   int n; cin >> n; vector<int> r(n);


   for(int i = 0; i < n; i++){
       cin >> r[i];
   }
   int mindistance = INT_MAX;
   for(int k = 0; k < n; k++){
       int tempdistance = INT_MAX;


       for(int j = 1+k; j < n+k; j++){
           if(j == 1+k){
               tempdistance = r[j%n] * (j-k);
           }else{
               tempdistance += r[j%n] * (j-k);
           }
       }


       mindistance = min(mindistance, tempdistance);
   }


   cout << mindistance;
}
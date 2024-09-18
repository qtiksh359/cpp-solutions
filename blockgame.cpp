#include <bits/stdc++.h>
using namespace std;




int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   freopen("blocks.in", "r", stdin);
   freopen("blocks.out", "w", stdout);
   int n; cin >> n;


   unordered_map<char,int> letters = {{'a',0},{'b',1},{'c',2},
   {'d',3},{'e',4},{'f',5},{'g',6},{'h',7},{'i',8},{'j',9},{'k',10},
   {'l',11},{'m',12},{'n',13},{'o',14},{'p',15},{'q',16},{'r',17},
   {'s',18},{'t',19},{'u',20},{'v',21},{'w',22},{'x',23}, {'y',24},{'z',25}};


   vector<int> finalresult(26,0);


   for(int i = 0; i < n; i++){
       string first = "", second = "";
       cin >> first >> second;


       vector<int> a(26,0); vector<int> b(26,0);
       for(int j = 0; j < first.length(); j++){
           a[letters[first[j]]]++;
       }


       for(int k = 0; k < second.length(); k++){
           b[letters[second[k]]]++;
       }
       for(int m = 0; m < 26; m++){
           finalresult[m] += max(a[m],b[m]);
       }
   }
   for(int i : finalresult){
       cout << i << endl;
   }


  
}
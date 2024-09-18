#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int solution = 1;
    for(int i = n; i >=1; i--){
        solution *= i;
    }
    return solution;
}


int main(){
   
int n = 1000000;
vector<int> digits;

vector<int> d = {0,1,2,3,4,5,6,7,8,9};
            //{0,1,3,4,5,6,7,8,9}

for(int i = 9; i >= 1; i--){
    int a = ceil(n/factorial(i));
    n -= a*factorial(i);
    a = d[a];
    digits.push_back(a);
   
    auto it = find(d.begin(),d.end(),a);
    if(it != d.end()){
        d.erase(it);
    }
    cout << n << endl;
}

for(int i : digits){
    cout << i;
}


}
#include <bits/stdc++.h>
using namespace std;

int factor(int n){
    int sum = 0;
    for(int i = 1; i <= floor(sqrt(n)); i++){
        if(n%i==0){
            sum += i;
            sum += (n/i);
        }
    }
    
    if(floor(sqrt(n))*floor(sqrt(n))==n){
        sum -= floor(sqrt(n));
    }
    
    return sum-n;
}



int main() {

set<int> already;    

    for(int i = 1; i < 10000; i++){
        int num = factor(i);
        if(factor(num) == i && num != i){
            already.insert(num);
            already.insert(i);
        }
    }

int sum = 0;

for(int z : already){
    sum += z;
}

cout << sum;

}
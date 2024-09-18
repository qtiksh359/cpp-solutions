#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int sum = 2;
    int a = 1, b = 2;
    while(b <= 4e6){
        int c = b;
        b = a+b;
        a = c;
        if(b%2==0){
            sum += b;
        }
    }
    
    cout << sum;
}
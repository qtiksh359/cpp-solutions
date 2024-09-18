#include <bits/stdc++.h>
using namespace std;

int count(int p){
    int numcount = 0;
    for(int a = 1; a <= p/3; a++){
        for(int b = a+1; b <= 2*p/3; b++){
            for(int c = b+1; c <= p-3; c++){
                if(a + b + c == p && a*a+b*b==c*c){
                    numcount++;
                }
            }
        }
    }
    return numcount;
}


int main(){
    int maxcount = 0, maxp = 0;
    for(int p = 12; p <= 1000; p++){
        int num = count(p);
        if(num > maxcount){
            maxcount = num;
            maxp = p;
        }
    }
    
    cout << maxp << " " << maxcount;
}

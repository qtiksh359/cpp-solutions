#include <bits/stdc++.h>
using namespace std;

 
int main(){
    bool yes = true;
    for(int a = 1; a <= 333 && yes == true; a++){
        for(int b = a+1; b <= 1000; b++){
            int c = 1000-a-b;
            if(c > b){
                if(a*a+b*b==c*c){
                    cout << a*b*c;
                    yes = false;
                }
            }
        }
    }
}
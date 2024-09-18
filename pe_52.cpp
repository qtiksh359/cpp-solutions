#include <bits/stdc++.h>
using namespace std;

bool check(unsigned long long int a, unsigned long long int b, unsigned long long int c, unsigned long long int d, unsigned long long int e){
    string s1 = to_string(a), s2 = to_string(b), s3 = to_string(c), s4 = to_string(d), s5 = to_string(e);
    vector<char> v1, v2, v3, v4, v5;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    sort(s5.begin(),s5.end());
    if(s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5){
        return true;
    }
    return false;
}


int main(){
    unsigned long long int x = 1;
    while(trie){
        if(check(2*x,3*x,4*x,5*x,6*x)){
            break;
        }else{
        x++;   
        }
    }
    cout << x;
}
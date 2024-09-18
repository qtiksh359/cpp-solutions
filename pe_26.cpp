#include <iostream>
#include <cmath>
using namespace std;

bool divi(string s, int divisor) {
    int num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
        num %= divisor;
    }
    return num == 0;
}

int main() {
    int maxd = -1, maxcount = -1;
    for(int i = 2; i <= 999; i++){
        int n = i, tempcount = 0;
        while(n%2 == 0) n /= 2;
        while(n%5 == 0) n /= 5;
        string temp = "9";
        while(!divi(temp,n)){
            tempcount++;
            temp += "9";
        }
        if(tempcount > maxcount){
            maxcount = tempcount;
            maxd = i;
        }
    }

    cout << maxd << endl;

}
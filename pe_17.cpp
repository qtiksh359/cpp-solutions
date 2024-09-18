#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int lettercount = 0;
    
    // X one two three four five six seven eight nine
    // x x twenty thirty forty fifty sixty seventy eighty ninety
    
    unordered_map<int,int> unitsmap = {{0,0},{1,3},{2,3},{3,5},{4,4},{5,4},{6,3},{7,5},{8,5},{9,4}};
    unordered_map<int,int> tensmap = {{0,0},{2,6},{3,6},{4,5},{5,5},{6,5},{7,7},{8,6},{9,6}};
    
    for(int i = 1; i <= 999; i++){
        int unitsdigit = i%10;
        int tensdigit = floor((i%100)/10);
        int hundredsdigit = floor((i%1000)/100);
        if(tensdigit != 1){
            lettercount += tensmap[tensdigit] + unitsmap[unitsdigit];
        }else{
            switch(i%100){
            // ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
                case 10:
                    lettercount += 3;
                    break;
                case 11:
                    lettercount += 6;
                    break;
                case 12:
                    lettercount += 6;
                    break;
                case 13:
                    lettercount += 8;
                    break;
                case 14:
                    lettercount += 8;
                    break;
                case 15:
                    lettercount += 7;
                    break;
                case 16:
                    lettercount += 7;
                    break;
                case 17:
                    lettercount += 9;
                    break;
                case 18:
                    lettercount += 8;
                    break;
                case 19:
                    lettercount += 8;
                    break;
            }
        }
        if(i >= 100 && i%100 != 0){
            lettercount += 3; // "and"
        }
        if(i >= 100){
            lettercount += unitsmap[hundredsdigit] + 7; // "hundred"
        }
    }
    lettercount += 11; // "one thousand"
    
    cout << lettercount;
}
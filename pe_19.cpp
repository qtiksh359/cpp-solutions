#include <bits/stdc++.h>
using namespace std;


int main() {

int year = 1901;
int month = 1;
int day = 3;
int suncount = 0;

    while(year <= 2000){
        bool leapyear = year%4==0 && year%100!= 0;
        if(year%400==0) leapyear = true;
        
        day = (day-1)%7 + 1;
        
        while(month <= 12){
            if(month == 2 && leapyear){
            if(day == 1) suncount++;
            day += 1;
            day = (day-1)%7 + 1;
            month++;
        }else if(month ==2 && !leapyear){
            if(day == 1) suncount++;
            day = (day-1)%7 + 1;
            month++;
        }else if(month == 4 || month == 6 || month == 9 || month == 11){
            if(day == 1) suncount++;
            day += 2;
            day = (day-1)%7 + 1;
            month++;
        }else{
            if(day == 1) suncount++;
            day += 3;
            day = (day-1)%7 + 1;
            month++;
        }    
        }
        month = 1;
        year++;
        
    }




    cout << suncount;
}
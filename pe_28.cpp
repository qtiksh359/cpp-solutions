#include <bits/stdc++.h>
using namespace std;


int main() {
unsigned long long int sum = 1;
int num = 1;
int spacing = 2;

while(spacing <= 1000){
    
    sum += num + spacing;
    num += spacing;
    sum += num + spacing;
    num += spacing;
    sum += num + spacing;
    num += spacing;
    sum += num + spacing;
    num += spacing;
    
    spacing += 2;
}
    cout << sum;
}
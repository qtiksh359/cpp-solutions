#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums(7);

    for(int i = 0; i < 7; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int a, b, c;
    a = nums[0];
    b = nums[1];
    c = nums[6] - a - b;
    cout << a << " " << b << " " << c;



}

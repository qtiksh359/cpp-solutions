#include <bits/stdc++.h>
using namespace std;

string addLargeNumbers(const string &num1, const string &num2) {
    string result = "";
    int carry = 0;
    int n1 = num1.size();
    int n2 = num2.size();
    
    for (int i = 0; i < std::max(n1, n2); ++i) {
        int digit1 = i < n1 ? num1[n1 - i - 1] - '0' : 0;
        int digit2 = i < n2 ? num2[n2 - i - 1] - '0' : 0;
        
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.insert(result.begin(), sum % 10 + '0');
    }
    
    if (carry) {
        result.insert(result.begin(), carry + '0');
    }
    
    return result;
}

int main() {
    string a = "1";
    string b = "1";
    int index = 2;

    while (b.length() < 1000) {
        std::string next = addLargeNumbers(a, b);
        a = b;
        b = next;
        index++;
    }

    cout << index << endl;

    return 0;
}

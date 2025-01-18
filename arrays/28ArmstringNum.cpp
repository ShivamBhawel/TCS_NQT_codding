#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); // Input comma-separated values
    string temp = "";
    vector<int> v;

    // Parse the input string into integers
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ',') {
            temp += str[i];
        } else {
            int val = stoi(temp);
            v.push_back(val);
            temp = "";
        }
    }

    // Handle the last number
    if (!temp.empty()) {
        int val = stoi(temp);
        v.push_back(val);
    }

    

    // Check for Armstrong numbers
    cout << "Armstrong numbers: ";
    for (auto i : v) {
        int n = i, ans = 0;
        while (n != 0) {
            int digit = n % 10;
            ans += (digit * digit * digit);
            n /= 10;
        }
        if (i == ans) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

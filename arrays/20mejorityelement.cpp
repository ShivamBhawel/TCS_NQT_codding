#include <iostream>  //6 may 2024 shift 1
#include <map>
#include <vector>
using namespace std;


int main() {
    vector<int> arr = {3, 2, 3, 3};
    int res = 0; // To store the most occurring element
    int count = 0; // To store the highest frequency
    map<int, int> mp;

    // Count the frequency of each element
    for (auto i : arr) {
        mp[i]++;
    }

    // Find the element with the maximum frequency
    for (auto i : mp) {
        if (i.second > count) {
            count = i.second;
            res = i.first;
        }
    }

    cout << "The most occurring element is: " << res << endl;
    
    return 0;
}

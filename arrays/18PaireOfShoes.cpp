/* TCS NQT 2024 3 MAY shift 2 

   A Person has many shoes of different sizes and he wants to 
arrange them , Calculate the number of pairs of shoes.

Example 1 :
8
7L 7R 7L 8L 6R 7R 8R 6R
output = 3;

Example 2 

7R 7L 8R 10R 10L
output = 2
*/
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> arr = {"7L", "7R", "7L", "8L", "6R", "7R", "8R", "6R"};
    map<string, int> mp;

    // Count occurrences of each shoe size and type (left or right)
    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }

    int pairs = 0;

    // Check for pairs by matching left and right shoes of the same size
    for (auto i : mp) {
        string key = i.first;
        int val = i.second;

        // Separate the size and the side (L or R)
        string size = key.substr(0, key.size() - 1);
        char side = key.back();

        // Find the matching side (if current is L, find R and vice versa)
        string oppositeKey = size + (side == 'L' ? "R" : "L");

        if (mp.find(oppositeKey) != mp.end()) {
            // Add the minimum of the two counts to the pairs
            pairs += min(val, mp[oppositeKey]);

            // Set both counts to 0 to avoid double counting
            mp[key] = 0;
            mp[oppositeKey] = 0;
        }
    }

    cout << "Number of pairs: " << pairs << endl;

    return 0;
}

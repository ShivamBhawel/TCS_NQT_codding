 //30 april 2024
 /*
 Find the majority element ,
 majority element is the element which occurs more then or equal to n/2 
 time the array wheve 'N' si the size of the array 
 */
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int>arr = { 2, 4, 2, 4, 2, 4, 5, 8, 8, 8 };
    int n = arr.size();
     vector<int>res;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Debugging: Print frequencies of all elements
    cout << "Element frequencies:\n";
    for (auto i : mp) {

       if(i.second >= n/2){

             cout<<i.first<<" ";
       }
          
    }


    return 0;
}

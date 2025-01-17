/*
                   06 may 2024 shift 1

Given an array  nums with a objects colored red,white,or blue, sort them in 
place so that objects of the same color are adjacent, with the color in the 
order red,white and blue 
we will use the integers 3,6 and 7 to represent the color red , white and blue respectively. 
you must solve this problem without using the library's sort funtion */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 6, 3, 7, 6, 3, 7};

    int l = 0; // Left pointer for red (3)
    int m = 0; // Middle pointer
    int r = arr.size() - 1; // Right pointer for blue (7)

    // Dutch National Flag Algorithm
    while (m <= r) {
        if (arr[m] == 3) { // Red
            swap(arr[l], arr[m]);
            l++;
            m++;
        } else if (arr[m] == 6) { // White
            m++;
        } else if (arr[m] == 7) { // Blue
            swap(arr[m], arr[r]);
            r--;
        }
    }

    // Print the sorted array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
                        // 29 april 2024 shift 1;

                        /* Input =  2, 4, 7, 1, 6, 3
                            Output = 7 7 7 6 
                            
                            2 , 4 , 7 => 7 
                            4 , 7 , 1 => 7 
                            7 , 1 , 6 => 7
                            1 , 6 , 3 => 6  

                            1____ 3_____
                            2 4 7 1 6 3 
                                2____

                                
                             */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int arr[] = {2, 4, 7, 1, 6, 3};
    int k = 3;
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    priority_queue<int> q;
    priority_queue<int> empty;

    int i = 0;

    while (i < n) {
        if (q.size() < k) {
            q.push(arr[i]);
            i++;
        }
        
        if (q.size() == k) {
            int data = q.top(); 
            v.push_back(data); 
            
            q = empty;

            // Move the window one step forward
           i = i - k + 1;
           
        }
    }

    // Print the result
    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << " ";
    }

    return 0;
}


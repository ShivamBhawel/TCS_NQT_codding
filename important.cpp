/*  Example 1:

Input: boxes = "110"
Output: [1,1,3]
Explanation: The answer for each box is as follows:
1) First box: you will have to move one ball from the second box to the first box in one operation.
2) Second box: you will have to move one ball from the first box to the second box in one operation.
3) Third box: you will have to move one ball from the first box to the third box in two operations, and move one ball from the second box to the third box in one operation.
Example 2:

Input: boxes = "001011"
Output: [11,8,5,4,3,4]
 */

#include<iostream>
#include<vector>
#include<unordered_set>
#include<cmath>

using namespace std;
int main(){

      vector<int>  boxs = {0,0,1,0,1,1};
      int n = boxs.size();
      vector<int>v(n,0);
      vector<int>ans;
      unordered_set<int>st;
      int res = 0;

      for(int i=0;i<boxs.size();i++){

         if(boxs[i] == 1){

             st.insert(i);
         }

      }
      for(int i=0;i<boxs.size();i++){

           res = 0;
           for(auto it : st){

                 v[i]+= abs(i - it);
                 res += abs(i-it);
                 
           }
           ans.push_back(res);
          
           
      }
       
    
  for(auto val : v){
    cout<<val<<" ";
  }
  cout<<endl;
  for(auto i : ans){
    cout<<i<<" ";
  }

}

/*
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        unordered_set<int> st;

        for(int i = 0; i < n; i++) {
            if(boxes[i] == '1') {
                st.insert(i);
            }
        }

        vector<int> answer(n, 0);

        for(int i = 0; i < n; i++) {
            for(auto &idx : st) {
                answer[i] += abs(i - idx);
            }
        }

        return answer;

    }
};

*/
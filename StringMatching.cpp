/*  
Example 1:

Input: words = ["mass","as","hero","superhero"]
Output: ["as","hero"]
Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.
Example 2:

Input: words = ["leetcode","et","code"]
Output: ["et","code"]
Explanation: "et", "code" are substring of "leetcode".
Example 3:

Input: words = ["blue","green","bu"]
Output: []
Explanation: No string of words is substring of another string.
 */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        vector<string>res;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){

                if(i == j){
                    continue;
                }
                if(words[j].find(words[i]) != string::npos){
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};
int main(){

Solution obj;

}
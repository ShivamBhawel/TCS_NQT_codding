   /*       git push -u origin main

          input s = "  (  )  )  (  (  )  (  ( "
        input loked = 1  0  0  0  1  1  1  1

        output false 

        input s = " ( ( ) ) ( ) ) )"
         locked  =  1 1 1 1 1 1 0 0

         0 index can be converted "(" to ")"
         1 index not change...
 */
#include<iostream>
#include<stack>
using namespace std;

 class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();

        if(n%2 != 0) { //odd
            return false;
        }

        stack<int> open;
        stack<int> openClose;

        for(int i = 0; i < n; i++) {
            if(locked[i] == '0') {
                openClose.push(i);
            } else if(s[i] == '(') {
                open.push(i);
            } else if(s[i] == ')') {
                if(!open.empty()) {
                    open.pop();
                } else if(!openClose.empty()) {
                    openClose.pop();
                } else {
                    return false;
                }
            }
        }

        while(!open.empty() && !openClose.empty() && open.top() < openClose.top()) {
            open.pop();
            openClose.pop();
        }


        return open.empty(); //true

    }
};
int main(){

    Solution obj;
    string s = "((())))";
    string loked = "0101110";
    obj.canBeValid(s , loked);
}

/* 
//Approach-2 (Without using stack)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();

        if(n%2 != 0) { //odd
            return false;
        }

        //L to R
        int open = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(' || locked[i] == '0') {
                open++;
            } else {
                open--;
            }

            if(open < 0) {
                return false;
            }
        }

        //R to L
        int close = 0;
        for(int i = n-1; i >= 0; i--) {
            if(s[i] == ')' || locked[i] == '0') {
                close++;
            } else {
                close--;
            }

            if(close < 0) {
                return false;
            }
        }

        return true;

    }
};

*/
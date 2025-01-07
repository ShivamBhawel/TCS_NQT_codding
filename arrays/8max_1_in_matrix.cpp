
/*
                  TCS NQT 2022

                  input :
                  N = 4 , M = 4;
                  arr[][] = { {0,1,1,1},
                              {0,1,0,1},
                              {0,0,0,0},
                              {1,1,1,1} }

                output = 3
             return the index who contain maximum 1's

*/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int rowwithMax1s(vector<vector<int>> arr, int n, int m){

int maxi = INT_MIN;
int ans = -1;
for(int i=0;i<n;i++){
 
 int count = 0;
     for(int j=0;j<m;j++){

        if(arr[i][j] == 1){
            count++;
        }
     }
     if(count != 0 && count>maxi){
        ans = i;
        maxi = count;
     }
   }
   return ans;
}
int main(){
 int m = 4;
 int n = 4;
  vector<vector<int>> arr = {{ 0,1,1,1},
                             {0,1,0,1},
                             {0,0,0,0},
                             {1,1,1,1}};

                             cout<<rowwithMax1s(arr,n,m);

}
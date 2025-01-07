// 3 may 2024 shift 1
/*  find the difference of smallest and largest element */


#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

vector<int> arr = { -3 , -5 , 1 , 6 , -7 , 8 , 11};
int maxval = 0;
int minval = INT_MIN;
for(int i=0;i<arr.size();i++){

 if(maxval < arr[i]){

    maxval = arr[i];
 }else{

        minval = min(minval,arr[i]);
 }

}

cout<<maxval - (minval);
    
}